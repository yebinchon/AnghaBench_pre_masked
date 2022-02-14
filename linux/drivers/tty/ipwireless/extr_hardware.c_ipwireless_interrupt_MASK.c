
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ipw_dev {TYPE_1__* hardware; } ;
typedef int irqreturn_t ;
struct TYPE_3__ {scalar_t__ hw_version; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,TYPE_1__*) ;
 int FUNC_1 (int,TYPE_1__*) ;

irqreturn_t FUNC_2(int VAR_1, void *VAR_2)
{
 struct ipw_dev *VAR_3 = VAR_2;

 if (VAR_3->hardware->hw_version == VAR_0)
  return FUNC_0(VAR_1, VAR_3->hardware);
 else
  return FUNC_1(VAR_1, VAR_3->hardware);
}
