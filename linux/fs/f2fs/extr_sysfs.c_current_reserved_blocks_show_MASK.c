
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_sb_info {int current_reserved_blocks; } ;
struct f2fs_attr {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char*,int) ;

__attribute__((used)) static ssize_t FUNC_1(struct f2fs_attr *VAR_1,
     struct f2fs_sb_info *VAR_2, char *VAR_3)
{
 return FUNC_0(VAR_3, VAR_0, "%u\n", VAR_2->current_reserved_blocks);
}
