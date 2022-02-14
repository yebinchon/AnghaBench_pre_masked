
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union ubifs_key {int* u32; } ;
typedef int uint32_t ;
struct ubifs_info {int (* key_hash ) (int ,int ) ;} ;
struct fscrypt_name {int dummy; } ;
typedef int ino_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fscrypt_name const*) ;
 int FUNC_1 (struct fscrypt_name const*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct ubifs_info const*,int) ;

__attribute__((used)) static inline void FUNC_4(const struct ubifs_info *VAR_3,
     union ubifs_key *VAR_4, ino_t VAR_5,
     const struct fscrypt_name *VAR_6)
{
 uint32_t VAR_7 = VAR_3->key_hash(FUNC_1(VAR_6), FUNC_0(VAR_6));

 FUNC_3(VAR_3, !(VAR_7 & ~VAR_1));
 VAR_4->u32[0] = VAR_5;
 VAR_4->u32[1] = VAR_7 | (VAR_2 << VAR_0);
}
