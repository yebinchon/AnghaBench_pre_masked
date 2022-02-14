
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfs_da_state_blk {scalar_t__ magic; int * bp; int blkno; } ;
struct TYPE_2__ {size_t active; struct xfs_da_state_blk* blk; } ;
struct xfs_da_state {TYPE_1__ path; int args; TYPE_1__ altpath; } ;


 int FUNC_0 (int) ;



 int FUNC_1 (int ) ;
 int FUNC_2 (struct xfs_da_state*,int*) ;
 int FUNC_3 (struct xfs_da_state*,struct xfs_da_state_blk*,struct xfs_da_state_blk*) ;
 int FUNC_4 (struct xfs_da_state*,struct xfs_da_state_blk*,struct xfs_da_state_blk*) ;
 int FUNC_5 (struct xfs_da_state*,TYPE_1__*) ;
 int FUNC_6 (struct xfs_da_state*,struct xfs_da_state_blk*) ;
 int FUNC_7 (struct xfs_da_state*,int*) ;
 int FUNC_8 (struct xfs_da_state*,struct xfs_da_state_blk*,struct xfs_da_state_blk*) ;
 int FUNC_9 (struct xfs_da_state*,struct xfs_da_state_blk*) ;
 int FUNC_10 (int ,int ,int *) ;
 int FUNC_11 (struct xfs_da_state*) ;
 int FUNC_12 (struct xfs_da_state*,int*) ;
 int FUNC_13 (struct xfs_da_state*,struct xfs_da_state_blk*,struct xfs_da_state_blk*) ;

int
FUNC_14(
 struct xfs_da_state *VAR_0)
{
 struct xfs_da_state_blk *VAR_1;
 struct xfs_da_state_blk *VAR_2;
 int VAR_3 = 0;
 int VAR_4;

 FUNC_1(VAR_0->args);

 VAR_1 = &VAR_0->path.blk[ VAR_0->path.active-1 ];
 VAR_2 = &VAR_0->altpath.blk[ VAR_0->path.active-1 ];
 FUNC_0(VAR_0->path.blk[0].magic == 129);
 FUNC_0(VAR_1->magic == 130 ||
        VAR_1->magic == 128);





 for ( ; VAR_0->path.active >= 2; VAR_1--, VAR_2--,
   VAR_0->path.active--) {






  switch (VAR_1->magic) {
  case 130:
   VAR_4 = FUNC_2(VAR_0, &VAR_3);
   if (VAR_4)
    return VAR_4;
   if (VAR_3 == 0)
    return 0;
   FUNC_3(VAR_0, VAR_1, VAR_2);
   break;
  case 128:
   VAR_4 = FUNC_12(VAR_0, &VAR_3);
   if (VAR_4)
    return VAR_4;
   if (VAR_3 == 0)
    return 0;
   FUNC_13(VAR_0, VAR_1, VAR_2);
   break;
  case 129:




   FUNC_6(VAR_0, VAR_1);
   FUNC_5(VAR_0, &VAR_0->path);
   VAR_4 = FUNC_7(VAR_0, &VAR_3);
   if (VAR_4)
    return VAR_4;
   if (VAR_3 == 0)
    return 0;
   FUNC_8(VAR_0, VAR_1, VAR_2);
   break;
  }
  FUNC_5(VAR_0, &VAR_0->altpath);
  VAR_4 = FUNC_4(VAR_0, VAR_1, VAR_2);
  FUNC_11(VAR_0);
  if (VAR_4)
   return VAR_4;
  VAR_4 = FUNC_10(VAR_0->args, VAR_1->blkno,
        VAR_1->bp);
  VAR_1->bp = ((void*)0);
  if (VAR_4)
   return VAR_4;
 }





 FUNC_6(VAR_0, VAR_1);
 FUNC_5(VAR_0, &VAR_0->path);
 VAR_4 = FUNC_9(VAR_0, &VAR_0->path.blk[0]);
 return VAR_4;
}
