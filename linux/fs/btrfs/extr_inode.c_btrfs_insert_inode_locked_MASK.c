
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_ino; } ;
struct btrfs_iget_args {int root; int * location; } ;
struct TYPE_2__ {int root; int location; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct inode*,int ,int ,struct btrfs_iget_args*) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_1)
{
 struct btrfs_iget_args VAR_2;
 VAR_2.location = &FUNC_0(VAR_1)->location;
 VAR_2.root = FUNC_0(VAR_1)->root;

 return FUNC_2(VAR_1,
     FUNC_1(VAR_1->i_ino, FUNC_0(VAR_1)->root),
     VAR_0, &VAR_2);
}
