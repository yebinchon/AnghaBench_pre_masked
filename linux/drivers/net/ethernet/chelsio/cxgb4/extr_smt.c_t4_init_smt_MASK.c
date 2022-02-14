
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smt_data {unsigned int smt_size; TYPE_1__* smtab; int lock; } ;
struct TYPE_2__ {int idx; scalar_t__ refcnt; int lock; int src_mac; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 struct smt_data* FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct smt_data*,int ,unsigned int) ;

struct smt_data *FUNC_5(void)
{
 unsigned int VAR_5;
 struct smt_data *VAR_6;
 int VAR_7;

 VAR_5 = VAR_2;

 VAR_6 = FUNC_0(FUNC_4(VAR_6, VAR_4, VAR_5), VAR_1);
 if (!VAR_6)
  return ((void*)0);
 VAR_6->smt_size = VAR_5;
 FUNC_2(&VAR_6->lock);
 for (VAR_7 = 0; VAR_7 < VAR_6->smt_size; ++VAR_7) {
  VAR_6->smtab[VAR_7].idx = VAR_7;
  VAR_6->smtab[VAR_7].state = VAR_3;
  FUNC_1(&VAR_6->smtab[VAR_7].src_mac, 0, VAR_0);
  FUNC_3(&VAR_6->smtab[VAR_7].lock);
  VAR_6->smtab[VAR_7].refcnt = 0;
 }
 return VAR_6;
}
