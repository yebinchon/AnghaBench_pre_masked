
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct inode {int i_nlink; struct super_block* i_sb; } ;
struct TYPE_4__ {scalar_t__ i_start; } ;
struct TYPE_3__ {scalar_t__ root_cluster; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct inode*) ;
 TYPE_1__* FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct super_block*,char*) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_1)
{
 struct super_block *VAR_2 = VAR_1->i_sb;

 if (VAR_1->i_nlink < 2) {

  FUNC_2(VAR_2, "corrupted directory (invalid entries)");
  return -VAR_0;
 }
 if (FUNC_0(VAR_1)->i_start == 0 ||
     FUNC_0(VAR_1)->i_start == FUNC_1(VAR_2)->root_cluster) {

  FUNC_2(VAR_2, "corrupted directory (invalid i_start)");
  return -VAR_0;
 }
 return 0;
}
