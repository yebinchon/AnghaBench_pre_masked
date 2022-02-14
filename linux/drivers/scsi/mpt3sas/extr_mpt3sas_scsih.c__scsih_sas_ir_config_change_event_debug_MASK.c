
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct MPT3SAS_ADAPTER {int dummy; } ;
struct TYPE_5__ {int NumElements; int Flags; int * ConfigElement; } ;
struct TYPE_4__ {int ReasonCode; int PhysDiskNum; int PhysDiskDevHandle; int VolDevHandle; int ElementFlags; } ;
typedef TYPE_1__ Mpi2EventIrConfigElement_t ;
typedef TYPE_2__ Mpi2EventDataIrConfigChangeList_t ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (struct MPT3SAS_ADAPTER*,char*,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*,char*,int,int,int ) ;

__attribute__((used)) static void
FUNC_4(struct MPT3SAS_ADAPTER *VAR_2,
 Mpi2EventDataIrConfigChangeList_t *VAR_3)
{
 Mpi2EventIrConfigElement_t *VAR_4;
 u8 VAR_5;
 int VAR_6;
 char *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);

 VAR_4 = (Mpi2EventIrConfigElement_t *)&VAR_3->ConfigElement[0];

 FUNC_0(VAR_2, "raid config change: (%s), elements(%d)\n",
   FUNC_2(VAR_3->Flags) & VAR_1 ?
   "foreign" : "native",
   VAR_3->NumElements);
 for (VAR_6 = 0; VAR_6 < VAR_3->NumElements; VAR_6++, VAR_4++) {
  switch (VAR_4->ReasonCode) {
  case 136:
   VAR_7 = "add";
   break;
  case 131:
   VAR_7 = "remove";
   break;
  case 134:
   VAR_7 = "no change";
   break;
  case 135:
   VAR_7 = "hide";
   break;
  case 130:
   VAR_7 = "unhide";
   break;
  case 129:
   VAR_7 = "volume_created";
   break;
  case 128:
   VAR_7 = "volume_deleted";
   break;
  case 133:
   VAR_7 = "pd_created";
   break;
  case 132:
   VAR_7 = "pd_deleted";
   break;
  default:
   VAR_7 = "unknown reason";
   break;
  }
  VAR_5 = FUNC_1(VAR_4->ElementFlags) &
      VAR_0;
  switch (VAR_5) {
  case 137:
   VAR_8 = "volume";
   break;
  case 138:
   VAR_8 = "phys disk";
   break;
  case 139:
   VAR_8 = "hot spare";
   break;
  default:
   VAR_8 = "unknown element";
   break;
  }
  FUNC_3("\t(%s:%s), vol handle(0x%04x), " "pd handle(0x%04x), pd num(0x%02x)\n", VAR_8,

      VAR_7, FUNC_1(VAR_4->VolDevHandle),
      FUNC_1(VAR_4->PhysDiskDevHandle),
      VAR_4->PhysDiskNum);
 }
}
