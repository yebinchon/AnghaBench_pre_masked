
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct xfs_da_state_blk {scalar_t__ magic; scalar_t__ blkno; TYPE_3__* bp; } ;
struct TYPE_12__ {int active; struct xfs_da_state_blk* blk; } ;
struct TYPE_9__ {struct xfs_da_state_blk* blk; } ;
struct xfs_da_state {int extravalid; int extraafter; TYPE_5__* args; TYPE_4__ path; struct xfs_da_state_blk extrablk; int inleaf; TYPE_1__ altpath; } ;
struct TYPE_14__ {void* forw; void* back; } ;
struct TYPE_10__ {TYPE_8__ info; } ;
struct xfs_da_intnode {TYPE_2__ hdr; } ;
struct TYPE_13__ {int trans; } ;
struct TYPE_11__ {struct xfs_da_intnode* b_addr; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;

 int FUNC_1 (struct xfs_da_intnode*,TYPE_8__*,int) ;

 int VAR_2 ;

 scalar_t__ FUNC_2 (void*) ;
 void* FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (struct xfs_da_state*,struct xfs_da_state_blk*,struct xfs_da_state_blk*) ;
 int FUNC_8 (struct xfs_da_state*,TYPE_4__*) ;
 int FUNC_9 (struct xfs_da_state*,struct xfs_da_state_blk*,struct xfs_da_state_blk*,struct xfs_da_state_blk*,int,int*) ;
 int FUNC_10 (struct xfs_da_state*,struct xfs_da_state_blk*,struct xfs_da_state_blk*) ;
 int FUNC_11 (struct xfs_da_state*,struct xfs_da_state_blk*,struct xfs_da_state_blk*) ;
 int FUNC_12 (int ,TYPE_3__*,int ) ;

int
FUNC_13(
 struct xfs_da_state *VAR_3)
{
 struct xfs_da_state_blk *VAR_4;
 struct xfs_da_state_blk *VAR_5;
 struct xfs_da_state_blk *VAR_6;
 struct xfs_da_intnode *VAR_7;
 int VAR_8;
 int VAR_9 = 0;
 int VAR_10;
 int VAR_11;

 FUNC_6(VAR_3->args);







 VAR_8 = VAR_3->path.active - 1;
 FUNC_0((VAR_8 >= 0) && (VAR_8 < VAR_2));
 FUNC_0(VAR_3->path.blk[VAR_8].magic == 130 ||
        VAR_3->path.blk[VAR_8].magic == 128);

 VAR_6 = &VAR_3->path.blk[VAR_8];
 for (VAR_11 = VAR_8; (VAR_11 >= 0) && VAR_6; VAR_3->path.active--, VAR_11--) {
  VAR_4 = &VAR_3->path.blk[VAR_11];
  VAR_5 = &VAR_3->altpath.blk[VAR_11];







  switch (VAR_4->magic) {
  case 130:
   VAR_10 = FUNC_7(VAR_3, VAR_4, VAR_5);
   if ((VAR_10 != 0) && (VAR_10 != -VAR_1)) {
    return VAR_10;
   }
   if (!VAR_10) {
    VAR_6 = VAR_5;
    break;
   }





   VAR_3->extravalid = 1;
   if (VAR_3->inleaf) {
    VAR_3->extraafter = 0;
    FUNC_5(VAR_3->args);
    VAR_10 = FUNC_7(VAR_3, VAR_4,
           &VAR_3->extrablk);
   } else {
    VAR_3->extraafter = 1;
    FUNC_4(VAR_3->args);
    VAR_10 = FUNC_7(VAR_3, VAR_5,
           &VAR_3->extrablk);
   }
   if (VAR_10)
    return VAR_10;
   VAR_6 = VAR_5;
   break;
  case 128:
   VAR_10 = FUNC_11(VAR_3, VAR_4, VAR_5);
   if (VAR_10)
    return VAR_10;
   VAR_6 = VAR_5;
   break;
  case 129:
   VAR_10 = FUNC_9(VAR_3, VAR_4, VAR_5, VAR_6,
        VAR_8 - VAR_11, &VAR_9);
   VAR_6->bp = ((void*)0);
   if (VAR_10)
    return VAR_10;



   if (VAR_9)
    VAR_6 = VAR_5;
   else
    VAR_6 = ((void*)0);
   break;
  }




  FUNC_8(VAR_3, &VAR_3->path);
 }
 if (!VAR_6)
  return 0;






 FUNC_0(VAR_3->extravalid == 0 ||
        VAR_3->path.blk[VAR_8].magic == 128);




 FUNC_0(VAR_3->path.active == 0);
 VAR_4 = &VAR_3->path.blk[0];
 VAR_10 = FUNC_10(VAR_3, VAR_4, VAR_6);
 if (VAR_10)
  goto out;
 VAR_7 = VAR_4->bp->b_addr;
 if (VAR_7->hdr.info.forw) {
  if (FUNC_2(VAR_7->hdr.info.forw) != VAR_6->blkno) {
   VAR_10 = -VAR_0;
   goto out;
  }
  VAR_7 = VAR_6->bp->b_addr;
  VAR_7->hdr.info.back = FUNC_3(VAR_4->blkno);
  FUNC_12(VAR_3->args->trans, VAR_6->bp,
      FUNC_1(VAR_7, &VAR_7->hdr.info,
      sizeof(VAR_7->hdr.info)));
 }
 VAR_7 = VAR_4->bp->b_addr;
 if (VAR_7->hdr.info.back) {
  if (FUNC_2(VAR_7->hdr.info.back) != VAR_6->blkno) {
   VAR_10 = -VAR_0;
   goto out;
  }
  VAR_7 = VAR_6->bp->b_addr;
  VAR_7->hdr.info.forw = FUNC_3(VAR_4->blkno);
  FUNC_12(VAR_3->args->trans, VAR_6->bp,
      FUNC_1(VAR_7, &VAR_7->hdr.info,
      sizeof(VAR_7->hdr.info)));
 }
out:
 VAR_6->bp = ((void*)0);
 return VAR_10;
}
