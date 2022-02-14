
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {scalar_t__ mmio; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct comedi_device*) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct comedi_device *VAR_4)
{
 FUNC_1(VAR_4);

 FUNC_2(0, VAR_4->mmio + VAR_3);
 FUNC_2(0, VAR_4->mmio + VAR_1);
 FUNC_2(0, VAR_4->mmio + VAR_0);
 FUNC_2(0, VAR_4->mmio + FUNC_0(0));
 FUNC_2(0, VAR_4->mmio + FUNC_0(1));

 FUNC_3(0, VAR_4->mmio + VAR_2);

}
