
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct registry_priv {int wifi_spec; } ;
struct adapter {TYPE_1__* HalData; struct registry_priv registrypriv; } ;
struct TYPE_2__ {int OutEpQueueSel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct adapter*,int ,int) ;
 int FUNC_5 (struct adapter*,int ,int) ;
 int FUNC_6 (struct adapter*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct adapter *VAR_6)
{
 struct registry_priv *VAR_7 = &VAR_6->registrypriv;
 u32 VAR_8 = 0;
 u32 VAR_9 = 0;
 u32 VAR_10 = 0;
 u32 VAR_11;
 u32 VAR_12;
 u8 VAR_13;
 bool VAR_14 = VAR_7->wifi_spec;

 if (VAR_14) {
  if (VAR_6->HalData->OutEpQueueSel & VAR_3)
   VAR_8 = 0x29;

  if (VAR_6->HalData->OutEpQueueSel & VAR_4)
   VAR_9 = 0x1C;


  if (VAR_6->HalData->OutEpQueueSel & VAR_5)
   VAR_10 = 0x1C;
  VAR_13 = (u8)FUNC_2(VAR_10);
  FUNC_6(VAR_6, VAR_2, VAR_13);

  VAR_11 = 0xA8 - VAR_8 - VAR_9 - VAR_10;


  VAR_12 = FUNC_0(VAR_8) | FUNC_1(VAR_9) | FUNC_3(VAR_11) | VAR_0;
  FUNC_5(VAR_6, VAR_1, VAR_12);
 } else {
  FUNC_4(VAR_6, VAR_2, 0x0000);
  FUNC_4(VAR_6, VAR_2, 0x0d);
  FUNC_5(VAR_6, VAR_1, 0x808E000d);
 }
}
