
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_fileoff_t ;
struct xfs_ifork {int dummy; } ;
struct xfs_iext_leaf {struct xfs_iext_leaf* prev; struct xfs_iext_leaf* next; int * recs; } ;
struct xfs_iext_cursor {int pos; struct xfs_iext_leaf* leaf; } ;


 int VAR_0 ;
 int FUNC_0 (struct xfs_iext_leaf*,int ) ;
 int FUNC_1 (struct xfs_ifork*,struct xfs_iext_leaf*,int ) ;
 int FUNC_2 (struct xfs_ifork*,int ,struct xfs_iext_leaf*) ;

__attribute__((used)) static void
FUNC_3(
 struct xfs_ifork *VAR_1,
 struct xfs_iext_cursor *VAR_2,
 struct xfs_iext_leaf *VAR_3,
 xfs_fileoff_t VAR_4,
 int VAR_5)
{





 if (VAR_5 == 0)
  goto remove_node;

 if (VAR_3->prev) {
  int VAR_6 = FUNC_1(VAR_1, VAR_3->prev, 0), VAR_7;

  if (VAR_6 + VAR_5 <= VAR_0) {
   for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++)
    VAR_3->prev->recs[VAR_6 + VAR_7] = VAR_3->recs[VAR_7];

   if (VAR_2->leaf == VAR_3) {
    VAR_2->leaf = VAR_3->prev;
    VAR_2->pos += VAR_6;
   }
   goto remove_node;
  }
 }

 if (VAR_3->next) {
  int VAR_8 = FUNC_1(VAR_1, VAR_3->next, 0), VAR_9;

  if (VAR_5 + VAR_8 <= VAR_0) {





   for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
    VAR_3->recs[VAR_5 + VAR_9] =
     VAR_3->next->recs[VAR_9];
   }

   if (VAR_2->leaf == VAR_3->next) {
    VAR_2->leaf = VAR_3;
    VAR_2->pos += VAR_5;
   }

   VAR_4 = FUNC_0(VAR_3->next, 0);
   VAR_3 = VAR_3->next;
   goto remove_node;
  }
 }

 return;
remove_node:
 if (VAR_3->prev)
  VAR_3->prev->next = VAR_3->next;
 if (VAR_3->next)
  VAR_3->next->prev = VAR_3->prev;
 FUNC_2(VAR_1, VAR_4, VAR_3);
}
