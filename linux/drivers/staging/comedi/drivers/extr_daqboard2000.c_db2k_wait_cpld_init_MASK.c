
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct comedi_device {scalar_t__ mmio; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_3)
{
 int VAR_4 = -VAR_2;
 int VAR_5;
 u16 VAR_6;


 for (VAR_5 = 0; VAR_5 < 50; VAR_5++) {
  VAR_6 = FUNC_0(VAR_3->mmio + VAR_1);
  if (VAR_6 & VAR_0) {
   VAR_4 = 0;
   break;
  }
  FUNC_2(100, 1000);
 }
 FUNC_1(5);
 return VAR_4;
}
