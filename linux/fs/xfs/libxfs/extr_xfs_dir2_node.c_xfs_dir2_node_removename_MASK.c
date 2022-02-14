
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xfs_da_state_blk {scalar_t__ magic; int index; int bp; } ;
struct TYPE_4__ {int active; struct xfs_da_state_blk* blk; } ;
struct xfs_da_state {int extravalid; TYPE_2__ path; int extrablk; int mp; struct xfs_da_args* args; } ;
struct xfs_da_args {TYPE_1__* dp; } ;
struct TYPE_3__ {int i_mount; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct xfs_da_args*) ;
 int FUNC_2 (struct xfs_da_state*,TYPE_2__*) ;
 int FUNC_3 (struct xfs_da_state*) ;
 int FUNC_4 (struct xfs_da_state*,int*) ;
 struct xfs_da_state* FUNC_5 () ;
 int FUNC_6 (struct xfs_da_state*) ;
 int FUNC_7 (struct xfs_da_args*,int ,int ,int *,int*) ;
 int FUNC_8 (struct xfs_da_state*) ;

int
FUNC_9(
 struct xfs_da_args *VAR_2)
{
 struct xfs_da_state_blk *VAR_3;
 int VAR_4;
 int VAR_5;
 struct xfs_da_state *VAR_6;

 FUNC_1(VAR_2);




 VAR_6 = FUNC_5();
 VAR_6->args = VAR_2;
 VAR_6->mp = VAR_2->dp->i_mount;


 VAR_4 = FUNC_4(VAR_6, &VAR_5);
 if (VAR_4)
  goto out_free;


 if (VAR_5 != -VAR_0) {
  VAR_4 = VAR_5;
  goto out_free;
 }

 VAR_3 = &VAR_6->path.blk[VAR_6->path.active - 1];
 FUNC_0(VAR_3->magic == VAR_1);
 FUNC_0(VAR_6->extravalid);




 VAR_4 = FUNC_7(VAR_2, VAR_3->bp, VAR_3->index,
  &VAR_6->extrablk, &VAR_5);
 if (VAR_4)
  goto out_free;



 FUNC_2(VAR_6, &VAR_6->path);



 if (VAR_5 && VAR_6->path.active > 1)
  VAR_4 = FUNC_3(VAR_6);



 if (!VAR_4)
  VAR_4 = FUNC_8(VAR_6);
out_free:
 FUNC_6(VAR_6);
 return VAR_4;
}
