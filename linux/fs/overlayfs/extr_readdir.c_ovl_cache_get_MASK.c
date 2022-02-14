
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ovl_dir_cache {scalar_t__ version; int refcount; int entries; int root; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 struct ovl_dir_cache* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct ovl_dir_cache*) ;
 struct ovl_dir_cache* FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (struct dentry*) ;
 struct ovl_dir_cache* FUNC_8 (int ) ;
 int FUNC_9 (struct dentry*,int *,int *) ;
 int FUNC_10 (int ,struct ovl_dir_cache*) ;

__attribute__((used)) static struct ovl_dir_cache *FUNC_11(struct dentry *VAR_3)
{
 int VAR_4;
 struct ovl_dir_cache *VAR_5;

 VAR_5 = FUNC_8(FUNC_3(VAR_3));
 if (VAR_5 && FUNC_7(VAR_3) == VAR_5->version) {
  FUNC_2(!VAR_5->refcount);
  VAR_5->refcount++;
  return VAR_5;
 }
 FUNC_10(FUNC_3(VAR_3), ((void*)0));

 VAR_5 = FUNC_5(sizeof(struct ovl_dir_cache), VAR_1);
 if (!VAR_5)
  return FUNC_0(-VAR_0);

 VAR_5->refcount = 1;
 FUNC_1(&VAR_5->entries);
 VAR_5->root = VAR_2;

 VAR_4 = FUNC_9(VAR_3, &VAR_5->entries, &VAR_5->root);
 if (VAR_4) {
  FUNC_6(&VAR_5->entries);
  FUNC_4(VAR_5);
  return FUNC_0(VAR_4);
 }

 VAR_5->version = FUNC_7(VAR_3);
 FUNC_10(FUNC_3(VAR_3), VAR_5);

 return VAR_5;
}
