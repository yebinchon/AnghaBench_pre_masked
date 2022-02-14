
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csio_lnode {unsigned long tgt_scan_tick; scalar_t__ last_scan_ntgts; scalar_t__ n_scsi_tgts; } ;



int
FUNC_0(struct csio_lnode *VAR_0, unsigned long VAR_1,
  unsigned long VAR_2, unsigned long VAR_3,
  unsigned long VAR_4)
{
 int VAR_5 = 0;

 if (VAR_2 >= VAR_3)
  return 1;

 if (!VAR_0->tgt_scan_tick)
  VAR_0->tgt_scan_tick = VAR_1;

 if (((VAR_1 - VAR_0->tgt_scan_tick) >= VAR_4)) {
  if (!VAR_0->last_scan_ntgts)
   VAR_0->last_scan_ntgts = VAR_0->n_scsi_tgts;
  else {
   if (VAR_0->last_scan_ntgts == VAR_0->n_scsi_tgts)
    return 1;

   VAR_0->last_scan_ntgts = VAR_0->n_scsi_tgts;
  }
  VAR_0->tgt_scan_tick = VAR_1;
 }
 return VAR_5;
}
