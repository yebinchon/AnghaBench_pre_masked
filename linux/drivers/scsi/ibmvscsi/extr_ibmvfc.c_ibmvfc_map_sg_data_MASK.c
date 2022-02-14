
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct srp_direct_buf {scalar_t__ key; int len; int va; } ;
struct scsi_cmnd {scalar_t__ sc_data_direction; } ;
struct ibmvfc_host {scalar_t__ log_level; int sg_pool; } ;
struct ibmvfc_event {int ext_list_token; struct srp_direct_buf* ext_list; } ;
struct TYPE_2__ {int add_cdb_len; } ;
struct ibmvfc_cmd {int flags; TYPE_1__ iu; struct srp_direct_buf ioba; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 struct ibmvfc_host* FUNC_3 (struct device*) ;
 struct srp_direct_buf* FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (struct scsi_cmnd*,int,struct srp_direct_buf*) ;
 int FUNC_6 (int ,struct scsi_cmnd*,char*) ;
 int FUNC_7 (struct scsi_cmnd*) ;
 int FUNC_8 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct scsi_cmnd *VAR_13,
         struct ibmvfc_event *VAR_14,
         struct ibmvfc_cmd *VAR_15, struct device *VAR_16)
{

 int VAR_17;
 struct srp_direct_buf *VAR_18 = &VAR_15->ioba;
 struct ibmvfc_host *VAR_19 = FUNC_3(VAR_16);

 if (VAR_12)
  VAR_15->flags |= FUNC_0(VAR_3);

 VAR_17 = FUNC_7(VAR_13);
 if (!VAR_17) {
  VAR_15->flags |= FUNC_0(VAR_5);
  return 0;
 } else if (FUNC_9(VAR_17 < 0)) {
  if (VAR_19->log_level > VAR_4)
   FUNC_6(VAR_11, VAR_13, "Failed to map DMA buffer for command\n");
  return VAR_17;
 }

 if (VAR_13->sc_data_direction == VAR_0) {
  VAR_15->flags |= FUNC_0(VAR_10);
  VAR_15->iu.add_cdb_len |= VAR_9;
 } else {
  VAR_15->flags |= FUNC_0(VAR_7);
  VAR_15->iu.add_cdb_len |= VAR_6;
 }

 if (VAR_17 == 1) {
  FUNC_5(VAR_13, VAR_17, VAR_18);
  return 0;
 }

 VAR_15->flags |= FUNC_0(VAR_8);

 if (!VAR_14->ext_list) {
  VAR_14->ext_list = FUNC_4(VAR_19->sg_pool, VAR_2,
            &VAR_14->ext_list_token);

  if (!VAR_14->ext_list) {
   FUNC_8(VAR_13);
   if (VAR_19->log_level > VAR_4)
    FUNC_6(VAR_11, VAR_13, "Can't allocate memory for scatterlist\n");
   return -VAR_1;
  }
 }

 FUNC_5(VAR_13, VAR_17, VAR_14->ext_list);

 VAR_18->va = FUNC_2(VAR_14->ext_list_token);
 VAR_18->len = FUNC_1(VAR_17 * sizeof(struct srp_direct_buf));
 VAR_18->key = 0;
 return 0;
}
