
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsiio_tracker {int smid; int cb_idx; int * scmd; scalar_t__ direct_io; } ;
struct MPT3SAS_ADAPTER {TYPE_1__* chain_lookup; } ;
struct TYPE_2__ {int chain_offset; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;

void FUNC_2(struct MPT3SAS_ADAPTER *VAR_0,
      struct scsiio_tracker *VAR_1)
{
 if (FUNC_0(VAR_1->smid == 0))
  return;
 VAR_1->cb_idx = 0xFF;
 VAR_1->direct_io = 0;
 VAR_1->scmd = ((void*)0);
 FUNC_1(&VAR_0->chain_lookup[VAR_1->smid - 1].chain_offset, 0);
 VAR_1->smid = 0;
}
