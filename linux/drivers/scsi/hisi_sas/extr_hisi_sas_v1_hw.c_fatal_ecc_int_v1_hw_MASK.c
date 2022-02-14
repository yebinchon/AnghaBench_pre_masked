
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hisi_hba {struct device* dev; } ;
struct device {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct hisi_hba*,int ) ;
 int FUNC_2 (struct hisi_hba*,int ,int) ;
 int FUNC_3 (char*,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_18, void *VAR_19)
{
 struct hisi_hba *VAR_20 = VAR_19;
 struct device *VAR_21 = VAR_20->dev;
 u32 VAR_22 = FUNC_1(VAR_20, VAR_11);

 if (VAR_22 & VAR_12) {
  u32 VAR_23 = FUNC_1(VAR_20, VAR_3);

  FUNC_3("%s: Fatal DQ 1b ECC interrupt (0x%x)\n",
        FUNC_0(VAR_21), VAR_23);
 }

 if (VAR_22 & VAR_13) {
  u32 VAR_24 = (FUNC_1(VAR_20, VAR_0) &
    VAR_1) >>
    VAR_2;

  FUNC_3("%s: Fatal DQ RAM ECC interrupt @ 0x%08x\n",
        FUNC_0(VAR_21), VAR_24);
 }

 if (VAR_22 & VAR_14) {
  u32 VAR_25 = FUNC_1(VAR_20, VAR_3);

  FUNC_3("%s: Fatal IOST 1b ECC interrupt (0x%x)\n",
        FUNC_0(VAR_21), VAR_25);
 }

 if (VAR_22 & VAR_15) {
  u32 VAR_26 = (FUNC_1(VAR_20, VAR_4) &
    VAR_5) >>
    VAR_6;

  FUNC_3("%s: Fatal IOST RAM ECC interrupt @ 0x%08x\n",
        FUNC_0(VAR_21), VAR_26);
 }

 if (VAR_22 & VAR_17) {
  u32 VAR_27 = (FUNC_1(VAR_20, VAR_7) &
    VAR_8) >>
    VAR_9;

  FUNC_3("%s: Fatal TCT RAM ECC interrupt @ 0x%08x\n",
        FUNC_0(VAR_21), VAR_27);
 }

 if (VAR_22 & VAR_16) {
  u32 VAR_28 = FUNC_1(VAR_20, VAR_3);

  FUNC_3("%s: Fatal ITCT 1b ECC interrupt (0x%x)\n",
        FUNC_0(VAR_21), VAR_28);
 }

 FUNC_2(VAR_20, VAR_11, VAR_22 | 0x3f);

 return VAR_10;
}
