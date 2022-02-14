
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct qstr {char const* name; int len; } ;
struct proc_dir_entry {int namelen; int * proc_dops; int gid; int uid; int pde_openers; int pde_unload_lock; int refcnt; int subdir; int nlink; int mode; int name; int inline_name; } ;
typedef int nlink_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,char*,...) ;
 scalar_t__ FUNC_2 (struct proc_dir_entry*) ;
 int FUNC_3 (int,int ) ;
 struct proc_dir_entry* FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,char const*,int) ;
 unsigned int FUNC_6 (struct qstr*) ;
 int FUNC_7 (struct proc_dir_entry*) ;
 int VAR_3 ;
 int VAR_4 ;
 struct proc_dir_entry VAR_5 ;
 int FUNC_8 (struct proc_dir_entry*,int ,int ) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char const*) ;
 scalar_t__ FUNC_12 (char const*,struct proc_dir_entry**,char const**) ;

__attribute__((used)) static struct proc_dir_entry *FUNC_13(struct proc_dir_entry **VAR_6,
       const char *VAR_7,
       umode_t VAR_8,
       nlink_t VAR_9)
{
 struct proc_dir_entry *VAR_10 = ((void*)0);
 const char *VAR_11;
 struct qstr VAR_12;

 if (FUNC_12(VAR_7, VAR_6, &VAR_11) != 0)
  goto out;
 VAR_12.name = VAR_11;
 VAR_12.len = FUNC_11(VAR_11);
 if (VAR_12.len == 0 || VAR_12.len >= 256) {
  FUNC_1(1, "name len %u\n", VAR_12.len);
  return ((void*)0);
 }
 if (VAR_12.len == 1 && VAR_11[0] == '.') {
  FUNC_1(1, "name '.'\n");
  return ((void*)0);
 }
 if (VAR_12.len == 2 && VAR_11[0] == '.' && VAR_11[1] == '.') {
  FUNC_1(1, "name '..'\n");
  return ((void*)0);
 }
 if (*VAR_6 == &VAR_5 && FUNC_6(&VAR_12) != ~0U) {
  FUNC_1(1, "create '/proc/%s' by hand\n", VAR_12.name);
  return ((void*)0);
 }
 if (FUNC_2(*VAR_6)) {
  FUNC_1(1, "attempt to add to permanently empty directory");
  return ((void*)0);
 }

 VAR_10 = FUNC_4(VAR_3, VAR_0);
 if (!VAR_10)
  goto out;

 if (VAR_12.len + 1 <= VAR_2) {
  VAR_10->name = VAR_10->inline_name;
 } else {
  VAR_10->name = FUNC_3(VAR_12.len + 1, VAR_0);
  if (!VAR_10->name) {
   FUNC_7(VAR_10);
   return ((void*)0);
  }
 }

 FUNC_5(VAR_10->name, VAR_11, VAR_12.len + 1);
 VAR_10->namelen = VAR_12.len;
 VAR_10->mode = VAR_8;
 VAR_10->nlink = VAR_9;
 VAR_10->subdir = VAR_1;
 FUNC_9(&VAR_10->refcnt, 1);
 FUNC_10(&VAR_10->pde_unload_lock);
 FUNC_0(&VAR_10->pde_openers);
 FUNC_8(VAR_10, (*VAR_6)->uid, (*VAR_6)->gid);

 VAR_10->proc_dops = &VAR_4;

out:
 return VAR_10;
}
