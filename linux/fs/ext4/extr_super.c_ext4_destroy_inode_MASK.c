
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct inode {int i_ino; int i_sb; } ;
struct ext4_inode_info {int dummy; } ;
struct TYPE_4__ {int i_orphan; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,char*,int ,TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*,int ,int,int,TYPE_1__*,int,int) ;

__attribute__((used)) static void FUNC_5(struct inode *VAR_3)
{
 if (!FUNC_3(&(FUNC_0(VAR_3)->i_orphan))) {
  FUNC_2(VAR_3->i_sb, VAR_1,
    "Inode %lu (%p): orphan list check failed!",
    VAR_3->i_ino, FUNC_0(VAR_3));
  FUNC_4(VAR_2, "", VAR_0, 16, 4,
    FUNC_0(VAR_3), sizeof(struct ext4_inode_info),
    1);
  FUNC_1();
 }
}
