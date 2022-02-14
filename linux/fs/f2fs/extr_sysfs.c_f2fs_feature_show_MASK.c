
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_sb_info {int dummy; } ;
struct f2fs_attr {int id; } ;
typedef int ssize_t ;
 int VAR_0 ;
 int FUNC_0 (char*,int ,char*) ;

__attribute__((used)) static ssize_t FUNC_1(struct f2fs_attr *VAR_1,
  struct f2fs_sb_info *VAR_2, char *VAR_3)
{
 switch (VAR_1->id) {
 case 137:
 case 139:
 case 140:
 case 136:
 case 131:
 case 134:
 case 135:
 case 130:
 case 133:
 case 132:
 case 128:
 case 129:
 case 138:
  return FUNC_0(VAR_3, VAR_0, "supported\n");
 }
 return 0;
}
