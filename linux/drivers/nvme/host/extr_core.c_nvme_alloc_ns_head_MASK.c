
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvme_ns_head {int instance; unsigned int ns_id; int srcu; int entry; int ids; int ref; TYPE_1__* subsys; int list; } ;
struct nvme_ns {int dummy; } ;
struct nvme_id_ns {int dummy; } ;
struct nvme_ctrl {TYPE_1__* subsys; int device; } ;
struct TYPE_2__ {int ns_ida; int ref; int nsheads; } ;


 int VAR_0 ;
 struct nvme_ns_head* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,struct nvme_ns_head*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char*,unsigned int) ;
 int FUNC_6 (int *,int,int ,int ) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct nvme_ns_head*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 struct nvme_ns_head* FUNC_12 (size_t,int ) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 () ;
 int FUNC_15 (int) ;
 int FUNC_16 (struct nvme_ctrl*,struct nvme_ns_head*) ;
 int FUNC_17 (struct nvme_ctrl*,unsigned int,struct nvme_id_ns*,int *) ;

__attribute__((used)) static struct nvme_ns_head *FUNC_18(struct nvme_ctrl *VAR_2,
  unsigned VAR_3, struct nvme_id_ns *VAR_4)
{
 struct nvme_ns_head *VAR_5;
 size_t VAR_6 = sizeof(*VAR_5);
 int VAR_7 = -VAR_0;





 VAR_5 = FUNC_12(VAR_6, VAR_1);
 if (!VAR_5)
  goto out;
 VAR_7 = FUNC_6(&VAR_2->subsys->ns_ida, 1, 0, VAR_1);
 if (VAR_7 < 0)
  goto out_free_head;
 VAR_5->instance = VAR_7;
 FUNC_1(&VAR_5->list);
 VAR_7 = FUNC_8(&VAR_5->srcu);
 if (VAR_7)
  goto out_ida_remove;
 VAR_5->subsys = VAR_2->subsys;
 VAR_5->ns_id = VAR_3;
 FUNC_11(&VAR_5->ref);

 VAR_7 = FUNC_17(VAR_2, VAR_3, VAR_4, &VAR_5->ids);
 if (VAR_7)
  goto out_cleanup_srcu;

 VAR_7 = FUNC_2(VAR_2->subsys, VAR_5);
 if (VAR_7) {
  FUNC_5(VAR_2->device,
   "duplicate IDs for nsid %d\n", VAR_3);
  goto out_cleanup_srcu;
 }

 VAR_7 = FUNC_16(VAR_2, VAR_5);
 if (VAR_7)
  goto out_cleanup_srcu;

 FUNC_13(&VAR_5->entry, &VAR_2->subsys->nsheads);

 FUNC_10(&VAR_2->subsys->ref);

 return VAR_5;
out_cleanup_srcu:
 FUNC_4(&VAR_5->srcu);
out_ida_remove:
 FUNC_7(&VAR_2->subsys->ns_ida, VAR_5->instance);
out_free_head:
 FUNC_9(VAR_5);
out:
 if (VAR_7 > 0)
  VAR_7 = FUNC_3(FUNC_15(VAR_7));
 return FUNC_0(VAR_7);
}
