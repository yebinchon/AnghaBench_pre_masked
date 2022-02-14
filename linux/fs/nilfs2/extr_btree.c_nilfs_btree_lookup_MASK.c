
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_btree_path {int dummy; } ;
struct nilfs_bmap {int dummy; } ;
typedef int __u64 ;


 int VAR_0 ;
 struct nilfs_btree_path* FUNC_0 () ;
 int FUNC_1 (struct nilfs_bmap const*,struct nilfs_btree_path*,int ,int *,int,int ) ;
 int FUNC_2 (struct nilfs_btree_path*) ;

__attribute__((used)) static int FUNC_3(const struct nilfs_bmap *VAR_1,
         __u64 VAR_2, int VAR_3, __u64 *VAR_4)
{
 struct nilfs_btree_path *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_0();
 if (VAR_5 == ((void*)0))
  return -VAR_0;

 VAR_6 = FUNC_1(VAR_1, VAR_5, VAR_2, VAR_4, VAR_3, 0);

 FUNC_2(VAR_5);

 return VAR_6;
}
