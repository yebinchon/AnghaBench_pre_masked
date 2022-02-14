
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void* bpr_ptr; } ;
struct TYPE_3__ {void* bpr_ptr; } ;
struct nilfs_btree_path {int * bp_op; TYPE_2__ bp_newreq; TYPE_1__ bp_oldreq; scalar_t__ bp_index; int * bp_sib_bh; int * bp_bh; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct nilfs_btree_path* FUNC_0 (int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static struct nilfs_btree_path *FUNC_1(void)
{
 struct nilfs_btree_path *VAR_5;
 int VAR_6 = VAR_2;

 VAR_5 = FUNC_0(VAR_4, VAR_0);
 if (VAR_5 == ((void*)0))
  goto out;

 for (; VAR_6 < VAR_3; VAR_6++) {
  VAR_5[VAR_6].bp_bh = ((void*)0);
  VAR_5[VAR_6].bp_sib_bh = ((void*)0);
  VAR_5[VAR_6].bp_index = 0;
  VAR_5[VAR_6].bp_oldreq.bpr_ptr = VAR_1;
  VAR_5[VAR_6].bp_newreq.bpr_ptr = VAR_1;
  VAR_5[VAR_6].bp_op = ((void*)0);
 }

out:
 return VAR_5;
}
