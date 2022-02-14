
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gsm_mux {scalar_t__ t1; scalar_t__ t2; int encoding; int adaption; int initiator; int mru; int mtu; int n2; int * dlci; int ftype; } ;
struct gsm_config {int adaption; int mru; int mtu; int n2; int encapsulation; int initiator; int i; scalar_t__ t1; scalar_t__ t2; scalar_t__ k; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct gsm_mux*) ;
 int FUNC_1 (struct gsm_mux*) ;
 int FUNC_2 (struct gsm_mux*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct gsm_mux *VAR_6, struct gsm_config *VAR_7)
{
 int VAR_8 = 0;
 int VAR_9 = 0;


 if ((VAR_7->adaption != 1 && VAR_7->adaption != 2) || VAR_7->k)
  return -VAR_1;

 if (VAR_7->mru > VAR_2 || VAR_7->mtu > VAR_3 || VAR_7->mru < 8 || VAR_7->mtu < 8)
  return -VAR_0;
 if (VAR_7->n2 < 3)
  return -VAR_0;
 if (VAR_7->encapsulation > 1)
  return -VAR_0;
 if (VAR_7->initiator > 1)
  return -VAR_0;
 if (VAR_7->i == 0 || VAR_7->i > 2)
  return -VAR_0;





 if (VAR_7->t1 != 0 && VAR_7->t1 != VAR_6->t1)
  VAR_9 = 1;
 if (VAR_7->t2 != 0 && VAR_7->t2 != VAR_6->t2)
  VAR_9 = 1;
 if (VAR_7->encapsulation != VAR_6->encoding)
  VAR_9 = 1;
 if (VAR_7->adaption != VAR_6->adaption)
  VAR_9 = 1;

 if (VAR_7->initiator != VAR_6->initiator)
  VAR_8 = 1;
 if (VAR_7->mru != VAR_6->mru)
  VAR_9 = 1;
 if (VAR_7->mtu != VAR_6->mtu)
  VAR_9 = 1;






 if (VAR_8 || VAR_9) {
  int VAR_10;

  VAR_10 = FUNC_2(VAR_6);

  if (VAR_10)
   return VAR_10;
 }
 if (VAR_9)
  FUNC_1(VAR_6);

 VAR_6->initiator = VAR_7->initiator;
 VAR_6->mru = VAR_7->mru;
 VAR_6->mtu = VAR_7->mtu;
 VAR_6->encoding = VAR_7->encapsulation;
 VAR_6->adaption = VAR_7->adaption;
 VAR_6->n2 = VAR_7->n2;

 if (VAR_7->i == 1)
  VAR_6->ftype = VAR_5;
 else if (VAR_7->i == 2)
  VAR_6->ftype = VAR_4;

 if (VAR_7->t1)
  VAR_6->t1 = VAR_7->t1;
 if (VAR_7->t2)
  VAR_6->t2 = VAR_7->t2;





 if (VAR_9)
  FUNC_0(VAR_6);
 if (VAR_6->initiator && VAR_8)
  FUNC_3(VAR_6->dlci[0]);
 return 0;
}
