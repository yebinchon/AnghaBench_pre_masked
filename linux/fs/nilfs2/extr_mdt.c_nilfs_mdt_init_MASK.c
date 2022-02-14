
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nilfs_mdt_info {int mi_sem; } ;
struct inode {TYPE_1__* i_mapping; int * i_fop; int * i_op; int i_mode; struct nilfs_mdt_info* i_private; } ;
typedef int gfp_t ;
struct TYPE_2__ {int * a_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 struct nilfs_mdt_info* FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int,size_t) ;

int FUNC_4(struct inode *VAR_6, gfp_t VAR_7, size_t VAR_8)
{
 struct nilfs_mdt_info *VAR_9;

 VAR_9 = FUNC_1(FUNC_3(sizeof(*VAR_9), VAR_8), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 FUNC_0(&VAR_9->mi_sem);
 VAR_6->i_private = VAR_9;

 VAR_6->i_mode = VAR_2;
 FUNC_2(VAR_6->i_mapping, VAR_7);

 VAR_6->i_op = &VAR_5;
 VAR_6->i_fop = &VAR_4;
 VAR_6->i_mapping->a_ops = &VAR_3;

 return 0;
}
