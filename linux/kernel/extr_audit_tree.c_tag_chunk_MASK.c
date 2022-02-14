
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct node {int index; int list; struct audit_tree* owner; } ;
struct inode {int i_fsnotify_marks; } ;
struct fsnotify_mark {int dummy; } ;
struct audit_tree {int same_root; struct audit_chunk* root; int chunks; scalar_t__ goner; } ;
struct audit_chunk {int count; int trees; struct node* owners; } ;
struct TYPE_3__ {int mark_mutex; } ;


 int VAR_0 ;
 struct audit_chunk* FUNC_0 (int) ;
 int FUNC_1 (struct audit_chunk*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (struct inode*,struct audit_tree*) ;
 struct fsnotify_mark* FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (struct fsnotify_mark*) ;
 int FUNC_5 (struct audit_tree*) ;
 int VAR_2 ;
 int FUNC_6 (struct audit_chunk*) ;
 int FUNC_7 (int *,int *) ;
 struct audit_chunk* FUNC_8 (struct fsnotify_mark*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct audit_chunk*,struct audit_chunk*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct inode *VAR_3, struct audit_tree *VAR_4)
{
 struct fsnotify_mark *VAR_5;
 struct audit_chunk *VAR_6, *VAR_7;
 struct node *VAR_8;
 int VAR_9;

 FUNC_9(&VAR_1->mark_mutex);
 VAR_5 = FUNC_3(&VAR_3->i_fsnotify_marks, VAR_1);
 if (!VAR_5)
  return FUNC_2(VAR_3, VAR_4);







 FUNC_12(&VAR_2);
 VAR_7 = FUNC_8(VAR_5);
 for (VAR_9 = 0; VAR_9 < VAR_7->count; VAR_9++) {
  if (VAR_7->owners[VAR_9].owner == VAR_4) {
   FUNC_13(&VAR_2);
   FUNC_10(&VAR_1->mark_mutex);
   FUNC_4(VAR_5);
   return 0;
  }
 }
 FUNC_13(&VAR_2);

 VAR_6 = FUNC_0(VAR_7->count + 1);
 if (!VAR_6) {
  FUNC_10(&VAR_1->mark_mutex);
  FUNC_4(VAR_5);
  return -VAR_0;
 }

 FUNC_12(&VAR_2);
 if (VAR_4->goner) {
  FUNC_13(&VAR_2);
  FUNC_10(&VAR_1->mark_mutex);
  FUNC_4(VAR_5);
  FUNC_6(VAR_6);
  return 0;
 }
 VAR_8 = &VAR_6->owners[VAR_6->count - 1];
 VAR_8->index = (VAR_6->count - 1) | (1U<<31);
 VAR_8->owner = VAR_4;
 FUNC_5(VAR_4);
 FUNC_7(&VAR_8->list, &VAR_4->chunks);
 if (!VAR_4->root) {
  VAR_4->root = VAR_6;
  FUNC_7(&VAR_4->same_root, &VAR_6->trees);
 }




 FUNC_11(VAR_6, VAR_7);
 FUNC_13(&VAR_2);
 FUNC_10(&VAR_1->mark_mutex);
 FUNC_4(VAR_5);
 FUNC_1(VAR_7);

 return 0;
}
