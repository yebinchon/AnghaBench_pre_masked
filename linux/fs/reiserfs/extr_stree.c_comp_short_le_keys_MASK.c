
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reiserfs_key {int dummy; } ;
typedef int __u32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

inline int FUNC_1(const struct reiserfs_key *VAR_1,
         const struct reiserfs_key *VAR_2)
{
 __u32 *VAR_3, *VAR_4;
 int VAR_5 = VAR_0;

 VAR_3 = (__u32 *) VAR_1;
 VAR_4 = (__u32 *) VAR_2;
 for (; VAR_5--; ++VAR_3, ++VAR_4) {
  if (FUNC_0(*VAR_3) < FUNC_0(*VAR_4))
   return -1;
  if (FUNC_0(*VAR_3) > FUNC_0(*VAR_4))
   return 1;
 }
 return 0;
}
