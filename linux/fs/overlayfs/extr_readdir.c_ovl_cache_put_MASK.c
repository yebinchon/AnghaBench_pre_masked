
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ovl_dir_file {struct ovl_dir_cache* cache; } ;
struct ovl_dir_cache {scalar_t__ refcount; int entries; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct ovl_dir_cache*) ;
 int FUNC_3 (int *) ;
 struct ovl_dir_cache* FUNC_4 (int ) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct ovl_dir_file *VAR_0, struct dentry *VAR_1)
{
 struct ovl_dir_cache *VAR_2 = VAR_0->cache;

 FUNC_0(VAR_2->refcount <= 0);
 VAR_2->refcount--;
 if (!VAR_2->refcount) {
  if (FUNC_4(FUNC_1(VAR_1)) == VAR_2)
   FUNC_5(FUNC_1(VAR_1), ((void*)0));

  FUNC_3(&VAR_2->entries);
  FUNC_2(VAR_2);
 }
}
