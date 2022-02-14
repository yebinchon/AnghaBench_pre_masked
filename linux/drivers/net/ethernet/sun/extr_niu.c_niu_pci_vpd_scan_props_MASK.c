
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct TYPE_2__ {int* model; int* board_model; int* version; int* local_mac; int mac_num; int* phy_type; } ;
struct niu {int dev; int device; TYPE_1__ vpd; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ,char*,char*,int) ;
 int FUNC_1 (struct niu*,int ,int ,int ,char*,char*,int) ;
 int FUNC_2 (struct niu*,scalar_t__) ;
 int FUNC_3 (struct niu*,scalar_t__,char*,int) ;
 int FUNC_4 (struct niu*) ;
 int VAR_14 ;
 int FUNC_5 (char*,char*) ;

__attribute__((used)) static int FUNC_6(struct niu *VAR_15, u32 VAR_16, u32 VAR_17)
{
 unsigned int VAR_18 = 0;
 FUNC_1(VAR_15, VAR_14, VAR_9, VAR_15->dev,
       "VPD_SCAN: start[%x] end[%x]\n", VAR_16, VAR_17);
 while (VAR_16 < VAR_17) {
  int VAR_19, VAR_20, VAR_21;
  char VAR_22[64];
  u8 *VAR_23;
  int VAR_24;

  if (VAR_18 == 0x0000003f) {
   FUNC_4(VAR_15);
   return 1;
  }

  VAR_20 = FUNC_2(VAR_15, VAR_16 + 2);
  if (VAR_20 < 0)
   return VAR_20;
  VAR_19 = VAR_20;
  VAR_16 += 3;

  VAR_21 = FUNC_2(VAR_15, VAR_16 + 4);
  if (VAR_21 < 0)
   return VAR_21;
  VAR_20 = FUNC_3(VAR_15, VAR_16 + 5, VAR_22, 64);
  if (VAR_20 < 0)
   return VAR_20;

  VAR_23 = ((void*)0);
  VAR_24 = 0;
  if (!FUNC_5(VAR_22, "model")) {
   VAR_23 = VAR_15->vpd.model;
   VAR_24 = VAR_11;
   VAR_18 |= 0x00000001;
  } else if (!FUNC_5(VAR_22, "board-model")) {
   VAR_23 = VAR_15->vpd.board_model;
   VAR_24 = VAR_10;
   VAR_18 |= 0x00000002;
  } else if (!FUNC_5(VAR_22, "version")) {
   VAR_23 = VAR_15->vpd.version;
   VAR_24 = VAR_13;
   VAR_18 |= 0x00000004;
  } else if (!FUNC_5(VAR_22, "local-mac-address")) {
   VAR_23 = VAR_15->vpd.local_mac;
   VAR_24 = VAR_1;
   VAR_18 |= 0x00000008;
  } else if (!FUNC_5(VAR_22, "num-mac-addresses")) {
   VAR_23 = &VAR_15->vpd.mac_num;
   VAR_24 = 1;
   VAR_18 |= 0x00000010;
  } else if (!FUNC_5(VAR_22, "phy-type")) {
   VAR_23 = VAR_15->vpd.phy_type;
   VAR_24 = VAR_12;
   VAR_18 |= 0x00000020;
  }

  if (VAR_24 && VAR_21 > VAR_24) {
   FUNC_0(VAR_15->device, "Property '%s' length (%d) is too long\n", VAR_22, VAR_21);
   return -VAR_0;
  }

  if (VAR_23) {
   u32 VAR_25 = VAR_16 + 5 + VAR_20;
   int VAR_26;

   FUNC_1(VAR_15, VAR_14, VAR_9, VAR_15->dev,
         "VPD_SCAN: Reading in property [%s] len[%d]\n",
         VAR_22, VAR_21);
   for (VAR_26 = 0; VAR_26 < VAR_21; VAR_26++) {
    VAR_20 = FUNC_2(VAR_15, VAR_25 + VAR_26);
    if (VAR_20 >= 0)
     *VAR_23 = VAR_20;
    ++VAR_23;
   }
  }

  VAR_16 += VAR_19;
 }

 return 0;
}
