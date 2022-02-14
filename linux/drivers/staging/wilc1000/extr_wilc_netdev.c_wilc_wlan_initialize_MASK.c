
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wilc_vif {struct wilc* wilc; } ;
struct wilc {int initialized; scalar_t__ dev_irq_num; TYPE_1__* hif_func; scalar_t__ gpio_irq; scalar_t__ close; int mac_status; } ;
struct net_device {int dummy; } ;
typedef int firmware_ver ;
struct TYPE_2__ {int (* disable_interrupt ) (struct wilc*) ;scalar_t__ (* enable_interrupt ) (struct wilc*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,char*,...) ;
 int FUNC_3 (struct net_device*,char*) ;
 scalar_t__ FUNC_4 (struct wilc*) ;
 int FUNC_5 (struct wilc*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*,struct wilc_vif*) ;
 int FUNC_8 (struct net_device*) ;
 scalar_t__ FUNC_9 (struct wilc_vif*,int,int ,int,int ) ;
 int FUNC_10 (struct wilc*,int ,char*,int) ;
 int FUNC_11 (struct net_device*) ;
 scalar_t__ FUNC_12 (struct net_device*) ;
 int FUNC_13 (struct net_device*) ;
 int FUNC_14 (struct wilc*,struct wilc_vif*) ;
 int FUNC_15 (struct net_device*) ;
 int FUNC_16 (struct net_device*) ;

__attribute__((used)) static int FUNC_17(struct net_device *VAR_3, struct wilc_vif *VAR_4)
{
 int VAR_5 = 0;
 struct wilc *VAR_6 = VAR_4->wilc;

 if (!VAR_6->initialized) {
  VAR_6->mac_status = VAR_2;
  VAR_6->close = 0;

  VAR_5 = FUNC_13(VAR_3);
  if (VAR_5 < 0)
   return -VAR_0;

  VAR_5 = FUNC_16(VAR_3);
  if (VAR_5 < 0) {
   VAR_5 = -VAR_0;
   goto fail_wilc_wlan;
  }

  if (VAR_6->gpio_irq && FUNC_1(VAR_3)) {
   VAR_5 = -VAR_0;
   goto fail_threads;
  }

  if (!VAR_6->dev_irq_num &&
      VAR_6->hif_func->enable_interrupt &&
      VAR_6->hif_func->enable_interrupt(VAR_6)) {
   VAR_5 = -VAR_0;
   goto fail_irq_init;
  }

  if (FUNC_12(VAR_3)) {
   VAR_5 = -VAR_0;
   goto fail_irq_enable;
  }

  VAR_5 = FUNC_6(VAR_3);
  if (VAR_5 < 0) {
   VAR_5 = -VAR_0;
   goto fail_irq_enable;
  }

  VAR_5 = FUNC_8(VAR_3);
  if (VAR_5 < 0) {
   VAR_5 = -VAR_0;
   goto fail_irq_enable;
  }

  if (FUNC_9(VAR_4, 1, VAR_1, 1, 0)) {
   int VAR_7;
   char VAR_8[20];

   VAR_7 = FUNC_10(VAR_6, VAR_1,
           VAR_8,
           sizeof(VAR_8));
   VAR_8[VAR_7] = '\0';
   FUNC_2(VAR_3, "Firmware Ver = %s\n", VAR_8);
  }
  VAR_5 = FUNC_7(VAR_3, VAR_4);

  if (VAR_5 < 0) {
   FUNC_3(VAR_3, "Failed to configure firmware\n");
   VAR_5 = -VAR_0;
   goto fail_fw_start;
  }
  VAR_6->initialized = 1;
  return 0;

fail_fw_start:
  FUNC_14(VAR_6, VAR_4);

fail_irq_enable:
  if (!VAR_6->dev_irq_num &&
      VAR_6->hif_func->disable_interrupt)
   VAR_6->hif_func->disable_interrupt(VAR_6);
fail_irq_init:
  if (VAR_6->dev_irq_num)
   FUNC_0(VAR_3);
fail_threads:
  FUNC_15(VAR_3);
fail_wilc_wlan:
  FUNC_11(VAR_3);
  FUNC_3(VAR_3, "WLAN initialization FAILED\n");
 } else {
  FUNC_2(VAR_3, "wilc1000 already initialized\n");
 }
 return VAR_5;
}
