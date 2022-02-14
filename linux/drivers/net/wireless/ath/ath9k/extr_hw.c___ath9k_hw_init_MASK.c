
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int macVersion; void* phyRev; int macRev; } ;
struct ath_hw {int WARegVal; int is_pciexpress; TYPE_1__ hw_version; } ;
struct ath_common {int state; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ath_hw*) ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 scalar_t__ FUNC_2 (struct ath_hw*) ;
 scalar_t__ FUNC_3 (struct ath_hw*) ;
 scalar_t__ FUNC_4 (struct ath_hw*) ;
 scalar_t__ FUNC_5 (struct ath_hw*) ;
 scalar_t__ FUNC_6 (struct ath_hw*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_7 (struct ath_hw*,int ) ;
 int FUNC_8 (struct ath_hw*,int ,int) ;
 int FUNC_9 (struct ath_hw*) ;
 struct ath_common* FUNC_10 (struct ath_hw*) ;
 int FUNC_11 (struct ath_hw*) ;
 int FUNC_12 (struct ath_hw*) ;
 int FUNC_13 (struct ath_hw*) ;
 int FUNC_14 (struct ath_hw*) ;
 int FUNC_15 (struct ath_hw*) ;
 int FUNC_16 (struct ath_hw*) ;
 int FUNC_17 (struct ath_hw*) ;
 int FUNC_18 (struct ath_hw*) ;
 int FUNC_19 (struct ath_hw*) ;
 int FUNC_20 (struct ath_hw*) ;
 int FUNC_21 (struct ath_hw*,int ) ;
 int FUNC_22 (struct ath_hw*,int ) ;
 int FUNC_23 (struct ath_common*,char*,...) ;

__attribute__((used)) static int FUNC_24(struct ath_hw *VAR_10)
{
 struct ath_common *VAR_11 = FUNC_10(VAR_10);
 int VAR_12 = 0;

 if (!FUNC_20(VAR_10)) {
  FUNC_23(VAR_11, "Could not read hardware revisions");
  return -VAR_9;
 }

 switch (VAR_10->hw_version.macVersion) {
 case 144:
 case 143:
 case 141:
 case 142:
 case 139:
 case 138:
 case 137:
 case 140:
 case 136:
 case 135:
 case 132:
 case 134:
 case 133:
 case 130:
 case 128:
 case 131:
 case 129:
  break;
 default:
  FUNC_23(VAR_11,
   "Mac Chip Rev 0x%02x.%x is not supported by this driver\n",
   VAR_10->hw_version.macVersion, VAR_10->hw_version.macRev);
  return -VAR_9;
 }






 if (FUNC_2(VAR_10)) {
  VAR_10->WARegVal = FUNC_7(VAR_10, VAR_1);
  VAR_10->WARegVal |= (VAR_4 |
     VAR_2);
 }

 if (!FUNC_21(VAR_10, VAR_6)) {
  FUNC_23(VAR_11, "Couldn't reset chip\n");
  return -VAR_8;
 }

 if (FUNC_6(VAR_10)) {
  VAR_10->WARegVal |= VAR_3;
  FUNC_8(VAR_10, VAR_1, VAR_10->WARegVal);
 }

 FUNC_15(VAR_10);
 FUNC_14(VAR_10);

 VAR_12 = FUNC_9(VAR_10);
 if (VAR_12)
  return VAR_12;

 if (!FUNC_22(VAR_10, VAR_5)) {
  FUNC_23(VAR_11, "Couldn't wakeup chip\n");
  return -VAR_8;
 }

 if (FUNC_1(VAR_10) || FUNC_0(VAR_10) || FUNC_4(VAR_10) ||
     FUNC_3(VAR_10) || FUNC_5(VAR_10))
  VAR_10->is_pciexpress = 0;

 VAR_10->hw_version.phyRev = FUNC_7(VAR_10, VAR_0);
 FUNC_13(VAR_10);

 if (!VAR_10->is_pciexpress)
  FUNC_11(VAR_10);

 VAR_12 = FUNC_19(VAR_10);
 if (VAR_12)
  return VAR_12;

 FUNC_18(VAR_10);
 VAR_12 = FUNC_12(VAR_10);
 if (VAR_12)
  return VAR_12;

 FUNC_17(VAR_10);
 FUNC_16(VAR_10);

 VAR_11->state = VAR_7;

 return 0;
}
