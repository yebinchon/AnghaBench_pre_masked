
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecryptfs_crypt_stat {int key_size; int key; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ecryptfs_crypt_stat*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct ecryptfs_crypt_stat *VAR_3)
{
 FUNC_3(VAR_3->key, VAR_3->key_size);
 VAR_3->flags |= VAR_0;
 FUNC_0(VAR_3);
 if (FUNC_4(VAR_2 > 0)) {
  FUNC_2(VAR_1, "Generated new session key:\n");
  FUNC_1(VAR_3->key,
      VAR_3->key_size);
 }
}
