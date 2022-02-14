
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct super_block {int dummy; } ;
struct TYPE_3__ {struct fscrypt_master_key** data; } ;
struct key {TYPE_1__ payload; } ;
struct fscrypt_master_key {int dummy; } ;
struct TYPE_4__ {int identifier; } ;
struct fscrypt_key_specifier {TYPE_2__ u; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct key*) ;
 int FUNC_1 (struct key*) ;
 scalar_t__ FUNC_2 (int ) ;
 struct key* FUNC_3 (struct fscrypt_master_key*) ;
 struct key* FUNC_4 (struct super_block*,struct fscrypt_key_specifier*) ;
 int FUNC_5 (struct key*) ;
 int FUNC_6 (int ,int const*,int ) ;

int FUNC_7(struct super_block *VAR_4,
        const u8 VAR_5[VAR_2])
{
 struct fscrypt_key_specifier VAR_6;
 struct key *VAR_7, *VAR_8;
 struct fscrypt_master_key *VAR_9;
 int VAR_10;

 VAR_6.type = VAR_3;
 FUNC_6(VAR_6.u.identifier, VAR_5, VAR_2);

 VAR_7 = FUNC_4(VAR_4, &VAR_6);
 if (FUNC_0(VAR_7)) {
  VAR_10 = FUNC_1(VAR_7);
  goto out;
 }
 VAR_9 = VAR_7->payload.data[0];
 VAR_8 = FUNC_3(VAR_9);
 if (FUNC_0(VAR_8)) {
  VAR_10 = FUNC_1(VAR_8);
 } else {
  FUNC_5(VAR_8);
  VAR_10 = 0;
 }
 FUNC_5(VAR_7);
out:
 if (VAR_10 == -VAR_1 && FUNC_2(VAR_0))
  VAR_10 = 0;
 return VAR_10;
}
