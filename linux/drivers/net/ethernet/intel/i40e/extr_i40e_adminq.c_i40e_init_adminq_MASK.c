
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_6__ {scalar_t__ num_arq_entries; scalar_t__ num_asq_entries; scalar_t__ arq_buf_size; scalar_t__ asq_buf_size; int api_maj_ver; int api_min_ver; int fw_build; int fw_min_ver; int fw_maj_ver; int asq_cmd_timeout; } ;
struct TYPE_5__ {scalar_t__ type; } ;
struct TYPE_4__ {int version; int eetrack; int oem_ver; } ;
struct i40e_hw {int nvm_release_on_done; int nvmupd_state; TYPE_3__ aq; int flags; TYPE_2__ mac; TYPE_1__ nvm; } ;
typedef scalar_t__ i40e_status ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int FUNC_0 (struct i40e_hw*) ;
 scalar_t__ FUNC_1 (struct i40e_hw*,int *,int *,int *,int*,int*,int *) ;
 int FUNC_2 (struct i40e_hw*,int ,int ,int *) ;
 scalar_t__ FUNC_3 (struct i40e_hw*) ;
 scalar_t__ FUNC_4 (struct i40e_hw*) ;
 int FUNC_5 (struct i40e_hw*,int,int*) ;
 int FUNC_6 (struct i40e_hw*) ;
 int FUNC_7 (struct i40e_hw*) ;
 int FUNC_8 (struct i40e_hw*) ;
 int FUNC_9 (int) ;

i40e_status FUNC_10(struct i40e_hw *VAR_23)
{
 u16 VAR_24, VAR_25, VAR_26;
 u16 VAR_27, VAR_28;
 i40e_status VAR_29;
 int VAR_30 = 0;


 if ((VAR_23->aq.num_arq_entries == 0) ||
     (VAR_23->aq.num_asq_entries == 0) ||
     (VAR_23->aq.arq_buf_size == 0) ||
     (VAR_23->aq.asq_buf_size == 0)) {
  VAR_29 = VAR_2;
  goto init_adminq_exit;
 }


 FUNC_0(VAR_23);


 VAR_23->aq.asq_cmd_timeout = VAR_0;


 VAR_29 = FUNC_4(VAR_23);
 if (VAR_29)
  goto init_adminq_destroy_locks;


 VAR_29 = FUNC_3(VAR_23);
 if (VAR_29)
  goto init_adminq_free_asq;





 do {
  VAR_29 = FUNC_1(VAR_23,
       &VAR_23->aq.fw_maj_ver,
       &VAR_23->aq.fw_min_ver,
       &VAR_23->aq.fw_build,
       &VAR_23->aq.api_maj_ver,
       &VAR_23->aq.api_min_ver,
       ((void*)0));
  if (VAR_29 != VAR_1)
   break;
  VAR_30++;
  FUNC_9(100);
  FUNC_6(VAR_23);
 } while (VAR_30 < 10);
 if (VAR_29 != VAR_22)
  goto init_adminq_free_arq;


 FUNC_5(VAR_23, VAR_19,
      &VAR_23->nvm.version);
 FUNC_5(VAR_23, VAR_21, &VAR_27);
 FUNC_5(VAR_23, VAR_20, &VAR_28);
 VAR_23->nvm.eetrack = (VAR_28 << 16) | VAR_27;
 FUNC_5(VAR_23, VAR_18, &VAR_24);
 FUNC_5(VAR_23, (VAR_24 + VAR_16),
      &VAR_25);
 FUNC_5(VAR_23, (VAR_24 + (VAR_16 + 1)),
      &VAR_26);
 VAR_23->nvm.oem_ver = ((u32)VAR_25 << 16) | VAR_26;

 if (VAR_23->mac.type == VAR_12 &&
     VAR_23->aq.api_maj_ver == VAR_4 &&
     VAR_23->aq.api_min_ver >= VAR_14) {
  VAR_23->flags |= VAR_6;
  VAR_23->flags |= VAR_9;
 }
 if (VAR_23->mac.type == VAR_11 &&
     VAR_23->aq.api_maj_ver == VAR_4 &&
     VAR_23->aq.api_min_ver >= VAR_13) {
  VAR_23->flags |= VAR_9;
 }


 if (VAR_23->aq.api_maj_ver > 1 ||
     (VAR_23->aq.api_maj_ver == 1 &&
      VAR_23->aq.api_min_ver >= 5))
  VAR_23->flags |= VAR_10;


 if (VAR_23->aq.api_maj_ver > 1 ||
     (VAR_23->aq.api_maj_ver == 1 &&
      VAR_23->aq.api_min_ver >= 7))
  VAR_23->flags |= VAR_5;

 if (VAR_23->aq.api_maj_ver > 1 ||
     (VAR_23->aq.api_maj_ver == 1 &&
      VAR_23->aq.api_min_ver >= 8)) {
  VAR_23->flags |= VAR_8;
  VAR_23->flags |= VAR_7;
 }

 if (VAR_23->aq.api_maj_ver > VAR_4) {
  VAR_29 = VAR_3;
  goto init_adminq_free_arq;
 }


 FUNC_2(VAR_23, VAR_17, 0, ((void*)0));
 VAR_23->nvm_release_on_done = 0;
 VAR_23->nvmupd_state = VAR_15;

 VAR_29 = 0;


 goto init_adminq_exit;

init_adminq_free_arq:
 FUNC_7(VAR_23);
init_adminq_free_asq:
 FUNC_8(VAR_23);
init_adminq_destroy_locks:

init_adminq_exit:
 return VAR_29;
}
