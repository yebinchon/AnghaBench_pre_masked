
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {scalar_t__ mmio; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < 100; VAR_4++) {
  if (FUNC_0(VAR_3->mmio + VAR_1) &
      VAR_0) {
   return 0;
  }
  FUNC_1(1);
 }
 return -VAR_2;
}
