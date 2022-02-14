
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct nvmet_req {int data_len; TYPE_4__* sq; TYPE_2__* cmd; } ;
struct nvme_smart_log {int num_err_log_entries; } ;
struct TYPE_8__ {TYPE_3__* ctrl; } ;
struct TYPE_7__ {int error_lock; int err_counter; } ;
struct TYPE_5__ {scalar_t__ nsid; } ;
struct TYPE_6__ {TYPE_1__ get_log_page; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct nvme_smart_log*) ;
 struct nvme_smart_log* FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (struct nvmet_req*,int ,struct nvme_smart_log*,int) ;
 scalar_t__ FUNC_4 (struct nvmet_req*,struct nvme_smart_log*) ;
 scalar_t__ FUNC_5 (struct nvmet_req*,struct nvme_smart_log*) ;
 int FUNC_6 (struct nvmet_req*,scalar_t__) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_10(struct nvmet_req *VAR_3)
{
 struct nvme_smart_log *VAR_4;
 u16 VAR_5 = VAR_2;
 unsigned long VAR_6;

 if (VAR_3->data_len != sizeof(*VAR_4))
  goto out;

 VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  goto out;

 if (VAR_3->cmd->get_log_page.nsid == FUNC_0(VAR_1))
  VAR_5 = FUNC_4(VAR_3, VAR_4);
 else
  VAR_5 = FUNC_5(VAR_3, VAR_4);
 if (VAR_5)
  goto out_free_log;

 FUNC_8(&VAR_3->sq->ctrl->error_lock, VAR_6);
 FUNC_7(VAR_3->sq->ctrl->err_counter,
   &VAR_4->num_err_log_entries);
 FUNC_9(&VAR_3->sq->ctrl->error_lock, VAR_6);

 VAR_5 = FUNC_3(VAR_3, 0, VAR_4, sizeof(*VAR_4));
out_free_log:
 FUNC_1(VAR_4);
out:
 FUNC_6(VAR_3, VAR_5);
}
