
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct wol_config {int dummy; } ;
struct lbs_private {int dev; int wol_gap; int wol_gpio; int ehs_remove_supported; } ;
struct TYPE_3__ {int action; } ;
struct TYPE_4__ {int size; } ;
struct cmd_ds_host_sleep {TYPE_1__ wol_conf; TYPE_2__ hdr; int gap; int gpio; int criteria; } ;
typedef int cmd_config ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct lbs_private*,int ,TYPE_2__*,int ,int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int ,char*,int) ;

int FUNC_6(struct lbs_private *VAR_4, uint32_t VAR_5,
  struct wol_config *VAR_6)
{
 struct cmd_ds_host_sleep VAR_7;
 int VAR_8;






 if (VAR_5 == VAR_2 && !VAR_4->ehs_remove_supported)
  VAR_5 = 0;

 VAR_7.hdr.size = FUNC_1(sizeof(VAR_7));
 VAR_7.criteria = FUNC_2(VAR_5);
 VAR_7.gpio = VAR_4->wol_gpio;
 VAR_7.gap = VAR_4->wol_gap;

 if (VAR_6 != ((void*)0))
  FUNC_4((uint8_t *)&VAR_7.wol_conf, (uint8_t *)VAR_6,
    sizeof(struct wol_config));
 else
  VAR_7.wol_conf.action = VAR_1;

 VAR_8 = FUNC_0(VAR_4, VAR_0, &VAR_7.hdr,
   FUNC_3(VAR_7.hdr.size),
   VAR_3, 0);
 if (!VAR_8) {
  if (VAR_6)
   FUNC_4((uint8_t *) VAR_6,
     (uint8_t *)&VAR_7.wol_conf,
     sizeof(struct wol_config));
 } else {
  FUNC_5(VAR_4->dev, "HOST_SLEEP_CFG failed %d\n", VAR_8);
 }

 return VAR_8;
}
