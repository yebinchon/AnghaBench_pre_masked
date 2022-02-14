
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct MPT3SAS_ADAPTER {int dummy; } ;
struct TYPE_3__ {int ReasonCode; int ASCQ; int ASC; int TaskTag; int SASAddress; int DevHandle; } ;
typedef TYPE_1__ Mpi2EventDataSasDeviceStatusChange_t ;
 int FUNC_0 (struct MPT3SAS_ADAPTER*,char*,char*,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static void
FUNC_4(struct MPT3SAS_ADAPTER *VAR_0,
 Mpi2EventDataSasDeviceStatusChange_t *VAR_1)
{
 char *VAR_2 = ((void*)0);

 switch (VAR_1->ReasonCode) {
 case 130:
  VAR_2 = "smart data";
  break;
 case 128:
  VAR_2 = "unsupported device discovered";
  break;
 case 133:
  VAR_2 = "internal device reset";
  break;
 case 129:
  VAR_2 = "internal task abort";
  break;
 case 140:
  VAR_2 = "internal task abort set";
  break;
 case 138:
  VAR_2 = "internal clear task set";
  break;
 case 132:
  VAR_2 = "internal query task";
  break;
 case 131:
  VAR_2 = "sata init failure";
  break;
 case 136:
  VAR_2 = "internal device reset complete";
  break;
 case 135:
  VAR_2 = "internal task abort complete";
  break;
 case 139:
  VAR_2 = "internal async notification";
  break;
 case 134:
  VAR_2 = "expander reduced functionality";
  break;
 case 137:
  VAR_2 = "expander reduced functionality complete";
  break;
 default:
  VAR_2 = "unknown reason";
  break;
 }
 FUNC_0(VAR_0, "device status change: (%s)\thandle(0x%04x), sas address(0x%016llx), tag(%d)",
   VAR_2, FUNC_1(VAR_1->DevHandle),
   (u64)FUNC_2(VAR_1->SASAddress),
   FUNC_1(VAR_1->TaskTag));
 if (VAR_1->ReasonCode == 130)
  FUNC_3(", ASC(0x%x), ASCQ(0x%x)\n",
   VAR_1->ASC, VAR_1->ASCQ);
 FUNC_3("\n");
}
