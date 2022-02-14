
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int if_root; } ;
struct xfs_ifork {scalar_t__ if_bytes; int if_height; TYPE_1__ if_u1; } ;
struct xfs_iext_rec {int dummy; } ;
struct xfs_iext_cursor {scalar_t__ pos; int leaf; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static void
FUNC_2(
 struct xfs_ifork *VAR_1,
 struct xfs_iext_cursor *VAR_2)
{
 FUNC_0(VAR_1->if_bytes == 0);

 VAR_1->if_u1.if_root = FUNC_1(sizeof(struct xfs_iext_rec), VAR_0);
 VAR_1->if_height = 1;


 VAR_2->leaf = VAR_1->if_u1.if_root;
 VAR_2->pos = 0;
}
