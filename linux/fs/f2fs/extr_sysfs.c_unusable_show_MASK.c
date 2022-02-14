
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_sb_info {scalar_t__ unusable_block_count; } ;
struct f2fs_attr {int dummy; } ;
typedef int ssize_t ;
typedef scalar_t__ block_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct f2fs_sb_info*) ;
 int FUNC_1 (char*,int ,char*,unsigned long long) ;
 scalar_t__ FUNC_2 (struct f2fs_sb_info*,int ) ;

__attribute__((used)) static ssize_t FUNC_3(struct f2fs_attr *VAR_2,
  struct f2fs_sb_info *VAR_3, char *VAR_4)
{
 block_t VAR_5;

 if (FUNC_2(VAR_3, VAR_0))
  VAR_5 = VAR_3->unusable_block_count;
 else
  VAR_5 = FUNC_0(VAR_3);
 return FUNC_1(VAR_4, VAR_1, "%llu\n",
  (unsigned long long)VAR_5);
}
