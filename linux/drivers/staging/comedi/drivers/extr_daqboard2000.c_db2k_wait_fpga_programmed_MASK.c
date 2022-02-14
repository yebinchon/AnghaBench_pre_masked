
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct db2k_private {scalar_t__ plx; } ;
struct comedi_device {struct db2k_private* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_3)
{
 struct db2k_private *VAR_4 = VAR_3->private;
 int VAR_5;


 for (VAR_5 = 0; VAR_5 < 200; VAR_5++) {
  u32 VAR_6 = FUNC_0(VAR_4->plx + VAR_2);

  if (VAR_6 & VAR_1)
   return 0;

  FUNC_1(100, 1000);
 }
 return -VAR_0;
}
