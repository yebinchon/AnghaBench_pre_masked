
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_2__ {scalar_t__ active_vfs; } ;
struct bnxt {scalar_t__ fw_reset_max_dsecs; int fw_cap; int fw_reset_min_dsecs; int fw_reset_state; int dev; int state; TYPE_1__ pf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct bnxt*) ;
 int FUNC_1 (struct bnxt*) ;
 int FUNC_2 (struct bnxt*,int) ;
 int FUNC_3 (struct bnxt*) ;
 int FUNC_4 (struct bnxt*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,int) ;
 int FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (int ,int *) ;

void FUNC_10(struct bnxt *VAR_8)
{
 FUNC_3(VAR_8);
 if (FUNC_9(VAR_6, &VAR_8->state) &&
     !FUNC_9(VAR_5, &VAR_8->state)) {
  int VAR_9 = 0, VAR_10;

  FUNC_8(VAR_5, &VAR_8->state);
  if (VAR_8->pf.active_vfs &&
      !FUNC_9(VAR_4, &VAR_8->state))
   VAR_9 = FUNC_1(VAR_8);
  if (VAR_9 < 0) {
   FUNC_7(VAR_8->dev, "Firmware reset aborted, rc = %d\n",
       VAR_9);
   FUNC_5(VAR_5, &VAR_8->state);
   FUNC_6(VAR_8->dev);
   goto fw_reset_exit;
  } else if (VAR_9 > 0) {
   u16 VAR_11 = VAR_9 * 10;

   if (VAR_8->fw_reset_max_dsecs < VAR_11)
    VAR_8->fw_reset_max_dsecs = VAR_11;
   VAR_8->fw_reset_state =
    VAR_3;
   FUNC_2(VAR_8, VAR_7 / 10);
   goto fw_reset_exit;
  }
  FUNC_0(VAR_8);
  if (VAR_8->fw_cap & VAR_0) {
   VAR_8->fw_reset_state = VAR_2;
   VAR_10 = VAR_7 / 10;
  } else {
   VAR_8->fw_reset_state = VAR_1;
   VAR_10 = VAR_8->fw_reset_min_dsecs * VAR_7 / 10;
  }
  FUNC_2(VAR_8, VAR_10);
 }
fw_reset_exit:
 FUNC_4(VAR_8);
}
