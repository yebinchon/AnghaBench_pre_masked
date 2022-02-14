
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ cdev; } ;
struct ubifs_info {TYPE_1__ vi; } ;
struct super_block {struct ubifs_info* s_fs_info; } ;



__attribute__((used)) static int FUNC_0(struct super_block *VAR_0, void *VAR_1)
{
 struct ubifs_info *VAR_2 = VAR_1;
 struct ubifs_info *VAR_3 = VAR_0->s_fs_info;

 return VAR_3->vi.cdev == VAR_2->vi.cdev;
}
