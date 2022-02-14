
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_bmap {int dummy; } ;
typedef scalar_t__ __u64 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct nilfs_bmap const*,scalar_t__) ;

__attribute__((used)) static int FUNC_1(const struct nilfs_bmap *VAR_4, __u64 *VAR_5)
{
 __u64 VAR_6, VAR_7;

 VAR_7 = VAR_2 + 1;
 for (VAR_6 = VAR_3; VAR_6 <= VAR_2; VAR_6++)
  if (FUNC_0(VAR_4, VAR_6) !=
      VAR_1)
   VAR_7 = VAR_6;

 if (VAR_7 == VAR_2 + 1)
  return -VAR_0;

 *VAR_5 = VAR_7;

 return 0;
}
