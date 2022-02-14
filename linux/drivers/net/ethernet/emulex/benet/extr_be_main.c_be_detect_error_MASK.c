
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct device {int dummy; } ;
struct be_adapter {scalar_t__ pcicfg; scalar_t__ db; TYPE_1__* pdev; } ;
struct TYPE_2__ {struct device dev; } ;


 scalar_t__ FUNC_0 (struct be_adapter*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_1 (struct be_adapter*) ;
 scalar_t__ FUNC_2 (struct be_adapter*,int ) ;
 int FUNC_3 (struct be_adapter*,int ) ;
 int FUNC_4 (struct device*,char*,...) ;
 int FUNC_5 (struct device*,char*) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (struct be_adapter*) ;
 int* VAR_15 ;
 int* VAR_16 ;

void FUNC_8(struct be_adapter *VAR_17)
{
 u32 VAR_18 = 0, VAR_19 = 0, VAR_20 = 0, VAR_21 = 0;
 u32 VAR_22 = 0, VAR_23 = 0, VAR_24 = 0;
 struct device *VAR_25 = &VAR_17->pdev->dev;
 u16 VAR_26;
 u32 VAR_27;

 if (FUNC_2(VAR_17, VAR_0))
  return;

 if (FUNC_7(VAR_17)) {
  VAR_22 = FUNC_6(VAR_17->db + VAR_14);
  if (VAR_22 & VAR_13) {
   FUNC_3(VAR_17, VAR_1);
   VAR_23 = FUNC_6(VAR_17->db +
      VAR_9);
   VAR_24 = FUNC_6(VAR_17->db +
      VAR_10);

   if (VAR_23 == VAR_11 &&
       VAR_24 == VAR_12) {
    FUNC_5(VAR_25, "Reset is in progress\n");
   } else {
    FUNC_4(VAR_25, "Error detected in the card\n");
    FUNC_4(VAR_25, "ERR: sliport status 0x%x\n",
     VAR_22);
    FUNC_4(VAR_25, "ERR: sliport error1 0x%x\n",
     VAR_23);
    FUNC_4(VAR_25, "ERR: sliport error2 0x%x\n",
     VAR_24);
   }
  }
 } else {
  VAR_18 = FUNC_6(VAR_17->pcicfg + VAR_4);
  VAR_19 = FUNC_6(VAR_17->pcicfg + VAR_2);
  VAR_20 = FUNC_6(VAR_17->pcicfg +
          VAR_5);
  VAR_21 = FUNC_6(VAR_17->pcicfg +
          VAR_3);

  VAR_18 = (VAR_18 & ~VAR_20);
  VAR_19 = (VAR_19 & ~VAR_21);

  if (VAR_18 || VAR_19) {







   if (FUNC_0(VAR_17)) {
    VAR_26 = FUNC_1(VAR_17);
    if ((VAR_26 & VAR_7)
         != VAR_7 &&
        (VAR_26 & VAR_6)
         != VAR_6 &&
        (VAR_26 & VAR_8)
         != VAR_8)
     return;
   }

   FUNC_4(VAR_25, "Error detected in the adapter");
   FUNC_3(VAR_17, VAR_1);

   for (VAR_27 = 0; VAR_18; VAR_18 >>= 1, VAR_27++) {
    if (VAR_18 & 1)
     FUNC_4(VAR_25, "UE: %s bit set\n",
      VAR_16[VAR_27]);
   }
   for (VAR_27 = 0; VAR_19; VAR_19 >>= 1, VAR_27++) {
    if (VAR_19 & 1)
     FUNC_4(VAR_25, "UE: %s bit set\n",
      VAR_15[VAR_27]);
   }
  }
 }
}
