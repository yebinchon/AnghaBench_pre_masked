
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

__attribute__((used)) static int FUNC_1(const struct nilfs_bmap *VAR_3, __u64 VAR_4,
     __u64 *VAR_5)
{
 __u64 VAR_6;

 for (VAR_6 = VAR_4; VAR_6 <= VAR_2; VAR_6++) {
  if (FUNC_0(VAR_3, VAR_6) !=
      VAR_1) {
   *VAR_5 = VAR_6;
   return 0;
  }
 }
 return -VAR_0;
}
