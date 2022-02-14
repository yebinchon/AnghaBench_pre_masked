
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u16 ;
struct scsiio_tracker {int smid; } ;
struct scsi_cmnd {int dummy; } ;
struct chain_tracker {int dummy; } ;
struct MPT3SAS_ADAPTER {size_t chains_needed_per_io; TYPE_1__* chain_lookup; } ;
struct TYPE_2__ {int chain_offset; struct chain_tracker* chains_per_smid; } ;


 int FUNC_0 (int *) ;
 size_t FUNC_1 (int *) ;
 struct scsiio_tracker* FUNC_2 (struct scsi_cmnd*) ;

__attribute__((used)) static struct chain_tracker *
FUNC_3(struct MPT3SAS_ADAPTER *VAR_0,
          struct scsi_cmnd *VAR_1)
{
 struct chain_tracker *VAR_2;
 struct scsiio_tracker *VAR_3 = FUNC_2(VAR_1);
 u16 VAR_4 = VAR_3->smid;
 u8 VAR_5 =
    FUNC_1(&VAR_0->chain_lookup[VAR_4 - 1].chain_offset);

 if (VAR_5 == VAR_0->chains_needed_per_io)
  return ((void*)0);

 VAR_2 = &VAR_0->chain_lookup[VAR_4 - 1].chains_per_smid[VAR_5];
 FUNC_0(&VAR_0->chain_lookup[VAR_4 - 1].chain_offset);
 return VAR_2;
}
