
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_dir_entry {int mode; int low_ino; int namelen; int name; } ;
struct file {int dummy; } ;
struct dir_context {int pos; } ;


 int FUNC_0 (struct dir_context*,int ,int ,int ,int) ;
 int FUNC_1 (struct file*,struct dir_context*) ;
 int FUNC_2 (struct proc_dir_entry*) ;
 int FUNC_3 (struct proc_dir_entry*) ;
 struct proc_dir_entry* FUNC_4 (struct proc_dir_entry*) ;
 struct proc_dir_entry* FUNC_5 (struct proc_dir_entry*) ;
 int VAR_0 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct file *VAR_1, struct dir_context *VAR_2,
      struct proc_dir_entry *VAR_3)
{
 int VAR_4;

 if (!FUNC_1(VAR_1, VAR_2))
  return 0;

 VAR_4 = VAR_2->pos - 2;
 FUNC_6(&VAR_0);
 VAR_3 = FUNC_4(VAR_3);
 for (;;) {
  if (!VAR_3) {
   FUNC_7(&VAR_0);
   return 0;
  }
  if (!VAR_4)
   break;
  VAR_3 = FUNC_5(VAR_3);
  VAR_4--;
 }

 do {
  struct proc_dir_entry *VAR_5;
  FUNC_2(VAR_3);
  FUNC_7(&VAR_0);
  if (!FUNC_0(VAR_2, VAR_3->name, VAR_3->namelen,
       VAR_3->low_ino, VAR_3->mode >> 12)) {
   FUNC_3(VAR_3);
   return 0;
  }
  VAR_2->pos++;
  FUNC_6(&VAR_0);
  VAR_5 = FUNC_5(VAR_3);
  FUNC_3(VAR_3);
  VAR_3 = VAR_5;
 } while (VAR_3);
 FUNC_7(&VAR_0);
 return 1;
}
