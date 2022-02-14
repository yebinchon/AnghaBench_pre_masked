
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path {struct dentry* dentry; } ;
struct ovl_dir_cache {scalar_t__ version; int entries; int root; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 struct ovl_dir_cache* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct ovl_dir_cache*) ;
 struct ovl_dir_cache* FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct dentry*) ;
 scalar_t__ FUNC_8 (struct dentry*) ;
 struct ovl_dir_cache* FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct path*,int *,int *) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (struct dentry*) ;
 int FUNC_14 (int ,struct ovl_dir_cache*) ;
 int FUNC_15 (struct dentry*) ;

__attribute__((used)) static struct ovl_dir_cache *FUNC_16(struct path *VAR_4)
{
 int VAR_5;
 struct dentry *VAR_6 = VAR_4->dentry;
 struct ovl_dir_cache *VAR_7;

 VAR_7 = FUNC_9(FUNC_1(VAR_6));
 if (VAR_7 && FUNC_8(VAR_6) == VAR_7->version)
  return VAR_7;


 FUNC_10(FUNC_1(VAR_6));
 FUNC_14(FUNC_1(VAR_6), ((void*)0));

 VAR_7 = FUNC_3(sizeof(struct ovl_dir_cache), VAR_1);
 if (!VAR_7)
  return FUNC_0(-VAR_0);

 VAR_5 = FUNC_11(VAR_4, &VAR_7->entries, &VAR_7->root);
 if (VAR_5) {
  FUNC_5(&VAR_7->entries);
  FUNC_2(VAR_7);
  return FUNC_0(VAR_5);
 }
 if (FUNC_4(&VAR_7->entries)) {




  if (!FUNC_15(VAR_6)) {
   FUNC_12(FUNC_7(VAR_6),
        VAR_3);
   FUNC_13(VAR_6);
  }
  FUNC_6(VAR_2, FUNC_1(VAR_6));
  FUNC_2(VAR_7);
  return ((void*)0);
 }

 VAR_7->version = FUNC_8(VAR_6);
 FUNC_14(FUNC_1(VAR_6), VAR_7);

 return VAR_7;
}
