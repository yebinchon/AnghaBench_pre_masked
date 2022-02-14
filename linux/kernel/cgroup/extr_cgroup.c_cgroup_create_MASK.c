
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cgroup_root {int cgroup_idr; int nr_cgrps; } ;
struct TYPE_4__ {int refcnt; int children; int sibling; scalar_t__ serial_nr; struct TYPE_4__* parent; } ;
struct TYPE_3__ {int nr_frozen_descendants; scalar_t__ e_freeze; } ;
struct cgroup {int level; scalar_t__ id; scalar_t__* ancestor_ids; TYPE_2__ self; int subtree_control; int flags; TYPE_1__ freezer; int nr_descendants; struct cgroup_root* root; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct cgroup* FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct cgroup*) ;
 int FUNC_3 (struct cgroup*) ;
 int FUNC_4 (struct cgroup*) ;
 scalar_t__ FUNC_5 (int *,int *,int,int ,int ) ;
 int FUNC_6 (int *,scalar_t__) ;
 int FUNC_7 (int *,struct cgroup*,scalar_t__) ;
 scalar_t__ FUNC_8 (struct cgroup*) ;
 struct cgroup* FUNC_9 (struct cgroup*) ;
 int FUNC_10 (struct cgroup*) ;
 int FUNC_11 (struct cgroup*) ;
 int FUNC_12 (struct cgroup*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_13 (struct cgroup*) ;
 int FUNC_14 (struct cgroup*) ;
 struct cgroup* FUNC_15 (int ,int ) ;
 int FUNC_16 (int *,int *) ;
 scalar_t__ FUNC_17 (struct cgroup*) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *,int ,int ,int ) ;
 int FUNC_20 (struct cgroup*) ;
 int FUNC_21 (struct cgroup*) ;
 int FUNC_22 (int ,int *) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (struct cgroup*,int ,int) ;
 scalar_t__ FUNC_26 (int ,int *) ;

__attribute__((used)) static struct cgroup *FUNC_27(struct cgroup *VAR_10)
{
 struct cgroup_root *VAR_11 = VAR_10->root;
 struct cgroup *VAR_12, *VAR_13;
 int VAR_14 = VAR_10->level + 1;
 int VAR_15;


 VAR_12 = FUNC_15(FUNC_25(VAR_12, VAR_6, (VAR_14 + 1)),
         VAR_5);
 if (!VAR_12)
  return FUNC_0(-VAR_4);

 VAR_15 = FUNC_19(&VAR_12->self.refcnt, VAR_7, 0, VAR_5);
 if (VAR_15)
  goto out_free_cgrp;

 if (FUNC_8(VAR_10)) {
  VAR_15 = FUNC_12(VAR_12);
  if (VAR_15)
   goto out_cancel_ref;
 }





 VAR_12->id = FUNC_5(&VAR_11->cgroup_idr, ((void*)0), 2, 0, VAR_5);
 if (VAR_12->id < 0) {
  VAR_15 = -VAR_4;
  goto out_stat_exit;
 }

 FUNC_13(VAR_12);

 VAR_12->self.parent = &VAR_10->self;
 VAR_12->root = VAR_11;
 VAR_12->level = VAR_14;

 VAR_15 = FUNC_20(VAR_12);
 if (VAR_15)
  goto out_idr_free;

 VAR_15 = FUNC_2(VAR_12);
 if (VAR_15)
  goto out_psi_free;





 VAR_12->freezer.e_freeze = VAR_10->freezer.e_freeze;
 if (VAR_12->freezer.e_freeze) {






  FUNC_22(VAR_1, &VAR_12->flags);
  FUNC_22(VAR_2, &VAR_12->flags);
 }

 FUNC_23(&VAR_9);
 for (VAR_13 = VAR_12; VAR_13; VAR_13 = FUNC_9(VAR_13)) {
  VAR_12->ancestor_ids[VAR_13->level] = VAR_13->id;

  if (VAR_13 != VAR_12) {
   VAR_13->nr_descendants++;






   if (VAR_12->freezer.e_freeze)
    VAR_13->freezer.nr_frozen_descendants++;
  }
 }
 FUNC_24(&VAR_9);

 if (FUNC_17(VAR_10))
  FUNC_22(VAR_3, &VAR_12->flags);

 if (FUNC_26(VAR_0, &VAR_10->flags))
  FUNC_22(VAR_0, &VAR_12->flags);

 VAR_12->self.serial_nr = VAR_8++;


 FUNC_16(&VAR_12->self.sibling, &FUNC_9(VAR_12)->self.children);
 FUNC_1(&VAR_11->nr_cgrps);
 FUNC_4(VAR_10);





 FUNC_7(&VAR_11->cgroup_idr, VAR_12, VAR_12->id);





 if (!FUNC_8(VAR_12))
  VAR_12->subtree_control = FUNC_3(VAR_12);

 FUNC_10(VAR_12);

 return VAR_12;

out_psi_free:
 FUNC_21(VAR_12);
out_idr_free:
 FUNC_6(&VAR_11->cgroup_idr, VAR_12->id);
out_stat_exit:
 if (FUNC_8(VAR_10))
  FUNC_11(VAR_12);
out_cancel_ref:
 FUNC_18(&VAR_12->self.refcnt);
out_free_cgrp:
 FUNC_14(VAR_12);
 return FUNC_0(VAR_15);
}
