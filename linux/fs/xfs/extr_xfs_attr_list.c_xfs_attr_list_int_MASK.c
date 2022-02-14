
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int i_mount; } ;
typedef TYPE_1__ xfs_inode_t ;
struct TYPE_8__ {TYPE_1__* dp; } ;
typedef TYPE_2__ xfs_attr_list_context_t ;
typedef int uint ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int VAR_1 ;

int
FUNC_5(
 xfs_attr_list_context_t *VAR_2)
{
 int VAR_3;
 xfs_inode_t *VAR_4 = VAR_2->dp;
 uint VAR_5;

 FUNC_1(VAR_4->i_mount, VAR_1);

 if (FUNC_0(VAR_4->i_mount))
  return -VAR_0;

 VAR_5 = FUNC_3(VAR_4);
 VAR_3 = FUNC_2(VAR_2);
 FUNC_4(VAR_4, VAR_5);
 return VAR_3;
}
