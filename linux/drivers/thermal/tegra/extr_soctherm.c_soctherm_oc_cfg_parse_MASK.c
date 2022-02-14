
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_2__ {int active_low; int intr_en; int mode; void* alarm_filter; void* throt_period; void* alarm_cnt_thresh; } ;
struct soctherm_throt_cfg {TYPE_1__ oc_cfg; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct device_node*,char*) ;
 int FUNC_1 (struct device_node*,char*,void**) ;

__attribute__((used)) static void FUNC_2(struct device *VAR_1,
    struct device_node *VAR_2,
    struct soctherm_throt_cfg *VAR_3)
{
 u32 VAR_4;

 if (FUNC_0(VAR_2, "nvidia,polarity-active-low"))
  VAR_3->oc_cfg.active_low = 1;
 else
  VAR_3->oc_cfg.active_low = 0;

 if (!FUNC_1(VAR_2, "nvidia,count-threshold", &VAR_4)) {
  VAR_3->oc_cfg.intr_en = 1;
  VAR_3->oc_cfg.alarm_cnt_thresh = VAR_4;
 }

 if (!FUNC_1(VAR_2, "nvidia,throttle-period-us", &VAR_4))
  VAR_3->oc_cfg.throt_period = VAR_4;

 if (!FUNC_1(VAR_2, "nvidia,alarm-filter", &VAR_4))
  VAR_3->oc_cfg.alarm_filter = VAR_4;


 VAR_3->oc_cfg.mode = VAR_0;
}
