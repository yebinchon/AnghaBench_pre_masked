
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gsm_mux {int adaption; int encoding; int mru; int mtu; int dead; int ftype; int n2; int t2; int t1; int tx_list; int ref; int mutex; int lock; struct gsm_mux* buf; int * txframe; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct gsm_mux*) ;
 void* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 struct gsm_mux* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static struct gsm_mux *FUNC_7(void)
{
 struct gsm_mux *VAR_6 = FUNC_4(sizeof(struct gsm_mux), VAR_0);
 if (VAR_6 == ((void*)0))
  return ((void*)0);
 VAR_6->buf = FUNC_2(VAR_1 + 1, VAR_0);
 if (VAR_6->buf == ((void*)0)) {
  FUNC_1(VAR_6);
  return ((void*)0);
 }
 VAR_6->txframe = FUNC_2(2 * VAR_1 + 2, VAR_0);
 if (VAR_6->txframe == ((void*)0)) {
  FUNC_1(VAR_6->buf);
  FUNC_1(VAR_6);
  return ((void*)0);
 }
 FUNC_6(&VAR_6->lock);
 FUNC_5(&VAR_6->mutex);
 FUNC_3(&VAR_6->ref);
 FUNC_0(&VAR_6->tx_list);

 VAR_6->t1 = VAR_3;
 VAR_6->t2 = VAR_4;
 VAR_6->n2 = VAR_2;
 VAR_6->ftype = VAR_5;
 VAR_6->adaption = 1;
 VAR_6->encoding = 1;
 VAR_6->mru = 64;
 VAR_6->mtu = 64;
 VAR_6->dead = 1;

 return VAR_6;
}
