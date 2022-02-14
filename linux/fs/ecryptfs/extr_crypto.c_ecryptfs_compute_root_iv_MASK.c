
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecryptfs_crypt_stat {int iv_bytes; int flags; int root_iv; int key_size; int key; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,struct ecryptfs_crypt_stat*,int ,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ,int ,int) ;

int FUNC_5(struct ecryptfs_crypt_stat *VAR_5)
{
 int VAR_6 = 0;
 char VAR_7[VAR_4];

 FUNC_0(VAR_5->iv_bytes > VAR_4);
 FUNC_0(VAR_5->iv_bytes <= 0);
 if (!(VAR_5->flags & VAR_0)) {
  VAR_6 = -VAR_2;
  FUNC_2(VAR_3, "Session key not valid; "
    "cannot generate root IV\n");
  goto out;
 }
 VAR_6 = FUNC_1(VAR_7, VAR_5, VAR_5->key,
        VAR_5->key_size);
 if (VAR_6) {
  FUNC_2(VAR_3, "Error attempting to compute "
    "MD5 while generating root IV\n");
  goto out;
 }
 FUNC_3(VAR_5->root_iv, VAR_7, VAR_5->iv_bytes);
out:
 if (VAR_6) {
  FUNC_4(VAR_5->root_iv, 0, VAR_5->iv_bytes);
  VAR_5->flags |= VAR_1;
 }
 return VAR_6;
}
