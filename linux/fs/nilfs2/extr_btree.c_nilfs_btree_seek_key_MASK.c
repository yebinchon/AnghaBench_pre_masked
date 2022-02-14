
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_btree_path {int dummy; } ;
struct nilfs_bmap {int dummy; } ;
typedef int __u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct nilfs_btree_path* FUNC_0 () ;
 int FUNC_1 (struct nilfs_bmap const*,struct nilfs_btree_path*,int ,int *,int const,int ) ;
 int FUNC_2 (struct nilfs_btree_path*) ;
 int FUNC_3 (struct nilfs_bmap const*,struct nilfs_btree_path*,int const,int *) ;

__attribute__((used)) static int FUNC_4(const struct nilfs_bmap *VAR_3, __u64 VAR_4,
    __u64 *VAR_5)
{
 struct nilfs_btree_path *VAR_6;
 const int VAR_7 = VAR_2;
 int VAR_8;

 VAR_6 = FUNC_0();
 if (!VAR_6)
  return -VAR_1;

 VAR_8 = FUNC_1(VAR_3, VAR_6, VAR_4, ((void*)0), VAR_7, 0);
 if (!VAR_8)
  *VAR_5 = VAR_4;
 else if (VAR_8 == -VAR_0)
  VAR_8 = FUNC_3(VAR_3, VAR_6, VAR_7, VAR_5);

 FUNC_2(VAR_6);
 return VAR_8;
}
