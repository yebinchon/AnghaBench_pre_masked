
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int d_sb; } ;
struct autofs_sb_info {int lookup_lock; } ;
struct autofs_info {int expiring; int active; } ;


 struct autofs_info* FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct autofs_info*) ;
 struct autofs_sb_info* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,struct dentry*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct dentry *VAR_0)
{
 struct autofs_info *VAR_1 = FUNC_0(VAR_0);
 struct autofs_sb_info *VAR_2 = FUNC_2(VAR_0->d_sb);

 FUNC_5("releasing %p\n", VAR_0);

 if (!VAR_1)
  return;

 if (VAR_2) {
  FUNC_6(&VAR_2->lookup_lock);
  if (!FUNC_4(&VAR_1->active))
   FUNC_3(&VAR_1->active);
  if (!FUNC_4(&VAR_1->expiring))
   FUNC_3(&VAR_1->expiring);
  FUNC_7(&VAR_2->lookup_lock);
 }

 FUNC_1(VAR_1);
}
