
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ppp_mppe_state {unsigned char* master_key; unsigned char* session_key; TYPE_1__* sha1; struct ppp_mppe_state* sha1_digest; } ;
struct crypto_shash {int dummy; } ;
struct TYPE_2__ {struct crypto_shash* tfm; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct crypto_shash*) ;
 unsigned int VAR_3 ;
 struct crypto_shash* FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (struct crypto_shash*) ;
 unsigned int FUNC_3 (struct crypto_shash*) ;
 unsigned int FUNC_4 (struct crypto_shash*) ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (struct ppp_mppe_state*) ;
 void* FUNC_6 (unsigned int,int ) ;
 struct ppp_mppe_state* FUNC_7 (int,int ) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (unsigned char*,unsigned char*,int) ;

__attribute__((used)) static void *FUNC_10(unsigned char *VAR_5, int VAR_6)
{
 struct ppp_mppe_state *VAR_7;
 struct crypto_shash *VAR_8;
 unsigned int VAR_9;

 if (VAR_6 != VAR_0 + sizeof(VAR_7->master_key) ||
     VAR_5[0] != VAR_1 || VAR_5[1] != VAR_0 ||
     VAR_4)
  goto out;

 VAR_7 = FUNC_7(sizeof(*VAR_7), VAR_2);
 if (VAR_7 == ((void*)0))
  goto out;


 VAR_8 = FUNC_1("sha1", 0, 0);
 if (FUNC_0(VAR_8))
  goto out_free;

 VAR_7->sha1 = FUNC_6(sizeof(*VAR_7->sha1) +
         FUNC_3(VAR_8),
         VAR_2);
 if (!VAR_7->sha1) {
  FUNC_2(VAR_8);
  goto out_free;
 }
 VAR_7->sha1->tfm = VAR_8;

 VAR_9 = FUNC_4(VAR_8);
 if (VAR_9 < VAR_3)
  goto out_free;

 VAR_7->sha1_digest = FUNC_6(VAR_9, VAR_2);
 if (!VAR_7->sha1_digest)
  goto out_free;


 FUNC_9(VAR_7->master_key, &VAR_5[VAR_0],
        sizeof(VAR_7->master_key));
 FUNC_9(VAR_7->session_key, VAR_7->master_key,
        sizeof(VAR_7->master_key));






 return (void *)VAR_7;

out_free:
 FUNC_5(VAR_7->sha1_digest);
 if (VAR_7->sha1) {
  FUNC_2(VAR_7->sha1->tfm);
  FUNC_8(VAR_7->sha1);
 }
 FUNC_5(VAR_7);
out:
 return ((void*)0);
}
