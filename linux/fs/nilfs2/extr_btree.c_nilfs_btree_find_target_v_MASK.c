
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_btree_path {int dummy; } ;
struct nilfs_bmap {int dummy; } ;
typedef scalar_t__ __u64 ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct nilfs_bmap const*) ;
 scalar_t__ FUNC_1 (struct nilfs_bmap const*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct nilfs_bmap const*,struct nilfs_btree_path const*) ;

__attribute__((used)) static __u64 FUNC_3(const struct nilfs_bmap *VAR_1,
           const struct nilfs_btree_path *VAR_2,
           __u64 VAR_3)
{
 __u64 VAR_4;

 VAR_4 = FUNC_1(VAR_1, VAR_3);
 if (VAR_4 != VAR_0)

  return VAR_4;

 VAR_4 = FUNC_2(VAR_1, VAR_2);
 if (VAR_4 != VAR_0)

  return VAR_4;


 return FUNC_0(VAR_1);
}
