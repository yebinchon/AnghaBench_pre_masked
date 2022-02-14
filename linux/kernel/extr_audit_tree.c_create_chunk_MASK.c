
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct fsnotify_mark {int dummy; } ;
struct audit_tree {int same_root; struct audit_chunk* root; int chunks; scalar_t__ goner; } ;
struct audit_chunk {int key; int trees; TYPE_1__* owners; } ;
struct TYPE_4__ {int mark_mutex; } ;
struct TYPE_3__ {unsigned int index; int list; struct audit_tree* owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct audit_chunk* FUNC_0 (int) ;
 struct fsnotify_mark* FUNC_1 () ;
 TYPE_2__* VAR_2 ;
 scalar_t__ FUNC_2 (struct fsnotify_mark*,struct inode*,int ) ;
 int FUNC_3 (struct fsnotify_mark*) ;
 int FUNC_4 (struct fsnotify_mark*) ;
 int FUNC_5 (struct fsnotify_mark*) ;
 int FUNC_6 (struct audit_tree*) ;
 int VAR_3 ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct audit_chunk*) ;
 int FUNC_9 (struct audit_chunk*) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct fsnotify_mark*,struct audit_chunk*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static int FUNC_15(struct inode *VAR_4, struct audit_tree *VAR_5)
{
 struct fsnotify_mark *VAR_6;
 struct audit_chunk *VAR_7 = FUNC_0(1);

 if (!VAR_7) {
  FUNC_11(&VAR_2->mark_mutex);
  return -VAR_0;
 }

 VAR_6 = FUNC_1();
 if (!VAR_6) {
  FUNC_11(&VAR_2->mark_mutex);
  FUNC_9(VAR_7);
  return -VAR_0;
 }

 if (FUNC_2(VAR_6, VAR_4, 0)) {
  FUNC_11(&VAR_2->mark_mutex);
  FUNC_5(VAR_6);
  FUNC_9(VAR_7);
  return -VAR_1;
 }

 FUNC_13(&VAR_3);
 if (VAR_5->goner) {
  FUNC_14(&VAR_3);
  FUNC_3(VAR_6);
  FUNC_11(&VAR_2->mark_mutex);
  FUNC_4(VAR_6);
  FUNC_5(VAR_6);
  FUNC_9(VAR_7);
  return 0;
 }
 FUNC_12(VAR_6, VAR_7);
 VAR_7->owners[0].index = (1U << 31);
 VAR_7->owners[0].owner = VAR_5;
 FUNC_6(VAR_5);
 FUNC_10(&VAR_7->owners[0].list, &VAR_5->chunks);
 if (!VAR_5->root) {
  VAR_5->root = VAR_7;
  FUNC_10(&VAR_5->same_root, &VAR_7->trees);
 }
 VAR_7->key = FUNC_7(VAR_4);




 FUNC_8(VAR_7);
 FUNC_14(&VAR_3);
 FUNC_11(&VAR_2->mark_mutex);





 FUNC_5(VAR_6);
 return 0;
}
