
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecryptfs_key_sig {char* keysig; int crypt_stat_list; } ;
struct ecryptfs_crypt_stat {int keysig_list; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ecryptfs_key_sig* FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (char*,char*,size_t) ;

int FUNC_3(struct ecryptfs_crypt_stat *VAR_4, char *VAR_5)
{
 struct ecryptfs_key_sig *VAR_6;

 VAR_6 = FUNC_0(VAR_3, VAR_2);
 if (!VAR_6)
  return -VAR_1;

 FUNC_2(VAR_6->keysig, VAR_5, VAR_0);
 VAR_6->keysig[VAR_0] = '\0';

 FUNC_1(&VAR_6->crypt_stat_list, &VAR_4->keysig_list);

 return 0;
}
