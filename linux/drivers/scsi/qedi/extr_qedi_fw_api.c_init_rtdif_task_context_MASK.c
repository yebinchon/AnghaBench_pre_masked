
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct tdif_task_context {int flags0; int flags1; void* app_tag_mask; void* initial_ref_tag; void* partial_crc_value_a; void* partial_crc_value_b; void* app_tag_value; } ;
struct scsi_dif_task_params {int application_tag; int application_tag_mask; int host_guard_type; int protection_type; int dif_block_size_log; int ref_tag_mask; int ignore_app_tag; scalar_t__ forward_ref_tag_with_mask; scalar_t__ forward_app_tag_with_mask; scalar_t__ dif_on_host; scalar_t__ validate_ref_tag; scalar_t__ validate_app_tag; scalar_t__ validate_guard; scalar_t__ keep_ref_tag_const; scalar_t__ initial_ref_tag_is_valid; int initial_ref_tag; scalar_t__ dif_on_network; scalar_t__ forward_ref_tag; scalar_t__ forward_app_tag; scalar_t__ forward_guard; scalar_t__ tx_dif_conn_err_en; scalar_t__ crc_seed; } ;
struct rdif_task_context {int state; int flags1; int flags0; void* app_tag_mask; void* initial_ref_tag; void* partial_crc_value; void* app_tag_value; } ;
typedef enum iscsi_task_type { ____Placeholder_iscsi_task_type } iscsi_task_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (int ,int ,int) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (int ) ;

__attribute__((used)) static
void FUNC_3(struct rdif_task_context *VAR_41,
        struct tdif_task_context *VAR_42,
        struct scsi_dif_task_params *VAR_43,
        enum iscsi_task_type VAR_44)
{
 u32 VAR_45;

 if (!VAR_43->dif_on_network || !VAR_43->dif_on_host)
  return;

 if (VAR_44 == VAR_3 ||
     VAR_44 == VAR_0) {
  VAR_41->app_tag_value =
      FUNC_1(VAR_43->application_tag);
  VAR_41->partial_crc_value = FUNC_1(0xffff);
  VAR_45 = FUNC_2(VAR_43->initial_ref_tag);
  VAR_41->initial_ref_tag = VAR_45;
  VAR_41->app_tag_mask =
        FUNC_1(VAR_43->application_tag_mask);
  FUNC_0(VAR_41->flags0, VAR_4,
     VAR_43->crc_seed ? 1 : 0);
  FUNC_0(VAR_41->flags0,
     VAR_10,
     VAR_43->host_guard_type);
  FUNC_0(VAR_41->flags0,
     VAR_17,
     VAR_43->protection_type);
  FUNC_0(VAR_41->flags0,
     VAR_13, 1);
  FUNC_0(VAR_41->flags0,
     VAR_15,
     VAR_43->keep_ref_tag_const ? 1 : 0);
  FUNC_0(VAR_41->flags1,
     VAR_19,
     (VAR_43->validate_app_tag &&
     VAR_43->dif_on_network) ? 1 : 0);
  FUNC_0(VAR_41->flags1,
     VAR_20,
     (VAR_43->validate_guard &&
     VAR_43->dif_on_network) ? 1 : 0);
  FUNC_0(VAR_41->flags1,
     VAR_21,
     (VAR_43->validate_ref_tag &&
     VAR_43->dif_on_network) ? 1 : 0);
  FUNC_0(VAR_41->flags1,
     VAR_11,
     VAR_43->dif_on_host ? 1 : 0);
  FUNC_0(VAR_41->flags1,
     VAR_16,
     VAR_43->dif_on_network ? 1 : 0);
  FUNC_0(VAR_41->flags1,
     VAR_7,
     VAR_43->forward_guard ? 1 : 0);
  FUNC_0(VAR_41->flags1,
     VAR_5,
     VAR_43->forward_app_tag ? 1 : 0);
  FUNC_0(VAR_41->flags1,
     VAR_8,
     VAR_43->forward_ref_tag ? 1 : 0);
  FUNC_0(VAR_41->flags1,
     VAR_6,
     VAR_43->forward_app_tag_with_mask ? 1 : 0);
  FUNC_0(VAR_41->flags1,
     VAR_9,
     VAR_43->forward_ref_tag_with_mask ? 1 : 0);
  FUNC_0(VAR_41->flags1,
     VAR_14,
     VAR_43->dif_block_size_log - 9);
  FUNC_0(VAR_41->state,
     VAR_18,
     VAR_43->ref_tag_mask);
  FUNC_0(VAR_41->state, VAR_12,
     VAR_43->ignore_app_tag);
 }

 if (VAR_44 == VAR_2 ||
     VAR_44 == VAR_1) {
  VAR_42->app_tag_value =
      FUNC_1(VAR_43->application_tag);
  VAR_42->partial_crc_value_b =
         FUNC_1(VAR_43->crc_seed ? 0xffff : 0x0000);
  VAR_42->partial_crc_value_a =
         FUNC_1(VAR_43->crc_seed ? 0xffff : 0x0000);
  FUNC_0(VAR_42->flags0, VAR_22,
     VAR_43->crc_seed ? 1 : 0);

  FUNC_0(VAR_42->flags0,
     VAR_37,
     VAR_43->tx_dif_conn_err_en ? 1 : 0);
  FUNC_0(VAR_42->flags1, VAR_25,
     VAR_43->forward_guard ? 1 : 0);
  FUNC_0(VAR_42->flags1,
     VAR_23,
     VAR_43->forward_app_tag ? 1 : 0);
  FUNC_0(VAR_42->flags1,
     VAR_26,
     VAR_43->forward_ref_tag ? 1 : 0);
  FUNC_0(VAR_42->flags1, VAR_32,
     VAR_43->dif_block_size_log - 9);
  FUNC_0(VAR_42->flags1,
     VAR_29,
     VAR_43->dif_on_host ? 1 : 0);
  FUNC_0(VAR_42->flags1,
     VAR_34,
     VAR_43->dif_on_network ? 1 : 0);
  VAR_45 = FUNC_2(VAR_43->initial_ref_tag);
  VAR_42->initial_ref_tag = VAR_45;
  VAR_42->app_tag_mask =
        FUNC_1(VAR_43->application_tag_mask);
  FUNC_0(VAR_42->flags0,
     VAR_28,
     VAR_43->host_guard_type);
  FUNC_0(VAR_42->flags0,
     VAR_35,
     VAR_43->protection_type);
  FUNC_0(VAR_42->flags0,
     VAR_31,
     VAR_43->initial_ref_tag_is_valid ? 1 : 0);
  FUNC_0(VAR_42->flags0,
     VAR_33,
     VAR_43->keep_ref_tag_const ? 1 : 0);
  FUNC_0(VAR_42->flags1,
     VAR_39,
     (VAR_43->validate_guard &&
      VAR_43->dif_on_host) ? 1 : 0);
  FUNC_0(VAR_42->flags1,
     VAR_38,
     (VAR_43->validate_app_tag &&
     VAR_43->dif_on_host) ? 1 : 0);
  FUNC_0(VAR_42->flags1,
     VAR_40,
     (VAR_43->validate_ref_tag &&
      VAR_43->dif_on_host) ? 1 : 0);
  FUNC_0(VAR_42->flags1,
     VAR_24,
     VAR_43->forward_app_tag_with_mask ? 1 : 0);
  FUNC_0(VAR_42->flags1,
     VAR_27,
     VAR_43->forward_ref_tag_with_mask ? 1 : 0);
  FUNC_0(VAR_42->flags1,
     VAR_36,
     VAR_43->ref_tag_mask);
  FUNC_0(VAR_42->flags0,
     VAR_30,
     VAR_43->ignore_app_tag ? 1 : 0);
 }
}
