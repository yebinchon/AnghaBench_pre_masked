
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct MPT3SAS_ADAPTER {int dummy; } ;
struct TYPE_5__ {int ExpStatus; int StartPhyNum; int NumEntries; TYPE_1__* PHY; int EnclosureHandle; int ExpanderDevHandle; } ;
struct TYPE_4__ {int PhyStatus; int LinkRate; int AttachedDevHandle; } ;
typedef TYPE_2__ Mpi2EventDataSasTopologyChangeList_t ;







 int VAR_0 ;




 int FUNC_0 (struct MPT3SAS_ADAPTER*,char*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int,int,...) ;

__attribute__((used)) static void
FUNC_3(struct MPT3SAS_ADAPTER *VAR_1,
 Mpi2EventDataSasTopologyChangeList_t *VAR_2)
{
 int VAR_3;
 u16 VAR_4;
 u16 VAR_5;
 u8 VAR_6;
 char *VAR_7 = ((void*)0);
 u8 VAR_8, VAR_9;

 switch (VAR_2->ExpStatus) {
 case 136:
  VAR_7 = "add";
  break;
 case 134:
  VAR_7 = "remove";
  break;
 case 133:
 case 0:
  VAR_7 = "responding";
  break;
 case 135:
  VAR_7 = "remove delay";
  break;
 default:
  VAR_7 = "unknown status";
  break;
 }
 FUNC_0(VAR_1, "sas topology change: (%s)\n", VAR_7);
 FUNC_2("\thandle(0x%04x), enclosure_handle(0x%04x) " "start_phy(%02d), count(%d)\n",

     FUNC_1(VAR_2->ExpanderDevHandle),
     FUNC_1(VAR_2->EnclosureHandle),
     VAR_2->StartPhyNum, VAR_2->NumEntries);
 for (VAR_3 = 0; VAR_3 < VAR_2->NumEntries; VAR_3++) {
  VAR_4 = FUNC_1(VAR_2->PHY[VAR_3].AttachedDevHandle);
  if (!VAR_4)
   continue;
  VAR_6 = VAR_2->StartPhyNum + VAR_3;
  VAR_5 = VAR_2->PHY[VAR_3].PhyStatus &
      VAR_0;
  switch (VAR_5) {
  case 129:
   VAR_7 = "target add";
   break;
  case 128:
   VAR_7 = "target remove";
   break;
  case 132:
   VAR_7 = "delay target remove";
   break;
  case 130:
   VAR_7 = "link rate change";
   break;
  case 131:
   VAR_7 = "target responding";
   break;
  default:
   VAR_7 = "unknown";
   break;
  }
  VAR_8 = VAR_2->PHY[VAR_3].LinkRate >> 4;
  VAR_9 = VAR_2->PHY[VAR_3].LinkRate & 0xF;
  FUNC_2("\tphy(%02d), attached_handle(0x%04x): %s:" " link rate: new(0x%02x), old(0x%02x)\n", VAR_6,

      VAR_4, VAR_7, VAR_8, VAR_9);

 }
}
