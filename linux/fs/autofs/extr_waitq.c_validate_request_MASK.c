
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {int dummy; } ;
struct path {struct dentry* dentry; int mnt; } ;
struct dentry {int d_name; struct dentry* d_parent; } ;
struct autofs_wait_queue {int dummy; } ;
struct autofs_sb_info {int flags; int wq_mutex; } ;
struct autofs_info {int flags; } ;
typedef enum autofs_notify { ____Placeholder_autofs_notify } autofs_notify ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct dentry*) ;
 int VAR_5 ;
 int VAR_6 ;
 struct autofs_info* FUNC_1 (struct dentry*) ;
 struct autofs_wait_queue* FUNC_2 (struct autofs_sb_info*,struct qstr const*) ;
 struct dentry* FUNC_3 (struct dentry*,int *) ;
 scalar_t__ FUNC_4 (struct dentry*) ;
 scalar_t__ FUNC_5 (struct dentry*) ;
 int FUNC_6 (struct dentry*) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (struct path*) ;
 int FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct autofs_wait_queue **VAR_7,
       struct autofs_sb_info *VAR_8,
       const struct qstr *VAR_9,
       const struct path *VAR_10, enum autofs_notify VAR_11)
{
 struct dentry *VAR_12 = VAR_10->dentry;
 struct autofs_wait_queue *VAR_13;
 struct autofs_info *VAR_14;

 if (VAR_8->flags & VAR_1)
  return -VAR_3;


 VAR_13 = FUNC_2(VAR_8, VAR_9);
 if (VAR_13) {
  *VAR_7 = VAR_13;
  return 1;
 }

 *VAR_7 = ((void*)0);


 VAR_14 = FUNC_1(VAR_12);
 if (!VAR_14)
  return 1;





 if (VAR_11 == VAR_6) {







  while (VAR_14->flags & VAR_0) {
   FUNC_8(&VAR_8->wq_mutex);
   FUNC_10(VAR_4/10);
   if (FUNC_7(&VAR_8->wq_mutex))
    return -VAR_2;

   if (VAR_8->flags & VAR_1)
    return -VAR_3;

   VAR_13 = FUNC_2(VAR_8, VAR_9);
   if (VAR_13) {
    *VAR_7 = VAR_13;
    return 1;
   }
  }






  return 0;
 }





 if (VAR_11 == VAR_5) {
  struct dentry *VAR_15 = ((void*)0);
  struct path VAR_16;
  int VAR_17 = 1;
  if (!FUNC_0(VAR_12)) {
   if (FUNC_5(VAR_12) &&
       FUNC_4(VAR_12)) {
    struct dentry *VAR_18 = VAR_12->d_parent;

    VAR_15 = FUNC_3(VAR_18, &VAR_12->d_name);
    if (VAR_15)
     VAR_12 = VAR_15;
   }
  }
  VAR_16.mnt = VAR_10->mnt;
  VAR_16.dentry = VAR_12;
  if (FUNC_9(&VAR_16))
   VAR_17 = 0;

  if (VAR_15)
   FUNC_6(VAR_15);
  return VAR_17;
 }

 return 1;
}
