
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_sb_info {int dummy; } ;
struct f2fs_attr {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct f2fs_sb_info*) ;
 int FUNC_1 (char*,int ,char*,unsigned long long) ;

__attribute__((used)) static ssize_t FUNC_2(struct f2fs_attr *VAR_1,
  struct f2fs_sb_info *VAR_2, char *VAR_3)
{
 return FUNC_1(VAR_3, VAR_0, "%llu\n",
  (unsigned long long)(FUNC_0(VAR_2)));
}
