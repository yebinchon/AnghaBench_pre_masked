
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* bi_blkoff; void* bi_vblocknr; } ;
union nilfs_binfo {TYPE_1__ bi_v; } ;
struct nilfs_btree_node {int dummy; } ;
struct nilfs_bmap {int dummy; } ;
struct buffer_head {int b_blocknr; scalar_t__ b_data; } ;
typedef int sector_t ;
typedef int __u64 ;


 scalar_t__ FUNC_0 (struct buffer_head*) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct nilfs_bmap*,struct buffer_head*) ;
 int FUNC_3 (struct nilfs_bmap*) ;
 int FUNC_4 (struct nilfs_btree_node*,int ) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct nilfs_bmap *VAR_0,
     struct buffer_head **VAR_1,
     sector_t VAR_2,
     union nilfs_binfo *VAR_3)
{
 struct nilfs_btree_node *VAR_4;
 __u64 VAR_5;
 int VAR_6;

 VAR_6 = FUNC_5(FUNC_3(VAR_0), (*VAR_1)->b_blocknr,
        VAR_2);
 if (VAR_6 < 0)
  return VAR_6;

 if (FUNC_0(*VAR_1)) {
  VAR_4 = (struct nilfs_btree_node *)(*VAR_1)->b_data;
  VAR_5 = FUNC_4(VAR_4, 0);
 } else
  VAR_5 = FUNC_2(VAR_0, *VAR_1);


 VAR_3->bi_v.bi_vblocknr = FUNC_1((*VAR_1)->b_blocknr);
 VAR_3->bi_v.bi_blkoff = FUNC_1(VAR_5);

 return 0;
}
