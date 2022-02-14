
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int iov_len; int iov_base; } ;
struct TYPE_3__ {char* iov_base; int iov_len; } ;
struct derivation {TYPE_2__ context; TYPE_1__ label; } ;
struct derivation_triplet {struct derivation decryption; struct derivation encryption; struct derivation signing; } ;
struct cifs_ses {int preauth_sha_hash; } ;


 int FUNC_0 (struct cifs_ses*,struct derivation_triplet*) ;

int
FUNC_1(struct cifs_ses *VAR_0)

{
 struct derivation_triplet VAR_1;
 struct derivation *VAR_2;

 VAR_2 = &VAR_1.signing;
 VAR_2->label.iov_base = "SMBSigningKey";
 VAR_2->label.iov_len = 14;
 VAR_2->context.iov_base = VAR_0->preauth_sha_hash;
 VAR_2->context.iov_len = 64;

 VAR_2 = &VAR_1.encryption;
 VAR_2->label.iov_base = "SMBC2SCipherKey";
 VAR_2->label.iov_len = 16;
 VAR_2->context.iov_base = VAR_0->preauth_sha_hash;
 VAR_2->context.iov_len = 64;

 VAR_2 = &VAR_1.decryption;
 VAR_2->label.iov_base = "SMBS2CCipherKey";
 VAR_2->label.iov_len = 16;
 VAR_2->context.iov_base = VAR_0->preauth_sha_hash;
 VAR_2->context.iov_len = 64;

 return FUNC_0(VAR_0, &VAR_1);
}
