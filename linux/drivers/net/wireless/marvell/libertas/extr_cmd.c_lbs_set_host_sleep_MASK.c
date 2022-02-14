
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct wol_config {int dummy; } ;
struct lbs_private {int is_host_sleep_activated; scalar_t__ psstate; int dev; int host_sleep_q; int wol_criteria; } ;
struct cmd_header {int dummy; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct lbs_private*,int ,struct cmd_header*,int,int ,int ) ;
 int FUNC_1 (struct lbs_private*,int ,struct wol_config*) ;
 int VAR_4 ;
 int FUNC_2 (struct cmd_header*,int ,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int ,int,int) ;

int FUNC_6(struct lbs_private *VAR_5, int VAR_6)
{
 struct cmd_header VAR_7;
 int VAR_8 = 0;
 uint32_t VAR_9 = VAR_1;

 if (VAR_6) {
  if (VAR_5->is_host_sleep_activated != 1) {
   FUNC_2(&VAR_7, 0, sizeof(VAR_7));
   VAR_8 = FUNC_1(VAR_5, VAR_5->wol_criteria,
     (struct wol_config *)((void*)0));
   if (VAR_8) {
    FUNC_4(VAR_5->dev,
         "Host sleep configuration failed: %d\n",
         VAR_8);
    return VAR_8;
   }
   if (VAR_5->psstate == VAR_3) {
    VAR_8 = FUNC_0(VAR_5,
      VAR_0,
      &VAR_7,
      sizeof(VAR_7),
      VAR_4, 0);
    if (VAR_8)
     FUNC_4(VAR_5->dev,
          "HOST_SLEEP_ACTIVATE failed: %d\n",
          VAR_8);
   }

   if (!FUNC_5(
      VAR_5->host_sleep_q,
      VAR_5->is_host_sleep_activated,
      (10 * VAR_2))) {
    FUNC_3(VAR_5->dev,
        "host_sleep_q: timer expired\n");
    VAR_8 = -1;
   }
  } else {
   FUNC_3(VAR_5->dev, "host sleep: already enabled\n");
  }
 } else {
  if (VAR_5->is_host_sleep_activated)
   VAR_8 = FUNC_1(VAR_5, VAR_9,
     (struct wol_config *)((void*)0));
 }

 return VAR_8;
}
