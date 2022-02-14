
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pktq {int num_prec; } ;


 int FUNC_0 (struct pktq*,int,int,int (*) (struct sk_buff*,void*),void*) ;

void FUNC_1(struct pktq *VAR_0, bool VAR_1,
        bool (*VAR_2)(struct sk_buff *, void *), void *VAR_3)
{
 int VAR_4;
 for (VAR_4 = 0; VAR_4 < VAR_0->num_prec; VAR_4++)
  FUNC_0(VAR_0, VAR_4, VAR_1, VAR_2, VAR_3);
}
