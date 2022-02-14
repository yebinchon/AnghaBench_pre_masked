
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct xfs_iext_node* if_root; } ;
struct xfs_ifork {int if_height; TYPE_1__ if_u1; } ;
struct xfs_iext_node {int * keys; struct xfs_iext_node** ptrs; } ;
struct xfs_iext_leaf {int * keys; struct xfs_iext_leaf** ptrs; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct xfs_iext_node* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct xfs_iext_node*,int ) ;

__attribute__((used)) static void
FUNC_3(
 struct xfs_ifork *VAR_4)
{
 struct xfs_iext_node *VAR_5 = FUNC_1(VAR_2, VAR_1);
 int VAR_6;

 if (VAR_4->if_height == 1) {
  struct xfs_iext_leaf *VAR_7 = VAR_4->if_u1.if_root;

  VAR_5->keys[0] = FUNC_2(VAR_7, 0);
  VAR_5->ptrs[0] = VAR_7;
 } else {
  struct xfs_iext_node *VAR_8 = VAR_4->if_u1.if_root;

  FUNC_0(VAR_4->if_height > 1);

  VAR_5->keys[0] = VAR_8->keys[0];
  VAR_5->ptrs[0] = VAR_8;
 }

 for (VAR_6 = 1; VAR_6 < VAR_0; VAR_6++)
  VAR_5->keys[VAR_6] = VAR_3;

 VAR_4->if_u1.if_root = VAR_5;
 VAR_4->if_height++;
}
