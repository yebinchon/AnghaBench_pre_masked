
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfs_inode {int i_mount; int i_pincount; } ;
struct TYPE_2__ {int i_rcu; } ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (struct xfs_inode*) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_5(
 struct xfs_inode *VAR_2)
{

 FUNC_0(FUNC_3(&VAR_2->i_pincount) == 0);
 FUNC_2(VAR_2->i_mount, VAR_0);

 FUNC_4(&FUNC_1(VAR_2)->i_rcu, VAR_1);
}
