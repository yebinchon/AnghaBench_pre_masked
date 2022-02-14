
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dfs_info3_param {int dummy; } ;
struct dfs_cache_vol_info {int dummy; } ;
struct dfs_cache_entry {TYPE_2__* server; } ;
struct dfs_cache {int dc_nlsc; } ;
struct cifs_tcon {char* dfs_path; int remap; struct dfs_cache_entry* ses; } ;
struct cifs_ses {TYPE_2__* server; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* get_dfs_refer ) (unsigned int,struct dfs_cache_entry*,char*,struct dfs_info3_param**,int*,int ,int ) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dfs_cache_entry*) ;
 int FUNC_1 (struct dfs_cache_entry*) ;
 struct dfs_cache_entry* FUNC_2 (char*,struct dfs_info3_param*,int) ;
 int FUNC_3 (struct dfs_cache_entry*) ;
 int FUNC_4 (struct dfs_cache_entry*) ;
 int VAR_1 ;
 int FUNC_5 (struct dfs_info3_param*,int) ;
 struct dfs_cache_entry* FUNC_6 (char*,unsigned int*) ;
 struct dfs_cache_entry* FUNC_7 (struct dfs_cache_vol_info*,struct cifs_tcon*,char*) ;
 int FUNC_8 (struct dfs_info3_param*,int) ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (unsigned int) ;
 int FUNC_11 (char*,char**) ;
 unsigned int FUNC_12 () ;
 scalar_t__ FUNC_13 (char*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (unsigned int,struct dfs_cache_entry*,char*,struct dfs_info3_param**,int*,int ,int ) ;
 scalar_t__ FUNC_17 (int) ;

__attribute__((used)) static void FUNC_18(struct dfs_cache *VAR_2, struct dfs_cache_vol_info *VAR_3,
       struct cifs_tcon *VAR_4)
{
 int VAR_5 = 0;
 unsigned int VAR_6;
 char *VAR_7, *VAR_8;
 unsigned int VAR_9;
 struct dfs_cache_entry *VAR_10;
 struct dfs_info3_param *VAR_11 = ((void*)0);
 int VAR_12 = 0;
 struct cifs_ses *VAR_13 = ((void*)0), *VAR_14;

 VAR_6 = FUNC_12();

 VAR_7 = VAR_4->dfs_path + 1;

 VAR_5 = FUNC_11(VAR_7, &VAR_8);
 if (VAR_5)
  goto out;

 FUNC_14(&VAR_1);
 VAR_10 = FUNC_6(VAR_8, &VAR_9);
 FUNC_15(&VAR_1);

 if (FUNC_0(VAR_10)) {
  VAR_5 = FUNC_1(VAR_10);
  goto out;
 }

 if (!FUNC_3(VAR_10))
  goto out;


 if (FUNC_13(VAR_8)) {
  VAR_14 = VAR_13 = FUNC_7(VAR_3, VAR_4, VAR_8);
  if (FUNC_0(VAR_14)) {
   VAR_5 = FUNC_1(VAR_14);
   VAR_13 = ((void*)0);
   goto out;
  }
 } else {
  VAR_14 = VAR_4->ses;
 }

 if (FUNC_17(!VAR_14->server->ops->get_dfs_refer)) {
  VAR_5 = -VAR_0;
 } else {
  VAR_5 = VAR_14->server->ops->get_dfs_refer(VAR_6, VAR_14, VAR_7, &VAR_11,
           &VAR_12, VAR_2->dc_nlsc,
           VAR_4->remap);
  if (!VAR_5) {
   FUNC_14(&VAR_1);
   VAR_10 = FUNC_2(VAR_8, VAR_11, VAR_12);
   FUNC_15(&VAR_1);
   FUNC_5(VAR_11, VAR_12);
   FUNC_8(VAR_11, VAR_12);
   if (FUNC_0(VAR_10))
    VAR_5 = FUNC_1(VAR_10);
  }
 }

out:
 if (VAR_13)
  FUNC_4(VAR_13);

 FUNC_10(VAR_6);
 FUNC_9(VAR_7, VAR_8);
}
