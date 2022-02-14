
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct MPT3SAS_ADAPTER {int dummy; } ;
struct TYPE_3__ {int RAIDOperation; int PercentComplete; int VolDevHandle; } ;
typedef TYPE_1__ Mpi2EventDataIrOperationStatus_t ;







 int FUNC_0 (struct MPT3SAS_ADAPTER*,char*,char*,int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct MPT3SAS_ADAPTER *VAR_0,
 Mpi2EventDataIrOperationStatus_t *VAR_1)
{
 char *VAR_2 = ((void*)0);

 switch (VAR_1->RAIDOperation) {
 case 128:
  VAR_2 = "resync";
  break;
 case 129:
  VAR_2 = "online capacity expansion";
  break;
 case 131:
  VAR_2 = "consistency check";
  break;
 case 132:
  VAR_2 = "background init";
  break;
 case 130:
  VAR_2 = "make data consistent";
  break;
 }

 if (!VAR_2)
  return;

 FUNC_0(VAR_0, "raid operational status: (%s)\thandle(0x%04x), percent complete(%d)\n",
   VAR_2,
   FUNC_1(VAR_1->VolDevHandle),
   VAR_1->PercentComplete);
}
