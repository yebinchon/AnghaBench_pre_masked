
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct db2k_private {scalar_t__ plx; } ;
struct comedi_device {struct db2k_private* private; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct comedi_device *VAR_2)
{
 struct db2k_private *VAR_3 = VAR_2->private;
 u32 VAR_4;

 VAR_4 = FUNC_1(VAR_3->plx + VAR_1);
 VAR_4 |= VAR_0;
 FUNC_2(VAR_4, VAR_3->plx + VAR_1);
 FUNC_0(10);
 VAR_4 &= ~VAR_0;
 FUNC_2(VAR_4, VAR_3->plx + VAR_1);
 FUNC_0(10);
}
