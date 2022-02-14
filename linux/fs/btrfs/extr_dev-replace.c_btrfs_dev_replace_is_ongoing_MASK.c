
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_dev_replace {int replace_state; int is_valid; } ;
int FUNC_0(struct btrfs_dev_replace *VAR_0)
{
 if (!VAR_0->is_valid)
  return 0;

 switch (VAR_0->replace_state) {
 case 130:
 case 131:
 case 132:
  return 0;
 case 129:
 case 128:
  break;
 }
 return 1;
}
