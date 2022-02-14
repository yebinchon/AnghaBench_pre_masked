
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dfs_info3_param {int dummy; } ;
struct dfs_cache_entry {scalar_t__ ce_numtgts; TYPE_1__* ce_tgthint; } ;
struct TYPE_2__ {char* t_name; } ;


 int VAR_0 ;
 struct dfs_cache_entry* FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct dfs_cache_entry*) ;
 int FUNC_2 (struct dfs_info3_param const*,int,struct dfs_cache_entry*,char*) ;
 struct dfs_cache_entry* FUNC_3 (char const*,unsigned int*) ;
 int FUNC_4 (struct dfs_cache_entry*) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (char*,int ,int ) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static inline struct dfs_cache_entry *
FUNC_8(const char *VAR_2, const struct dfs_info3_param *VAR_3,
       int VAR_4)
{
 int VAR_5;
 unsigned int VAR_6;
 struct dfs_cache_entry *VAR_7;
 char *VAR_8, *VAR_9 = ((void*)0);

 VAR_7 = FUNC_3(VAR_2, &VAR_6);
 if (FUNC_1(VAR_7))
  return VAR_7;

 if (VAR_7->ce_tgthint) {
  VAR_8 = VAR_7->ce_tgthint->t_name;
  VAR_9 = FUNC_6(VAR_8, FUNC_7(VAR_8), VAR_1);
  if (!VAR_9)
   return FUNC_0(-VAR_0);
 }

 FUNC_4(VAR_7);
 VAR_7->ce_numtgts = 0;

 VAR_5 = FUNC_2(VAR_3, VAR_4, VAR_7, VAR_9);
 FUNC_5(VAR_9);

 if (VAR_5)
  VAR_7 = FUNC_0(VAR_5);

 return VAR_7;
}
