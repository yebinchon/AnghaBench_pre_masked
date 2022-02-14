
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ovl_dir_file {int is_real; int * cursor; struct ovl_dir_cache* cache; } ;
struct ovl_dir_cache {scalar_t__ version; } ;
struct TYPE_2__ {struct dentry* dentry; } ;
struct file {TYPE_1__ f_path; struct ovl_dir_file* private_data; } ;
struct dentry {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct ovl_dir_file*,struct dentry*) ;
 scalar_t__ FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct dentry*) ;

__attribute__((used)) static void FUNC_4(struct file *VAR_0)
{
 struct ovl_dir_file *VAR_1 = VAR_0->private_data;
 struct ovl_dir_cache *VAR_2 = VAR_1->cache;
 struct dentry *VAR_3 = VAR_0->f_path.dentry;
 bool VAR_4;

 if (VAR_2 && FUNC_2(VAR_3) != VAR_2->version) {
  FUNC_1(VAR_1, VAR_3);
  VAR_1->cache = ((void*)0);
  VAR_1->cursor = ((void*)0);
 }
 VAR_4 = FUNC_3(VAR_3);
 if (VAR_1->is_real != VAR_4) {

  if (FUNC_0(VAR_4))
   return;
  VAR_1->is_real = 0;
 }
}
