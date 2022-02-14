
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ubifs_key {int dummy; } ubifs_key ;
struct ubifs_info {int dummy; } ;


 scalar_t__ FUNC_0 (struct ubifs_info*,union ubifs_key*,union ubifs_key*) ;

__attribute__((used)) static int FUNC_1(struct ubifs_info *VAR_0, union ubifs_key *VAR_1,
   union ubifs_key *VAR_2, union ubifs_key *VAR_3)
{
 if (FUNC_0(VAR_0, VAR_1, VAR_2) < 0)
  return 0;
 if (FUNC_0(VAR_0, VAR_1, VAR_3) > 0)
  return 0;
 return 1;
}
