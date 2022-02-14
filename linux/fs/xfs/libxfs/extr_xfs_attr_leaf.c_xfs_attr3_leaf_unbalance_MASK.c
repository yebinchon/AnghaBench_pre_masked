
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int tmphdr ;
struct xfs_da_state_blk {void* hashval; TYPE_1__* bp; } ;
struct xfs_da_state {TYPE_4__* args; } ;
struct xfs_attr_leafblock {int dummy; } ;
struct xfs_attr_leaf_entry {int hashval; } ;
struct xfs_attr3_icleaf_hdr {int count; scalar_t__ holes; scalar_t__ firstused; int back; int forw; int magic; } ;
struct TYPE_10__ {scalar_t__ blksize; } ;
struct TYPE_9__ {TYPE_5__* geo; int trans; } ;
struct TYPE_8__ {struct xfs_attr_leafblock* b_addr; } ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (struct xfs_attr_leafblock*) ;
 struct xfs_attr_leafblock* FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (struct xfs_attr_leafblock*,struct xfs_attr_leafblock*,scalar_t__) ;
 int FUNC_4 (struct xfs_attr3_icleaf_hdr*,int ,int) ;
 int FUNC_5 (TYPE_4__*) ;
 struct xfs_attr_leaf_entry* FUNC_6 (struct xfs_attr_leafblock*) ;
 int FUNC_7 (TYPE_5__*,struct xfs_attr3_icleaf_hdr*,struct xfs_attr_leafblock*) ;
 scalar_t__ FUNC_8 (struct xfs_attr_leafblock*) ;
 int FUNC_9 (TYPE_5__*,struct xfs_attr_leafblock*,struct xfs_attr3_icleaf_hdr*) ;
 int FUNC_10 (TYPE_4__*,struct xfs_attr_leafblock*,struct xfs_attr3_icleaf_hdr*,int ,struct xfs_attr_leafblock*,struct xfs_attr3_icleaf_hdr*,int,int) ;
 scalar_t__ FUNC_11 (TYPE_1__*,struct xfs_attr3_icleaf_hdr*,TYPE_1__*,struct xfs_attr3_icleaf_hdr*) ;
 int FUNC_12 (int ,TYPE_1__*,int ,scalar_t__) ;

void
FUNC_13(
 struct xfs_da_state *VAR_0,
 struct xfs_da_state_blk *VAR_1,
 struct xfs_da_state_blk *VAR_2)
{
 struct xfs_attr_leafblock *VAR_3 = VAR_1->bp->b_addr;
 struct xfs_attr_leafblock *VAR_4 = VAR_2->bp->b_addr;
 struct xfs_attr3_icleaf_hdr VAR_5;
 struct xfs_attr3_icleaf_hdr VAR_6;
 struct xfs_attr_leaf_entry *VAR_7;

 FUNC_5(VAR_0->args);

 VAR_3 = VAR_1->bp->b_addr;
 VAR_4 = VAR_2->bp->b_addr;
 FUNC_7(VAR_0->args->geo, &VAR_5, VAR_3);
 FUNC_7(VAR_0->args->geo, &VAR_6, VAR_4);
 VAR_7 = FUNC_6(VAR_3);




 VAR_1->hashval = FUNC_0(VAR_7[VAR_5.count - 1].hashval);






 if (VAR_6.holes == 0) {




  if (FUNC_11(VAR_2->bp, &VAR_6,
      VAR_1->bp, &VAR_5)) {
   FUNC_10(VAR_0->args,
      VAR_3, &VAR_5, 0,
      VAR_4, &VAR_6, 0,
      VAR_5.count);
  } else {
   FUNC_10(VAR_0->args,
      VAR_3, &VAR_5, 0,
      VAR_4, &VAR_6,
      VAR_6.count, VAR_5.count);
  }
 } else {




  struct xfs_attr_leafblock *VAR_8;
  struct xfs_attr3_icleaf_hdr VAR_9;

  VAR_8 = FUNC_2(VAR_0->args->geo->blksize, 0);






  FUNC_3(VAR_8, VAR_4, FUNC_8(VAR_4));

  FUNC_4(&VAR_9, 0, sizeof(VAR_9));
  VAR_9.magic = VAR_6.magic;
  VAR_9.forw = VAR_6.forw;
  VAR_9.back = VAR_6.back;
  VAR_9.firstused = VAR_0->args->geo->blksize;


  FUNC_9(VAR_0->args->geo, VAR_8, &VAR_9);

  if (FUNC_11(VAR_2->bp, &VAR_6,
      VAR_1->bp, &VAR_5)) {
   FUNC_10(VAR_0->args,
      VAR_3, &VAR_5, 0,
      VAR_8, &VAR_9, 0,
      VAR_5.count);
   FUNC_10(VAR_0->args,
      VAR_4, &VAR_6, 0,
      VAR_8, &VAR_9, VAR_9.count,
      VAR_6.count);
  } else {
   FUNC_10(VAR_0->args,
      VAR_4, &VAR_6, 0,
      VAR_8, &VAR_9, 0,
      VAR_6.count);
   FUNC_10(VAR_0->args,
      VAR_3, &VAR_5, 0,
      VAR_8, &VAR_9, VAR_9.count,
      VAR_5.count);
  }
  FUNC_3(VAR_4, VAR_8, VAR_0->args->geo->blksize);
  VAR_6 = VAR_9;
  FUNC_1(VAR_8);
 }

 FUNC_9(VAR_0->args->geo, VAR_4, &VAR_6);
 FUNC_12(VAR_0->args->trans, VAR_2->bp, 0,
        VAR_0->args->geo->blksize - 1);




 VAR_7 = FUNC_6(VAR_4);
 VAR_2->hashval = FUNC_0(VAR_7[VAR_6.count - 1].hashval);
}
