
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppp_mppe_state {int* sha1_digest; int keylen; int* session_key; int arc4; } ;


 int FUNC_0 (int *,int*,int*,int) ;
 int FUNC_1 (int *,int*,int) ;
 int FUNC_2 (struct ppp_mppe_state*) ;
 int FUNC_3 (int*,int*,int) ;

__attribute__((used)) static void FUNC_4(struct ppp_mppe_state * VAR_0, int VAR_1)
{
 FUNC_2(VAR_0);
 if (!VAR_1) {
  FUNC_1(&VAR_0->arc4, VAR_0->sha1_digest, VAR_0->keylen);
  FUNC_0(&VAR_0->arc4, VAR_0->session_key, VAR_0->sha1_digest,
      VAR_0->keylen);
 } else {
  FUNC_3(VAR_0->session_key, VAR_0->sha1_digest, VAR_0->keylen);
 }
 if (VAR_0->keylen == 8) {

  VAR_0->session_key[0] = 0xd1;
  VAR_0->session_key[1] = 0x26;
  VAR_0->session_key[2] = 0x9e;
 }
 FUNC_1(&VAR_0->arc4, VAR_0->session_key, VAR_0->keylen);
}
