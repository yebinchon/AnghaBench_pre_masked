
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snic_trc_data {scalar_t__ ts; } ;
struct snic_trc {size_t rd_idx; size_t wr_idx; size_t max_idx; int lock; struct snic_trc_data* buf; } ;
struct TYPE_2__ {struct snic_trc trc; } ;


 int FUNC_0 (struct snic_trc_data*,char*,int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

int
FUNC_3(char *VAR_1, int VAR_2)
{
 struct snic_trc_data *VAR_3 = ((void*)0);
 struct snic_trc *VAR_4 = &VAR_0->trc;
 unsigned long VAR_5;

 FUNC_1(&VAR_4->lock, VAR_5);
 if (VAR_4->rd_idx == VAR_4->wr_idx) {
  FUNC_2(&VAR_4->lock, VAR_5);

  return -1;
 }
 VAR_3 = &VAR_4->buf[VAR_4->rd_idx];

 if (VAR_3->ts == 0) {

  FUNC_2(&VAR_4->lock, VAR_5);

  return -1;
 }

 VAR_4->rd_idx++;
 if (VAR_4->rd_idx == VAR_4->max_idx)
  VAR_4->rd_idx = 0;
 FUNC_2(&VAR_4->lock, VAR_5);

 return FUNC_0(VAR_3, VAR_1, VAR_2);
}
