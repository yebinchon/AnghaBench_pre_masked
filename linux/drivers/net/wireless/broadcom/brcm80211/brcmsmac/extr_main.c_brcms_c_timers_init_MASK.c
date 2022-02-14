
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcms_c_info {int wiphy; void* radio_timer; int wl; void* wdtimer; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,int ,struct brcms_c_info*,char*) ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static bool FUNC_2(struct brcms_c_info *VAR_2, int VAR_3)
{
 VAR_2->wdtimer = FUNC_0(VAR_2->wl, VAR_1,
  VAR_2, "watchdog");
 if (!VAR_2->wdtimer) {
  FUNC_1(VAR_2->wiphy, "wl%d:  wl_init_timer for wdtimer "
     "failed\n", VAR_3);
  goto fail;
 }

 VAR_2->radio_timer = FUNC_0(VAR_2->wl, VAR_0,
  VAR_2, "radio");
 if (!VAR_2->radio_timer) {
  FUNC_1(VAR_2->wiphy, "wl%d:  wl_init_timer for radio_timer "
     "failed\n", VAR_3);
  goto fail;
 }

 return 1;

 fail:
 return 0;
}
