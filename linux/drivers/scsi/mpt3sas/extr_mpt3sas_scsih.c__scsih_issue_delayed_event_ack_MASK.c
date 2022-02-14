
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct MPT3SAS_ADAPTER {int internal_smid; int (* put_smid_default ) (struct MPT3SAS_ADAPTER*,int) ;int base_cb_idx; int scsi_lookup_lock; TYPE_1__* internal_lookup; } ;
typedef int U32 ;
typedef int U16 ;
struct TYPE_6__ {scalar_t__ VP_ID; scalar_t__ VF_ID; int EventContext; int Event; int Function; } ;
struct TYPE_5__ {int cb_idx; } ;
typedef TYPE_2__ Mpi2EventAckRequest_t ;


 int VAR_0 ;
 int FUNC_0 (struct MPT3SAS_ADAPTER*,int ) ;
 int FUNC_1 (struct MPT3SAS_ADAPTER*,char*,int ,int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 TYPE_2__* FUNC_4 (struct MPT3SAS_ADAPTER*,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (struct MPT3SAS_ADAPTER*,int) ;

__attribute__((used)) static void
FUNC_8(struct MPT3SAS_ADAPTER *VAR_1, u16 VAR_2, U16 VAR_3,
    U32 VAR_4)
{
 Mpi2EventAckRequest_t *VAR_5;
 int VAR_6 = VAR_2 - VAR_1->internal_smid;
 unsigned long VAR_7;





 FUNC_5(&VAR_1->scsi_lookup_lock, VAR_7);
 VAR_1->internal_lookup[VAR_6].cb_idx = VAR_1->base_cb_idx;
 FUNC_6(&VAR_1->scsi_lookup_lock, VAR_7);

 FUNC_0(VAR_1,
     FUNC_1(VAR_1, "EVENT ACK: event(0x%04x), smid(%d), cb(%d)\n",
       FUNC_2(VAR_3), VAR_2, VAR_1->base_cb_idx));
 VAR_5 = FUNC_4(VAR_1, VAR_2);
 FUNC_3(VAR_5, 0, sizeof(Mpi2EventAckRequest_t));
 VAR_5->Function = VAR_0;
 VAR_5->Event = VAR_3;
 VAR_5->EventContext = VAR_4;
 VAR_5->VF_ID = 0;
 VAR_5->VP_ID = 0;
 VAR_1->put_smid_default(VAR_1, VAR_2);
}
