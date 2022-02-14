
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fw_event_work {scalar_t__ event_data; } ;
struct TYPE_3__ {int num_phys; } ;
struct MPT3SAS_ADAPTER {int logging_level; scalar_t__ shost_recovery; TYPE_1__ sas_hba; } ;
struct TYPE_4__ {scalar_t__ ReasonCode; scalar_t__ DiscoveryStatus; } ;
typedef TYPE_2__ Mpi2EventDataSasDiscovery_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct MPT3SAS_ADAPTER*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct MPT3SAS_ADAPTER*,char*,char*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void
FUNC_5(struct MPT3SAS_ADAPTER *VAR_3,
 struct fw_event_work *VAR_4)
{
 Mpi2EventDataSasDiscovery_t *VAR_5 =
  (Mpi2EventDataSasDiscovery_t *) VAR_4->event_data;

 if (VAR_3->logging_level & VAR_1) {
  FUNC_1(VAR_3, "discovery event: (%s)",
    VAR_5->ReasonCode == VAR_0 ?
    "start" : "stop");
  if (VAR_5->DiscoveryStatus)
   FUNC_3("discovery_status(0x%08x)",
    FUNC_2(VAR_5->DiscoveryStatus));
  FUNC_3("\n");
 }

 if (VAR_5->ReasonCode == VAR_0 &&
     !VAR_3->sas_hba.num_phys) {
  if (VAR_2 > 0 && VAR_3->shost_recovery) {

   while (VAR_3->shost_recovery)
    FUNC_4(1);
  }
  FUNC_0(VAR_3);
 }
}
