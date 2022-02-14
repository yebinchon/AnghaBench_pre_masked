
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {scalar_t__ mmio; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 unsigned int FUNC_1 (struct comedi_device*) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct comedi_device *VAR_1)
{
 unsigned int VAR_2 = FUNC_1(VAR_1);
 int VAR_3;


 for (VAR_3 = 0; VAR_3 < VAR_2; ++VAR_3)
  FUNC_2(0x00, VAR_1->mmio + FUNC_0(VAR_3));


 FUNC_3(0x00000000, VAR_1->mmio + VAR_0);
}
