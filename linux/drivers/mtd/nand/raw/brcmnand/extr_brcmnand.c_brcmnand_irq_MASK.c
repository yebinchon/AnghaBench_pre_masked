
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct brcmnand_controller {TYPE_1__* soc; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {scalar_t__ (* ctlrdy_ack ) (TYPE_1__*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int,void*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_1, void *VAR_2)
{
 struct brcmnand_controller *VAR_3 = VAR_2;

 if (VAR_3->soc->ctlrdy_ack(VAR_3->soc))
  return FUNC_0(VAR_1, VAR_2);

 return VAR_0;
}
