
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ecryptfs_mount_crypt_stat {int global_auth_tok_list_mutex; int global_auth_tok_list; } ;
struct ecryptfs_global_auth_tok {char* sig; int mount_crypt_stat_list; int flags; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ecryptfs_global_auth_tok* FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (char*,char*,size_t) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int
FUNC_5(struct ecryptfs_mount_crypt_stat *VAR_4,
        char *VAR_5, u32 VAR_6)
{
 struct ecryptfs_global_auth_tok *VAR_7;

 VAR_7 = FUNC_0(VAR_3,
     VAR_2);
 if (!VAR_7)
  return -VAR_1;

 FUNC_2(VAR_7->sig, VAR_5, VAR_0);
 VAR_7->flags = VAR_6;
 VAR_7->sig[VAR_0] = '\0';
 FUNC_3(&VAR_4->global_auth_tok_list_mutex);
 FUNC_1(&VAR_7->mount_crypt_stat_list,
   &VAR_4->global_auth_tok_list);
 FUNC_4(&VAR_4->global_auth_tok_list_mutex);
 return 0;
}
