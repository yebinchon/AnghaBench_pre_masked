
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snic_trc_data {int dummy; } ;
struct snic_trc {int max_idx; int enable; scalar_t__ wr_idx; scalar_t__ rd_idx; int lock; struct snic_trc_data* buf; } ;
struct TYPE_2__ {struct snic_trc trc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int) ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (int) ;

int
FUNC_5(void)
{
 struct snic_trc *VAR_5 = &VAR_3->trc;
 void *VAR_6 = ((void*)0);
 int VAR_7 = 0, VAR_8;

 VAR_7 = (VAR_4 * VAR_1);
 VAR_6 = FUNC_4(VAR_7);
 if (!VAR_6) {
  FUNC_0("Failed to Allocate Trace Buffer Size. %d\n", VAR_7);
  FUNC_0("Trace Facility not enabled.\n");
  VAR_8 = -VAR_0;

  return VAR_8;
 }

 VAR_5->buf = (struct snic_trc_data *) VAR_6;
 FUNC_3(&VAR_5->lock);

 FUNC_2();

 VAR_5->max_idx = (VAR_7 / VAR_2);
 VAR_5->rd_idx = VAR_5->wr_idx = 0;
 VAR_5->enable = 1;
 FUNC_1("Trace Facility Enabled.\n Trace Buffer SZ %lu Pages.\n",
    VAR_7 / VAR_1);
 VAR_8 = 0;

 return VAR_8;
}
