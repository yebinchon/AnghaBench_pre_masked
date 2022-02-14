
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct MPT3SAS_ADAPTER {int dummy; } ;
struct TYPE_3__ {int ReasonCode; int StartSlot; int EnclosureLogicalID; int EnclosureHandle; } ;
typedef TYPE_1__ Mpi2EventDataSasEnclDevStatusChange_t ;




 int FUNC_0 (struct MPT3SAS_ADAPTER*,char*,char*,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct MPT3SAS_ADAPTER *VAR_0,
 Mpi2EventDataSasEnclDevStatusChange_t *VAR_1)
{
 char *VAR_2 = ((void*)0);

 switch (VAR_1->ReasonCode) {
 case 129:
  VAR_2 = "enclosure add";
  break;
 case 128:
  VAR_2 = "enclosure remove";
  break;
 default:
  VAR_2 = "unknown reason";
  break;
 }

 FUNC_0(VAR_0, "enclosure status change: (%s)\n"
   "\thandle(0x%04x), enclosure logical id(0x%016llx) number slots(%d)\n",
   VAR_2,
   FUNC_1(VAR_1->EnclosureHandle),
   (u64)FUNC_2(VAR_1->EnclosureLogicalID),
   FUNC_1(VAR_1->StartSlot));
}
