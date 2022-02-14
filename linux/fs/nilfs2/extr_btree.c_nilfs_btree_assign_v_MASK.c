
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union nilfs_bmap_ptr_req {int bpr_req; int bpr_ptr; } ;
struct TYPE_2__ {void* bi_blkoff; void* bi_vblocknr; } ;
union nilfs_binfo {TYPE_1__ bi_v; } ;
struct nilfs_btree_path {int bp_index; } ;
struct nilfs_btree_node {int dummy; } ;
struct nilfs_bmap {int dummy; } ;
struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef int sector_t ;
typedef int __u64 ;


 void* FUNC_0 (int ) ;
 struct inode* FUNC_1 (struct nilfs_bmap*) ;
 struct nilfs_btree_node* FUNC_2 (struct nilfs_bmap*,struct nilfs_btree_path*,int,int*) ;
 int FUNC_3 (struct nilfs_btree_node*,int ) ;
 int FUNC_4 (struct nilfs_btree_node*,int ,int) ;
 int FUNC_5 (struct inode*,int *,int ) ;
 int FUNC_6 (struct inode*,int *) ;

__attribute__((used)) static int FUNC_7(struct nilfs_bmap *VAR_0,
    struct nilfs_btree_path *VAR_1,
    int VAR_2,
    struct buffer_head **VAR_3,
    sector_t VAR_4,
    union nilfs_binfo *VAR_5)
{
 struct nilfs_btree_node *VAR_6;
 struct inode *VAR_7 = FUNC_1(VAR_0);
 __u64 VAR_8;
 __u64 VAR_9;
 union nilfs_bmap_ptr_req VAR_10;
 int VAR_11, VAR_12;

 VAR_6 = FUNC_2(VAR_0, VAR_1, VAR_2 + 1, &VAR_11);
 VAR_9 = FUNC_4(VAR_6, VAR_1[VAR_2 + 1].bp_index,
           VAR_11);
 VAR_10.bpr_ptr = VAR_9;
 VAR_12 = FUNC_6(VAR_7, &VAR_10.bpr_req);
 if (VAR_12 < 0)
  return VAR_12;
 FUNC_5(VAR_7, &VAR_10.bpr_req, VAR_4);

 VAR_8 = FUNC_3(VAR_6, VAR_1[VAR_2 + 1].bp_index);

 VAR_5->bi_v.bi_vblocknr = FUNC_0(VAR_9);
 VAR_5->bi_v.bi_blkoff = FUNC_0(VAR_8);

 return 0;
}
