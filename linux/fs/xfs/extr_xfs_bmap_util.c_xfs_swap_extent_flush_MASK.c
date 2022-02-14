
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xfs_inode {int dummy; } ;
struct TYPE_5__ {scalar_t__ nrpages; } ;
struct TYPE_4__ {TYPE_2__* i_mapping; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct xfs_inode*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int
FUNC_3(
 struct xfs_inode *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(FUNC_0(VAR_1)->i_mapping);
 if (VAR_2)
  return VAR_2;
 FUNC_2(FUNC_0(VAR_1), 0, -1);


 if (FUNC_0(VAR_1)->i_mapping->nrpages)
  return -VAR_0;
 return 0;
}
