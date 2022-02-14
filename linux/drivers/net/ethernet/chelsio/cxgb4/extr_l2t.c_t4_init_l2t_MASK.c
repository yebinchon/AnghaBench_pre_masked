
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct l2t_data {unsigned int l2t_start; unsigned int l2t_size; TYPE_1__* l2tab; int lock; int nfree; TYPE_1__* rover; } ;
struct TYPE_2__ {int idx; int arpq; int refcnt; int lock; int state; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,unsigned int) ;
 struct l2t_data* FUNC_1 (int ,int ) ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct l2t_data*,int ,unsigned int) ;

struct l2t_data *FUNC_6(unsigned int VAR_5, unsigned int VAR_6)
{
 unsigned int VAR_7;
 int VAR_8;
 struct l2t_data *VAR_9;

 if (VAR_5 >= VAR_6 || VAR_6 >= VAR_2)
  return ((void*)0);
 VAR_7 = VAR_6 - VAR_5 + 1;
 if (VAR_7 < VAR_1)
  return ((void*)0);

 VAR_9 = FUNC_1(FUNC_5(VAR_9, VAR_4, VAR_7), VAR_0);
 if (!VAR_9)
  return ((void*)0);

 VAR_9->l2t_start = VAR_5;
 VAR_9->l2t_size = VAR_7;

 VAR_9->rover = VAR_9->l2tab;
 FUNC_0(&VAR_9->nfree, VAR_7);
 FUNC_2(&VAR_9->lock);

 for (VAR_8 = 0; VAR_8 < VAR_9->l2t_size; ++VAR_8) {
  VAR_9->l2tab[VAR_8].idx = VAR_8;
  VAR_9->l2tab[VAR_8].state = VAR_3;
  FUNC_4(&VAR_9->l2tab[VAR_8].lock);
  FUNC_0(&VAR_9->l2tab[VAR_8].refcnt, 0);
  FUNC_3(&VAR_9->l2tab[VAR_8].arpq);
 }
 return VAR_9;
}
