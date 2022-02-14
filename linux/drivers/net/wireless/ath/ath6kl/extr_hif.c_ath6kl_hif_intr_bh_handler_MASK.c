
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ath6kl_device {TYPE_2__* htc_cnxt; } ;
struct ath6kl {TYPE_1__* htc_target; } ;
struct TYPE_4__ {scalar_t__ chk_irq_status_cnt; } ;
struct TYPE_3__ {struct ath6kl_device* dev; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (struct ath6kl_device*,int*) ;
 scalar_t__ FUNC_2 (unsigned long,unsigned long) ;

int FUNC_3(struct ath6kl *VAR_2)
{
 struct ath6kl_device *VAR_3 = VAR_2->htc_target->dev;
 unsigned long VAR_4;
 int VAR_5 = 0;
 bool VAR_6 = 0;





 VAR_3->htc_cnxt->chk_irq_status_cnt = 0;





 VAR_4 = VAR_1 + FUNC_0(VAR_0);
 while (FUNC_2(VAR_1, VAR_4) && !VAR_6) {
  VAR_5 = FUNC_1(VAR_3, &VAR_6);
  if (VAR_5)
   break;
 }

 return VAR_5;
}
