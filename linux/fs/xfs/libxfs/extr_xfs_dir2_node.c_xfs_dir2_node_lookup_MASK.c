
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_19__ {int namelen; int name; } ;
typedef TYPE_5__ xfs_dir2_data_entry_t ;
struct TYPE_18__ {int index; TYPE_8__* bp; } ;
struct TYPE_17__ {int active; TYPE_2__* blk; } ;
struct TYPE_20__ {TYPE_4__ extrablk; scalar_t__ extravalid; TYPE_3__ path; int mp; TYPE_7__* args; } ;
typedef TYPE_6__ xfs_da_state_t ;
struct TYPE_21__ {scalar_t__ cmpresult; int trans; TYPE_1__* dp; } ;
typedef TYPE_7__ xfs_da_args_t ;
struct TYPE_22__ {scalar_t__ b_addr; } ;
struct TYPE_16__ {TYPE_8__* bp; } ;
struct TYPE_15__ {int i_mount; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_7__*) ;
 int FUNC_1 (TYPE_6__*,int*) ;
 TYPE_6__* FUNC_2 () ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (TYPE_7__*,int ,int ) ;
 int FUNC_5 (int ,TYPE_8__*) ;

int
FUNC_6(
 xfs_da_args_t *VAR_2)
{
 int VAR_3;
 int VAR_4;
 int VAR_5;
 xfs_da_state_t *VAR_6;

 FUNC_0(VAR_2);




 VAR_6 = FUNC_2();
 VAR_6->args = VAR_2;
 VAR_6->mp = VAR_2->dp->i_mount;



 VAR_3 = FUNC_1(VAR_6, &VAR_5);
 if (VAR_3)
  VAR_5 = VAR_3;
 else if (VAR_5 == -VAR_0 && VAR_2->cmpresult == VAR_1) {

  xfs_dir2_data_entry_t *VAR_7;

  VAR_7 = (xfs_dir2_data_entry_t *)
   ((char *)VAR_6->extrablk.bp->b_addr +
       VAR_6->extrablk.index);
  VAR_5 = FUNC_4(VAR_2, VAR_7->name, VAR_7->namelen);
 }



 for (VAR_4 = 0; VAR_4 < VAR_6->path.active; VAR_4++) {
  FUNC_5(VAR_2->trans, VAR_6->path.blk[VAR_4].bp);
  VAR_6->path.blk[VAR_4].bp = ((void*)0);
 }



 if (VAR_6->extravalid && VAR_6->extrablk.bp) {
  FUNC_5(VAR_2->trans, VAR_6->extrablk.bp);
  VAR_6->extrablk.bp = ((void*)0);
 }
 FUNC_3(VAR_6);
 return VAR_5;
}
