
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct scatterlist {int dummy; } ;
struct TYPE_10__ {scalar_t__ monitor_only; } ;
struct iwl_fw_runtime {TYPE_7__* trans; TYPE_3__ dump; TYPE_2__* fw; } ;
struct iwl_fw_error_dump_file {int file_len; } ;
struct iwl_fw_dump_ptrs {TYPE_4__* trans_ptr; TYPE_4__* fwrt_ptr; scalar_t__ fwrt_len; } ;
struct TYPE_12__ {int dev; } ;
struct TYPE_11__ {scalar_t__ len; struct TYPE_11__* data; } ;
struct TYPE_8__ {scalar_t__ dump_mask; } ;
struct TYPE_9__ {TYPE_1__ dbg; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct scatterlist* FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,struct scatterlist*,scalar_t__,int ) ;
 struct iwl_fw_error_dump_file* FUNC_3 (struct iwl_fw_runtime*,struct iwl_fw_dump_ptrs*) ;
 int FUNC_4 (struct iwl_fw_runtime*) ;
 TYPE_4__* FUNC_5 (TYPE_7__*,scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct scatterlist*) ;
 int FUNC_8 (struct scatterlist*,int ,TYPE_4__*,scalar_t__,scalar_t__) ;
 int FUNC_9 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_10(struct iwl_fw_runtime *VAR_2)
{
 struct iwl_fw_dump_ptrs VAR_3 = {};
 struct iwl_fw_error_dump_file *VAR_4;
 struct scatterlist *VAR_5;
 u32 VAR_6;
 u32 VAR_7 = VAR_2->fw->dbg.dump_mask;

 VAR_4 = FUNC_3(VAR_2, &VAR_3);
 if (!VAR_4)
  goto out;

 if (VAR_2->dump.monitor_only)
  VAR_7 &= VAR_1;

 VAR_3.trans_ptr = FUNC_5(VAR_2->trans, VAR_7);
 VAR_6 = FUNC_6(VAR_4->file_len);
 VAR_3.fwrt_len = VAR_6;

 if (VAR_3.trans_ptr) {
  VAR_6 += VAR_3.trans_ptr->len;
  VAR_4->file_len = FUNC_1(VAR_6);
 }

 VAR_5 = FUNC_0(VAR_6);
 if (VAR_5) {
  FUNC_8(VAR_5,
         FUNC_7(VAR_5),
         VAR_3.fwrt_ptr,
         VAR_3.fwrt_len, 0);
  if (VAR_3.trans_ptr)
   FUNC_8(VAR_5,
          FUNC_7(VAR_5),
          VAR_3.trans_ptr->data,
          VAR_3.trans_ptr->len,
          VAR_3.fwrt_len);
  FUNC_2(VAR_2->trans->dev, VAR_5, VAR_6,
          VAR_0);
 }
 FUNC_9(VAR_3.fwrt_ptr);
 FUNC_9(VAR_3.trans_ptr);

out:
 FUNC_4(VAR_2);
}
