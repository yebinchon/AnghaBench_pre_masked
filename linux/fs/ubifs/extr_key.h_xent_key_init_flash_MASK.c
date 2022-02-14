
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union ubifs_key {void** j32; } ;
typedef int uint32_t ;
struct ubifs_info {int (* key_hash ) (int ,int ) ;} ;
struct fscrypt_name {int dummy; } ;
typedef int ino_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct fscrypt_name const*) ;
 int FUNC_2 (struct fscrypt_name const*) ;
 int FUNC_3 (void*,int ,scalar_t__) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct ubifs_info const*,int) ;

__attribute__((used)) static inline void FUNC_6(const struct ubifs_info *VAR_4, void *VAR_5,
           ino_t VAR_6, const struct fscrypt_name *VAR_7)
{
 union ubifs_key *VAR_8 = VAR_5;
 uint32_t VAR_9 = VAR_4->key_hash(FUNC_2(VAR_7), FUNC_1(VAR_7));

 FUNC_5(VAR_4, !(VAR_9 & ~VAR_2));
 VAR_8->j32[0] = FUNC_0(VAR_6);
 VAR_8->j32[1] = FUNC_0(VAR_9 |
      (VAR_3 << VAR_1));
 FUNC_3(VAR_5 + 8, 0, VAR_0 - 8);
}
