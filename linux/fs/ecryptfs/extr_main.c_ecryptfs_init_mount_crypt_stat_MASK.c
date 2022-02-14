
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecryptfs_mount_crypt_stat {int flags; int global_auth_tok_list_mutex; int global_auth_tok_list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (void*,int ,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(
 struct ecryptfs_mount_crypt_stat *VAR_1)
{
 FUNC_1((void *)VAR_1, 0,
        sizeof(struct ecryptfs_mount_crypt_stat));
 FUNC_0(&VAR_1->global_auth_tok_list);
 FUNC_2(&VAR_1->global_auth_tok_list_mutex);
 VAR_1->flags |= VAR_0;
}
