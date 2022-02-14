
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct vub300_mmc_host {int card_powered; int kref; int cmd_mutex; int udev; int interface; } ;
struct mmc_ios {scalar_t__ power_mode; } ;
struct mmc_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct vub300_mmc_host*,int *,struct mmc_ios*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 struct vub300_mmc_host* FUNC_5 (struct mmc_host*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int ,int ,int,int,int,int *,int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_11(struct mmc_host *VAR_10, struct mmc_ios *VAR_11)
{
 struct vub300_mmc_host *VAR_12 = FUNC_5(VAR_10);
 if (!VAR_12->interface)
  return;
 FUNC_3(&VAR_12->kref);
 FUNC_7(&VAR_12->cmd_mutex);
 if ((VAR_11->power_mode == VAR_2) && VAR_12->card_powered) {
  VAR_12->card_powered = 0;
  FUNC_9(VAR_12->udev, FUNC_10(VAR_12->udev, 0),
    VAR_5,
    VAR_6 | VAR_8 | VAR_7,
    0x0000, 0x0000, ((void*)0), 0, VAR_1);

  FUNC_6(600);
 } else if ((VAR_11->power_mode == VAR_4) && !VAR_12->card_powered) {
  FUNC_9(VAR_12->udev, FUNC_10(VAR_12->udev, 0),
    VAR_5,
    VAR_6 | VAR_8 | VAR_7,
    0x0001, 0x0000, ((void*)0), 0, VAR_1);
  FUNC_6(600);
  VAR_12->card_powered = 1;
 } else if (VAR_11->power_mode == VAR_3) {
  u8 *VAR_13 = FUNC_2(8, VAR_0);
  if (VAR_13) {
   FUNC_0(VAR_12, VAR_13, VAR_11);
   FUNC_1(VAR_13);
  }
 } else {

 }
 FUNC_8(&VAR_12->cmd_mutex);
 FUNC_4(&VAR_12->kref, VAR_9);
}
