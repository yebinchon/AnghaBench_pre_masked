
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gsm_mux {scalar_t__ ftype; int mtu; int mru; int n2; int t2; int t1; int initiator; int encoding; int adaption; } ;
struct gsm_config {int i; scalar_t__ k; int mtu; int mru; int n2; scalar_t__ t3; int t2; int t1; int initiator; int encapsulation; int adaption; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct gsm_config*,int ,int) ;
 int FUNC_1 (char*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_2(struct gsm_mux *VAR_1,
       struct gsm_config *VAR_2)
{
 FUNC_0(VAR_2, 0, sizeof(*VAR_2));
 VAR_2->adaption = VAR_1->adaption;
 VAR_2->encapsulation = VAR_1->encoding;
 VAR_2->initiator = VAR_1->initiator;
 VAR_2->t1 = VAR_1->t1;
 VAR_2->t2 = VAR_1->t2;
 VAR_2->t3 = 0;
 VAR_2->n2 = VAR_1->n2;
 if (VAR_1->ftype == VAR_0)
  VAR_2->i = 1;
 else
  VAR_2->i = 2;
 FUNC_1("Ftype %d i %d\n", VAR_1->ftype, VAR_2->i);
 VAR_2->mru = VAR_1->mru;
 VAR_2->mtu = VAR_1->mtu;
 VAR_2->k = 0;
}
