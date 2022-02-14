
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {scalar_t__ mmio; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct comedi_device*,int) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_2)
{
 int VAR_3;
 int VAR_4;

 FUNC_1(0x0, VAR_2->mmio + VAR_0);
 for (VAR_4 = 0; VAR_4 < 3; ++VAR_4) {
  VAR_3 = FUNC_0(VAR_2, VAR_4);
  if (VAR_3 < 0)
   break;
 }
 FUNC_1(0x0, VAR_2->mmio + VAR_1);
 return VAR_3;
}
