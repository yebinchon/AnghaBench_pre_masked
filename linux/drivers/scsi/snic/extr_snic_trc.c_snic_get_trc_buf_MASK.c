
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snic_trc_data {scalar_t__ ts; } ;
struct snic_trc {size_t wr_idx; size_t max_idx; size_t rd_idx; int lock; struct snic_trc_data* buf; } ;
struct TYPE_2__ {struct snic_trc trc; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

struct snic_trc_data *
FUNC_2(void)
{
 struct snic_trc *VAR_1 = &VAR_0->trc;
 struct snic_trc_data *VAR_2 = ((void*)0);
 unsigned long VAR_3;

 FUNC_0(&VAR_1->lock, VAR_3);
 VAR_2 = &VAR_1->buf[VAR_1->wr_idx];
 VAR_1->wr_idx++;

 if (VAR_1->wr_idx == VAR_1->max_idx)
  VAR_1->wr_idx = 0;

 if (VAR_1->wr_idx != VAR_1->rd_idx) {
  FUNC_1(&VAR_1->lock, VAR_3);

  goto end;
 }

 VAR_1->rd_idx++;
 if (VAR_1->rd_idx == VAR_1->max_idx)
  VAR_1->rd_idx = 0;

 VAR_2->ts = 0;
 FUNC_1(&VAR_1->lock, VAR_3);

end:

 return VAR_2;
}
