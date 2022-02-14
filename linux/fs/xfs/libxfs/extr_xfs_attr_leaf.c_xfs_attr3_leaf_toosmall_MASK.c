
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ xfs_dablk_t ;
typedef int xfs_attr_leaf_entry_t ;
struct xfs_da_state_blk {scalar_t__ blkno; TYPE_1__* bp; } ;
struct TYPE_8__ {int active; struct xfs_da_state_blk* blk; } ;
struct xfs_da_state {TYPE_2__ path; TYPE_2__ altpath; TYPE_4__* args; } ;
struct xfs_buf {struct xfs_attr_leafblock* b_addr; } ;
struct xfs_attr_leafblock {int dummy; } ;
struct xfs_attr3_icleaf_hdr {int count; int usedbytes; scalar_t__ forw; scalar_t__ back; } ;
struct TYPE_10__ {int trans; TYPE_3__* geo; int dp; } ;
struct TYPE_9__ {int blksize; } ;
struct TYPE_7__ {struct xfs_attr_leafblock* b_addr; } ;


 int FUNC_0 (TYPE_2__*,TYPE_2__*,int) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_3__*,struct xfs_attr3_icleaf_hdr*,struct xfs_attr_leafblock*) ;
 int FUNC_3 (struct xfs_attr_leafblock*) ;
 int FUNC_4 (int ,int ,scalar_t__,int,struct xfs_buf**) ;
 int FUNC_5 (struct xfs_da_state*,TYPE_2__*,int,int ,int*) ;
 int FUNC_6 (int ,struct xfs_buf*) ;

int
FUNC_7(
 struct xfs_da_state *VAR_0,
 int *VAR_1)
{
 struct xfs_attr_leafblock *VAR_2;
 struct xfs_da_state_blk *VAR_3;
 struct xfs_attr3_icleaf_hdr VAR_4;
 struct xfs_buf *VAR_5;
 xfs_dablk_t VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;

 FUNC_1(VAR_0->args);






 VAR_3 = &VAR_0->path.blk[ VAR_0->path.active-1 ];
 VAR_2 = VAR_3->bp->b_addr;
 FUNC_2(VAR_0->args->geo, &VAR_4, VAR_2);
 VAR_7 = FUNC_3(VAR_2) +
  VAR_4.count * sizeof(xfs_attr_leaf_entry_t) +
  VAR_4.usedbytes;
 if (VAR_7 > (VAR_0->args->geo->blksize >> 1)) {
  *VAR_1 = 0;
  return 0;
 }







 if (VAR_4.count == 0) {




  VAR_8 = (VAR_4.forw != 0);
  FUNC_0(&VAR_0->altpath, &VAR_0->path, sizeof(VAR_0->path));
  VAR_9 = FUNC_5(VAR_0, &VAR_0->altpath, VAR_8,
       0, &VAR_10);
  if (VAR_9)
   return VAR_9;
  if (VAR_10) {
   *VAR_1 = 0;
  } else {
   *VAR_1 = 2;
  }
  return 0;
 }
 VAR_8 = VAR_4.forw < VAR_4.back;
 for (VAR_11 = 0; VAR_11 < 2; VAR_8 = !VAR_8, VAR_11++) {
  struct xfs_attr3_icleaf_hdr VAR_12;
  if (VAR_8)
   VAR_6 = VAR_4.forw;
  else
   VAR_6 = VAR_4.back;
  if (VAR_6 == 0)
   continue;
  VAR_9 = FUNC_4(VAR_0->args->trans, VAR_0->args->dp,
     VAR_6, -1, &VAR_5);
  if (VAR_9)
   return VAR_9;

  FUNC_2(VAR_0->args->geo, &VAR_12, VAR_5->b_addr);

  VAR_7 = VAR_0->args->geo->blksize -
   (VAR_0->args->geo->blksize >> 2) -
   VAR_4.usedbytes - VAR_12 -
   ((VAR_4.count + VAR_12) *
     sizeof(xfs_attr_leaf_entry_t)) -
   FUNC_3(VAR_2);

  FUNC_6(VAR_0->args->trans, VAR_5);
  if (VAR_7 >= 0)
   break;
 }
 if (VAR_11 >= 2) {
  *VAR_1 = 0;
  return 0;
 }





 FUNC_0(&VAR_0->altpath, &VAR_0->path, sizeof(VAR_0->path));
 if (VAR_6 < VAR_3->blkno) {
  VAR_9 = FUNC_5(VAR_0, &VAR_0->altpath, VAR_8,
       0, &VAR_10);
 } else {
  VAR_9 = FUNC_5(VAR_0, &VAR_0->path, VAR_8,
       0, &VAR_10);
 }
 if (VAR_9)
  return VAR_9;
 if (VAR_10) {
  *VAR_1 = 0;
 } else {
  *VAR_1 = 1;
 }
 return 0;
}
