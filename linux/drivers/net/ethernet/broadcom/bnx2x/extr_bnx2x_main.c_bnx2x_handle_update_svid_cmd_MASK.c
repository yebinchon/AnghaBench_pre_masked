
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct bnx2x_func_switch_update_params {int vlan; int changes; } ;
struct TYPE_3__ {struct bnx2x_func_switch_update_params switch_update; } ;
struct bnx2x_func_state_params {int ramrod_flags; int cmd; int * f_obj; TYPE_1__ params; } ;
struct bnx2x {int mf_ov; int func_obj; } ;
struct TYPE_4__ {int e1hov_tag; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (struct bnx2x*) ;
 int FUNC_3 (int ,char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (struct bnx2x*) ;
 scalar_t__ FUNC_5 (struct bnx2x*) ;
 int FUNC_6 (struct bnx2x*,int ) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (struct bnx2x*,scalar_t__,int) ;
 int FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (struct bnx2x*,struct bnx2x_func_state_params*) ;
 int FUNC_10 (struct bnx2x*,int ,int ) ;
 TYPE_2__* VAR_10 ;
 int FUNC_11 (struct bnx2x_func_state_params*,int ,int) ;

__attribute__((used)) static void FUNC_12(struct bnx2x *VAR_11)
{
 struct bnx2x_func_switch_update_params *VAR_12;
 struct bnx2x_func_state_params VAR_13;

 FUNC_11(&VAR_13, 0, sizeof(struct bnx2x_func_state_params));
 VAR_12 = &VAR_13.params.switch_update;
 VAR_13.f_obj = &VAR_11->func_obj;
 VAR_13.cmd = VAR_0;


 FUNC_8(VAR_8, &VAR_13.ramrod_flags);
 FUNC_8(VAR_9, &VAR_13.ramrod_flags);

 if (FUNC_5(VAR_11) || FUNC_4(VAR_11)) {
  int VAR_14 = FUNC_1(VAR_11);
  u32 VAR_15;


  VAR_15 = FUNC_6(VAR_11, VAR_10[VAR_14].e1hov_tag) &
    VAR_6;
  if (VAR_15 != VAR_5) {
   VAR_11->mf_ov = VAR_15;
  } else {
   FUNC_0("Got an SVID event, but no tag is configured in shmem\n");
   goto fail;
  }


  FUNC_7(VAR_11, VAR_7 + FUNC_2(VAR_11) * 8,
         VAR_11->mf_ov);


  FUNC_8(VAR_1,
     &VAR_12->changes);
  VAR_12->vlan = VAR_11->mf_ov;

  if (FUNC_9(VAR_11, &VAR_13) < 0) {
   FUNC_0("Failed to configure FW of S-tag Change to %02x\n",
      VAR_11->mf_ov);
   goto fail;
  } else {
   FUNC_3(VAR_2, "Configured S-tag %02x\n",
      VAR_11->mf_ov);
  }
 } else {
  goto fail;
 }

 FUNC_10(VAR_11, VAR_4, 0);
 return;
fail:
 FUNC_10(VAR_11, VAR_3, 0);
}
