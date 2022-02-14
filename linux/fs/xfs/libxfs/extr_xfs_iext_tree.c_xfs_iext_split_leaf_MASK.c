
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_iext_leaf {struct xfs_iext_leaf* next; struct xfs_iext_leaf* prev; int * recs; } ;
struct xfs_iext_cursor {int pos; struct xfs_iext_leaf* leaf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct xfs_iext_leaf* FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static struct xfs_iext_leaf *
FUNC_2(
 struct xfs_iext_cursor *VAR_3,
 int *VAR_4)
{
 struct xfs_iext_leaf *VAR_5 = VAR_3->leaf;
 struct xfs_iext_leaf *VAR_6 = FUNC_0(VAR_1, VAR_0);
 const int VAR_7 = VAR_2 / 2;
 int VAR_8 = VAR_7 + (VAR_2 & 1);
 int VAR_9;


 if (VAR_3->pos == VAR_2) {
  VAR_3->leaf = VAR_6;
  VAR_3->pos = 0;
  *VAR_4 = 0;
  goto done;
 }

 for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {
  VAR_6->recs[VAR_9] = VAR_5->recs[VAR_8 + VAR_9];
  FUNC_1(&VAR_5->recs[VAR_8 + VAR_9]);
 }

 if (VAR_3->pos >= VAR_8) {
  VAR_3->leaf = VAR_6;
  VAR_3->pos -= VAR_8;
  *VAR_4 = VAR_7;
 } else {
  *VAR_4 = VAR_8;
 }
done:
 if (VAR_5->next)
  VAR_5->next->prev = VAR_6;
 VAR_6->next = VAR_5->next;
 VAR_6->prev = VAR_5;
 VAR_5->next = VAR_6;
 return VAR_6;
}
