
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int ocp_glitch; } ;
struct rtsx_cr_option {int sd_800mA_ocp_thd; scalar_t__ ocp_en; } ;
struct rtsx_pcr {TYPE_1__ hw_param; struct rtsx_cr_option option; TYPE_2__* ops; } ;
struct TYPE_4__ {int (* init_ocp ) (struct rtsx_pcr*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct rtsx_pcr*) ;
 int FUNC_1 (struct rtsx_pcr*,int ,int ,int ) ;
 int FUNC_2 (struct rtsx_pcr*) ;

void FUNC_3(struct rtsx_pcr *VAR_9)
{
 if (VAR_9->ops->init_ocp) {
  VAR_9->ops->init_ocp(VAR_9);
 } else {
  struct rtsx_cr_option *VAR_10 = &(VAR_9->option);

  if (VAR_10->ocp_en) {
   u8 VAR_11 = VAR_10->sd_800mA_ocp_thd;

   FUNC_1(VAR_9, VAR_0, VAR_1, 0);
   FUNC_1(VAR_9, VAR_3,
    VAR_8, VAR_7);
   FUNC_1(VAR_9, VAR_4,
    VAR_6, VAR_11);
   FUNC_1(VAR_9, VAR_2,
    VAR_5, VAR_9->hw_param.ocp_glitch);
   FUNC_0(VAR_9);
  } else {

   FUNC_1(VAR_9, VAR_0, VAR_1,
    VAR_1);
  }
 }
}
