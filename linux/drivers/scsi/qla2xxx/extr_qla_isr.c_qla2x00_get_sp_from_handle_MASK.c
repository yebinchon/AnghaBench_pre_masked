
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint16_t ;
struct TYPE_7__ {int handle; } ;
typedef TYPE_1__ sts_entry_t ;
struct req_que {size_t num_outstanding_cmds; TYPE_2__** outstanding_cmds; } ;
struct qla_hw_data {int dummy; } ;
struct TYPE_8__ {size_t handle; } ;
typedef TYPE_2__ srb_t ;
struct TYPE_9__ {int dpc_flags; struct qla_hw_data* hw; } ;
typedef TYPE_3__ scsi_qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_3__*,int,char*,size_t,...) ;
 int VAR_2 ;
 int FUNC_3 (int ,int *) ;

srb_t *
FUNC_4(scsi_qla_host_t *VAR_3, const char *VAR_4,
    struct req_que *VAR_5, void *VAR_6)
{
 struct qla_hw_data *VAR_7 = VAR_3->hw;
 sts_entry_t *VAR_8 = VAR_6;
 srb_t *VAR_9 = ((void*)0);
 uint16_t VAR_10;

 VAR_10 = FUNC_1(VAR_8->handle);
 if (VAR_10 >= VAR_5->num_outstanding_cmds) {
  FUNC_2(VAR_2, VAR_3, 0x5031,
      "Invalid command index (%x) type %8ph.\n",
      VAR_10, VAR_6);
  if (FUNC_0(VAR_7))
   FUNC_3(VAR_0, &VAR_3->dpc_flags);
  else
   FUNC_3(VAR_1, &VAR_3->dpc_flags);
  goto done;
 }
 VAR_9 = VAR_5->outstanding_cmds[VAR_10];
 if (!VAR_9) {
  FUNC_2(VAR_2, VAR_3, 0x5032,
      "Invalid completion handle (%x) -- timed-out.\n", VAR_10);
  return VAR_9;
 }
 if (VAR_9->handle != VAR_10) {
  FUNC_2(VAR_2, VAR_3, 0x5033,
      "SRB handle (%x) mismatch %x.\n", VAR_9->handle, VAR_10);
  return ((void*)0);
 }

 VAR_5->outstanding_cmds[VAR_10] = ((void*)0);

done:
 return VAR_9;
}
