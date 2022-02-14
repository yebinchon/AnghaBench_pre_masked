
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nilfs_inode_info {int i_bmap; scalar_t__ i_flags; } ;
struct inode {TYPE_1__* i_mapping; int i_mode; } ;
struct TYPE_2__ {int * a_ops; } ;


 int VAR_0 ;
 struct nilfs_inode_info* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int ) ;

int FUNC_3(struct inode *VAR_3)
{
 struct nilfs_inode_info *VAR_4 = FUNC_0(VAR_3);

 VAR_3->i_mode = VAR_1;
 FUNC_1(VAR_3->i_mapping, VAR_0);
 VAR_3->i_mapping->a_ops = &VAR_2;

 VAR_4->i_flags = 0;
 FUNC_2(VAR_4->i_bmap);

 return 0;
}
