
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct btrfs_root {int dummy; } ;
struct btrfs_key {int offset; int type; int objectid; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct btrfs_root*,struct btrfs_key*,int const,char const*,int const) ;
 int FUNC_1 (int const,char const*,int const) ;

__attribute__((used)) static bool FUNC_2(struct btrfs_root *VAR_2,
       const char *VAR_3, const int VAR_4,
       const u64 VAR_5, const u64 VAR_6)
{
 struct btrfs_key VAR_7;

 VAR_7.objectid = VAR_6;
 VAR_7.type = VAR_1;
 VAR_7.offset = VAR_5;
 if (FUNC_0(VAR_2, &VAR_7, VAR_5, VAR_3, VAR_4))
  return 1;

 VAR_7.type = VAR_0;
 VAR_7.offset = FUNC_1(VAR_5, VAR_3, VAR_4);
 if (FUNC_0(VAR_2, &VAR_7, VAR_5, VAR_3, VAR_4))
  return 1;

 return 0;
}
