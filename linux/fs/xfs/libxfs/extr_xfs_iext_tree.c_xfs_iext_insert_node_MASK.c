
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct xfs_ifork {int if_height; } ;
struct xfs_iext_node {int * keys; void** ptrs; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct xfs_iext_node* FUNC_1 (struct xfs_ifork*,int ,int) ;
 int FUNC_2 (struct xfs_ifork*) ;
 scalar_t__ FUNC_3 (struct xfs_iext_node*,int,int ) ;
 int FUNC_4 (struct xfs_iext_node*,int ) ;
 int FUNC_5 (struct xfs_iext_node*,int) ;
 struct xfs_iext_node* FUNC_6 (struct xfs_iext_node**,int*,int*) ;
 int FUNC_7 (struct xfs_ifork*,int ,int ,int,struct xfs_iext_node*) ;

__attribute__((used)) static void
FUNC_8(
 struct xfs_ifork *VAR_1,
 uint64_t VAR_2,
 void *VAR_3,
 int VAR_4)
{
 struct xfs_iext_node *VAR_5, *VAR_6;
 int VAR_7, VAR_8, VAR_9;

again:
 if (VAR_1->if_height < VAR_4)
  FUNC_2(VAR_1);

 VAR_6 = ((void*)0);
 VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_4);
 VAR_8 = FUNC_4(VAR_5, VAR_2);
 VAR_9 = FUNC_5(VAR_5, VAR_8);

 FUNC_0(VAR_8 >= VAR_9 || FUNC_3(VAR_5, VAR_8, VAR_2) != 0);
 FUNC_0(VAR_9 <= VAR_0);

 if (VAR_9 == VAR_0)
  VAR_6 = FUNC_6(&VAR_5, &VAR_8, &VAR_9);





 if (VAR_5 != VAR_6 && VAR_8 == 0 && VAR_9 > 0)
  FUNC_7(VAR_1, VAR_5->keys[0], VAR_2, VAR_4, VAR_5);

 for (VAR_7 = VAR_9; VAR_7 > VAR_8; VAR_7--) {
  VAR_5->keys[VAR_7] = VAR_5->keys[VAR_7 - 1];
  VAR_5->ptrs[VAR_7] = VAR_5->ptrs[VAR_7 - 1];
 }
 VAR_5->keys[VAR_8] = VAR_2;
 VAR_5->ptrs[VAR_8] = VAR_3;

 if (VAR_6) {
  VAR_2 = VAR_6->keys[0];
  VAR_3 = VAR_6;
  VAR_4++;
  goto again;
 }
}
