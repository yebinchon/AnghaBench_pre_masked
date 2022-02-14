
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_iext_node {void** keys; int ** ptrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 struct xfs_iext_node* FUNC_0 (int ,int ) ;

__attribute__((used)) static struct xfs_iext_node *
FUNC_1(
 struct xfs_iext_node **VAR_4,
 int *VAR_5,
 int *VAR_6)
{
 struct xfs_iext_node *VAR_7 = *VAR_4;
 struct xfs_iext_node *VAR_8 = FUNC_0(VAR_2, VAR_1);
 const int VAR_9 = VAR_0 / 2;
 int VAR_10 = VAR_9 + (VAR_0 & 1);
 int VAR_11 = 0;


 if (*VAR_5 == VAR_0) {
  *VAR_4 = VAR_8;
  *VAR_5 = 0;
  *VAR_6 = 0;
  goto done;
 }


 for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++) {
  VAR_8->keys[VAR_11] = VAR_7->keys[VAR_10 + VAR_11];
  VAR_8->ptrs[VAR_11] = VAR_7->ptrs[VAR_10 + VAR_11];

  VAR_7->keys[VAR_10 + VAR_11] = VAR_3;
  VAR_7->ptrs[VAR_10 + VAR_11] = ((void*)0);
 }

 if (*VAR_5 >= VAR_10) {
  *VAR_4 = VAR_8;
  *VAR_5 -= VAR_10;
  *VAR_6 = VAR_9;
 } else {
  *VAR_6 = VAR_10;
 }
done:
 for (; VAR_11 < VAR_0; VAR_11++)
  VAR_8->keys[VAR_11] = VAR_3;
 return VAR_8;
}
