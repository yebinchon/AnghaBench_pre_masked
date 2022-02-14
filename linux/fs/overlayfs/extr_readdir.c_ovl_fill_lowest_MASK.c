
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ovl_readdir_data {int err; int middle; int root; } ;
struct ovl_cache_entry {int l_node; } ;
typedef int loff_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 struct ovl_cache_entry* FUNC_2 (int ,char const*,int) ;
 struct ovl_cache_entry* FUNC_3 (struct ovl_readdir_data*,char const*,int,int ,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct ovl_readdir_data *VAR_1,
      const char *VAR_2, int VAR_3,
      loff_t VAR_4, u64 VAR_5, unsigned int VAR_6)
{
 struct ovl_cache_entry *VAR_7;

 VAR_7 = FUNC_2(VAR_1->root, VAR_2, VAR_3);
 if (VAR_7) {
  FUNC_1(&VAR_7->l_node, &VAR_1->middle);
 } else {
  VAR_7 = FUNC_3(VAR_1, VAR_2, VAR_3, VAR_5, VAR_6);
  if (VAR_7 == ((void*)0))
   VAR_1->err = -VAR_0;
  else
   FUNC_0(&VAR_7->l_node, &VAR_1->middle);
 }

 return VAR_1->err;
}
