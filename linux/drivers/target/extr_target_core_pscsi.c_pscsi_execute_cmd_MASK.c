
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct se_cmd {scalar_t__ data_direction; scalar_t__ sam_task_attr; int * t_task_cdb; struct pscsi_plugin_task* priv; int se_dev; int t_data_nents; struct scatterlist* t_data_sg; } ;
struct scatterlist {int dummy; } ;
struct request {int timeout; struct se_cmd* end_io_data; int end_io; } ;
struct pscsi_plugin_task {int * pscsi_cdb; } ;
struct pscsi_dev_virt {TYPE_1__* pdv_sd; } ;
typedef scalar_t__ sense_reason_t ;
struct TYPE_4__ {int retries; int * cmd; int cmd_len; } ;
struct TYPE_3__ {scalar_t__ type; int request_queue; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct request*) ;
 struct pscsi_dev_virt* FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_2 (int ,int *,struct request*,int,int ) ;
 struct request* FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct request*) ;
 int FUNC_5 (struct pscsi_plugin_task*) ;
 struct pscsi_plugin_task* FUNC_6 (int ,int ) ;
 int FUNC_7 (int *,int *,int ) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (struct se_cmd*,struct scatterlist*,int ,struct request*) ;
 int VAR_11 ;
 int FUNC_10 (int *) ;
 TYPE_2__* FUNC_11 (struct request*) ;

__attribute__((used)) static sense_reason_t
FUNC_12(struct se_cmd *VAR_12)
{
 struct scatterlist *VAR_13 = VAR_12->t_data_sg;
 u32 VAR_14 = VAR_12->t_data_nents;
 struct pscsi_dev_virt *VAR_15 = FUNC_1(VAR_12->se_dev);
 struct pscsi_plugin_task *VAR_16;
 struct request *VAR_17;
 sense_reason_t VAR_18;





 VAR_16 = FUNC_6(sizeof(*VAR_16) + FUNC_10(VAR_12->t_task_cdb), VAR_1);
 if (!VAR_16) {
  return VAR_8;
 }
 VAR_12->priv = VAR_16;

 FUNC_7(VAR_16->pscsi_cdb, VAR_12->t_task_cdb,
  FUNC_10(VAR_12->t_task_cdb));

 VAR_17 = FUNC_3(VAR_15->pdv_sd->request_queue,
   VAR_12->data_direction == VAR_0 ?
   VAR_6 : VAR_5, 0);
 if (FUNC_0(VAR_17)) {
  FUNC_8("PSCSI: blk_get_request() failed\n");
  VAR_18 = VAR_8;
  goto fail;
 }

 if (VAR_13) {
  VAR_18 = FUNC_9(VAR_12, VAR_13, VAR_14, VAR_17);
  if (VAR_18)
   goto fail_put_request;
 }

 VAR_17->end_io = VAR_11;
 VAR_17->end_io_data = VAR_12;
 FUNC_11(VAR_17)->cmd_len = FUNC_10(VAR_16->pscsi_cdb);
 FUNC_11(VAR_17)->cmd = &VAR_16->pscsi_cdb[0];
 if (VAR_15->pdv_sd->type == VAR_9 ||
     VAR_15->pdv_sd->type == VAR_10)
  VAR_17->timeout = VAR_3;
 else
  VAR_17->timeout = VAR_4;
 FUNC_11(VAR_17)->retries = VAR_2;

 FUNC_2(VAR_15->pdv_sd->request_queue, ((void*)0), VAR_17,
   (VAR_12->sam_task_attr == VAR_7),
   VAR_11);

 return 0;

fail_put_request:
 FUNC_4(VAR_17);
fail:
 FUNC_5(VAR_16);
 return VAR_18;
}
