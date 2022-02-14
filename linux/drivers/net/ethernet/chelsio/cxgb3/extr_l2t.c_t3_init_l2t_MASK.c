
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct l2t_data {unsigned int nentries; TYPE_1__* l2tab; int lock; int nfree; TYPE_1__* rover; } ;
struct TYPE_2__ {int idx; int refcnt; int lock; int arpq; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned int) ;
 struct l2t_data* FUNC_2 (int ,int ) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct l2t_data*,int ,unsigned int) ;

struct l2t_data *FUNC_6(unsigned int VAR_3)
{
 struct l2t_data *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(FUNC_5(VAR_4, VAR_2, VAR_3), VAR_0);
 if (!VAR_4)
  return ((void*)0);

 VAR_4->nentries = VAR_3;
 VAR_4->rover = &VAR_4->l2tab[1];
 FUNC_1(&VAR_4->nfree, VAR_3 - 1);
 FUNC_3(&VAR_4->lock);

 for (VAR_5 = 0; VAR_5 < VAR_3; ++VAR_5) {
  VAR_4->l2tab[VAR_5].idx = VAR_5;
  VAR_4->l2tab[VAR_5].state = VAR_1;
  FUNC_0(&VAR_4->l2tab[VAR_5].arpq);
  FUNC_4(&VAR_4->l2tab[VAR_5].lock);
  FUNC_1(&VAR_4->l2tab[VAR_5].refcnt, 0);
 }
 return VAR_4;
}
