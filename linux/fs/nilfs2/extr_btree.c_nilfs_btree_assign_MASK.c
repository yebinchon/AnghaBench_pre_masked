
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union nilfs_binfo {int dummy; } nilfs_binfo ;
struct nilfs_btree_path {int dummy; } ;
struct nilfs_btree_node {int dummy; } ;
struct nilfs_bmap {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int sector_t ;
typedef int __u64 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct nilfs_bmap*) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct nilfs_bmap*,struct buffer_head*) ;
 struct nilfs_btree_path* FUNC_4 () ;
 int FUNC_5 (struct nilfs_bmap*,struct nilfs_btree_path*,int,struct buffer_head**,int ,union nilfs_binfo*) ;
 int FUNC_6 (struct nilfs_bmap*,struct nilfs_btree_path*,int,struct buffer_head**,int ,union nilfs_binfo*) ;
 int FUNC_7 (struct nilfs_bmap*,struct nilfs_btree_path*,int ,int *,int,int ) ;
 int FUNC_8 (struct nilfs_btree_path*) ;
 int FUNC_9 (struct nilfs_btree_node*,int ) ;
 int FUNC_10 (struct nilfs_btree_node*) ;

__attribute__((used)) static int FUNC_11(struct nilfs_bmap *VAR_3,
         struct buffer_head **VAR_4,
         sector_t VAR_5,
         union nilfs_binfo *VAR_6)
{
 struct nilfs_btree_path *VAR_7;
 struct nilfs_btree_node *VAR_8;
 __u64 VAR_9;
 int VAR_10, VAR_11;

 VAR_7 = FUNC_4();
 if (VAR_7 == ((void*)0))
  return -VAR_1;

 if (FUNC_2(*VAR_4)) {
  VAR_8 = (struct nilfs_btree_node *)(*VAR_4)->b_data;
  VAR_9 = FUNC_9(VAR_8, 0);
  VAR_10 = FUNC_10(VAR_8);
 } else {
  VAR_9 = FUNC_3(VAR_3, *VAR_4);
  VAR_10 = VAR_2;
 }

 VAR_11 = FUNC_7(VAR_3, VAR_7, VAR_9, ((void*)0), VAR_10 + 1, 0);
 if (VAR_11 < 0) {
  FUNC_1(VAR_11 == -VAR_0);
  goto out;
 }

 VAR_11 = FUNC_0(VAR_3) ?
  FUNC_6(VAR_3, VAR_7, VAR_10, VAR_4, VAR_5, VAR_6) :
  FUNC_5(VAR_3, VAR_7, VAR_10, VAR_4, VAR_5, VAR_6);

 out:
 FUNC_8(VAR_7);

 return VAR_11;
}
