
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct me_private_data {scalar_t__ plx_regbase; } ;
struct comedi_device {scalar_t__ mmio; struct me_private_data* private; } ;


 int FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct comedi_device*) ;

__attribute__((used)) static void FUNC_3(struct comedi_device *VAR_0)
{
 struct me_private_data *VAR_1 = VAR_0->private;

 if (VAR_1) {
  if (VAR_0->mmio)
   FUNC_2(VAR_0);
  if (VAR_1->plx_regbase)
   FUNC_1(VAR_1->plx_regbase);
 }
 FUNC_0(VAR_0);
}
