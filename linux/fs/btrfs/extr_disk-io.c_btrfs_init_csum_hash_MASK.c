
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct crypto_shash {int dummy; } ;
struct btrfs_fs_info {struct crypto_shash* csum_shash; } ;


 scalar_t__ FUNC_0 (struct crypto_shash*) ;
 int FUNC_1 (struct crypto_shash*) ;
 int FUNC_2 (struct btrfs_fs_info*,char*,char const*) ;
 char* FUNC_3 (int ) ;
 struct crypto_shash* FUNC_4 (char const*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct btrfs_fs_info *VAR_0, u16 VAR_1)
{
 struct crypto_shash *VAR_2;
 const char *VAR_3 = FUNC_3(VAR_1);

 VAR_2 = FUNC_4(VAR_3, 0, 0);

 if (FUNC_0(VAR_2)) {
  FUNC_2(VAR_0, "error allocating %s hash for checksum",
     VAR_3);
  return FUNC_1(VAR_2);
 }

 VAR_0->csum_shash = VAR_2;

 return 0;
}
