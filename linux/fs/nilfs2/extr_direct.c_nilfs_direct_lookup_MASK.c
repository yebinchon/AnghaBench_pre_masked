
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_bmap {int dummy; } ;
typedef scalar_t__ __u64 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct nilfs_bmap const*,scalar_t__) ;

__attribute__((used)) static int FUNC_1(const struct nilfs_bmap *VAR_3,
          __u64 VAR_4, int VAR_5, __u64 *VAR_6)
{
 __u64 VAR_7;

 if (VAR_4 > VAR_2 || VAR_5 != 1)
  return -VAR_0;
 VAR_7 = FUNC_0(VAR_3, VAR_4);
 if (VAR_7 == VAR_1)
  return -VAR_0;

 *VAR_6 = VAR_7;
 return 0;
}
