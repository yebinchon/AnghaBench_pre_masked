
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_btree_path {int dummy; } ;
struct nilfs_bmap {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef int __u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct nilfs_bmap*) ;
 int FUNC_5 (struct nilfs_bmap*) ;
 struct nilfs_btree_path* FUNC_6 () ;
 int FUNC_7 (struct nilfs_bmap*,struct nilfs_btree_path*,int ,int *,int,int ) ;
 int FUNC_8 (struct nilfs_btree_path*) ;
 int FUNC_9 (struct nilfs_bmap*,int ,struct buffer_head**) ;

__attribute__((used)) static int FUNC_10(struct nilfs_bmap *VAR_2, __u64 VAR_3, int VAR_4)
{
 struct buffer_head *VAR_5;
 struct nilfs_btree_path *VAR_6;
 __u64 VAR_7;
 int VAR_8;

 VAR_6 = FUNC_6();
 if (VAR_6 == ((void*)0))
  return -VAR_1;

 VAR_8 = FUNC_7(VAR_2, VAR_6, VAR_3, &VAR_7, VAR_4 + 1, 0);
 if (VAR_8 < 0) {
  FUNC_0(VAR_8 == -VAR_0);
  goto out;
 }
 VAR_8 = FUNC_9(VAR_2, VAR_7, &VAR_5);
 if (VAR_8 < 0) {
  FUNC_0(VAR_8 == -VAR_0);
  goto out;
 }

 if (!FUNC_2(VAR_5))
  FUNC_3(VAR_5);
 FUNC_1(VAR_5);
 if (!FUNC_4(VAR_2))
  FUNC_5(VAR_2);

 out:
 FUNC_8(VAR_6);
 return VAR_8;
}
