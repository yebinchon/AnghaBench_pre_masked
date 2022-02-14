
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct ican3_dev {int num; int napi; TYPE_2__* ctrl; TYPE_1__* dpmctrl; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {int int_disable; } ;
struct TYPE_3__ {int interrupt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_2, void *VAR_3)
{
 struct ican3_dev *VAR_4 = VAR_3;
 u8 VAR_5;





 VAR_5 = FUNC_0(&VAR_4->ctrl->int_disable) & (1 << VAR_4->num);
 if (VAR_5 == (1 << VAR_4->num))
  return VAR_1;


 FUNC_0(&VAR_4->dpmctrl->interrupt);


 FUNC_1(1 << VAR_4->num, &VAR_4->ctrl->int_disable);
 FUNC_2(&VAR_4->napi);
 return VAR_0;
}
