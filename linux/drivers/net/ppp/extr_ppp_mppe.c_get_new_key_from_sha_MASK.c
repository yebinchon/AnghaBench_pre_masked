
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ppp_mppe_state {int keylen; int sha1_digest; int sha1; int session_key; int master_key; } ;
struct TYPE_2__ {int sha_pad2; int sha_pad1; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_3(struct ppp_mppe_state * VAR_1)
{
 FUNC_1(VAR_1->sha1);
 FUNC_2(VAR_1->sha1, VAR_1->master_key,
       VAR_1->keylen);
 FUNC_2(VAR_1->sha1, VAR_0->sha_pad1,
       sizeof(VAR_0->sha_pad1));
 FUNC_2(VAR_1->sha1, VAR_1->session_key,
       VAR_1->keylen);
 FUNC_2(VAR_1->sha1, VAR_0->sha_pad2,
       sizeof(VAR_0->sha_pad2));
 FUNC_0(VAR_1->sha1, VAR_1->sha1_digest);
}
