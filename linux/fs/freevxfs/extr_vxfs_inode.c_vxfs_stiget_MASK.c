
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct inode {int i_ino; } ;
typedef int ino_t ;
struct TYPE_2__ {int vsi_stilist; } ;


 int FUNC_0 (struct inode*) ;
 TYPE_1__* FUNC_1 (struct super_block*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (struct inode*) ;
 struct inode* FUNC_5 (struct super_block*) ;

struct inode *
FUNC_6(struct super_block *VAR_0, ino_t VAR_1)
{
 struct inode *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_5(VAR_0);
 if (!VAR_2)
  return ((void*)0);
 VAR_2->i_ino = FUNC_3();

 VAR_3 = FUNC_2(FUNC_1(VAR_0)->vsi_stilist, FUNC_0(VAR_2), VAR_1);
 if (VAR_3) {
  FUNC_4(VAR_2);
  return ((void*)0);
 }

 return VAR_2;
}
