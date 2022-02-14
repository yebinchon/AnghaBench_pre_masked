
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int bi_level; int bi_blkoff; } ;
union nilfs_binfo {TYPE_1__ bi_dat; } ;
struct TYPE_6__ {struct buffer_head* bh; int newkey; int oldkey; } ;
struct nilfs_btree_path {int bp_index; TYPE_2__ bp_ctxt; } ;
struct nilfs_btree_node {int dummy; } ;
struct nilfs_bmap {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef int sector_t ;
typedef int __u64 ;
struct TYPE_7__ {int i_btnode_cache; } ;


 TYPE_4__* FUNC_0 (struct nilfs_bmap*) ;
 scalar_t__ FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,TYPE_2__*) ;
 int FUNC_4 (int *,TYPE_2__*) ;
 struct nilfs_btree_node* FUNC_5 (struct nilfs_bmap*,struct nilfs_btree_path*,int,int*) ;
 int FUNC_6 (struct nilfs_btree_node*,int ) ;
 int FUNC_7 (struct nilfs_btree_node*,int ,int) ;
 int FUNC_8 (struct nilfs_btree_node*,int ,int ,int) ;

__attribute__((used)) static int FUNC_9(struct nilfs_bmap *VAR_0,
    struct nilfs_btree_path *VAR_1,
    int VAR_2,
    struct buffer_head **VAR_3,
    sector_t VAR_4,
    union nilfs_binfo *VAR_5)
{
 struct nilfs_btree_node *VAR_6;
 __u64 VAR_7;
 __u64 VAR_8;
 int VAR_9, VAR_10;

 VAR_6 = FUNC_5(VAR_0, VAR_1, VAR_2 + 1, &VAR_9);
 VAR_8 = FUNC_7(VAR_6, VAR_1[VAR_2 + 1].bp_index,
           VAR_9);
 if (FUNC_1(*VAR_3)) {
  VAR_1[VAR_2].bp_ctxt.oldkey = VAR_8;
  VAR_1[VAR_2].bp_ctxt.newkey = VAR_4;
  VAR_1[VAR_2].bp_ctxt.bh = *VAR_3;
  VAR_10 = FUNC_4(
   &FUNC_0(VAR_0)->i_btnode_cache,
   &VAR_1[VAR_2].bp_ctxt);
  if (VAR_10 < 0)
   return VAR_10;
  FUNC_3(
   &FUNC_0(VAR_0)->i_btnode_cache,
   &VAR_1[VAR_2].bp_ctxt);
  *VAR_3 = VAR_1[VAR_2].bp_ctxt.bh;
 }

 FUNC_8(VAR_6, VAR_1[VAR_2 + 1].bp_index, VAR_4,
     VAR_9);

 VAR_7 = FUNC_6(VAR_6, VAR_1[VAR_2 + 1].bp_index);

 VAR_5->bi_dat.bi_blkoff = FUNC_2(VAR_7);
 VAR_5->bi_dat.bi_level = VAR_2;

 return 0;
}
