
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hisi_sas_phy {int dummy; } ;
struct hisi_sas_hw_error {int irq_msk; int msg; } ;
struct hisi_hba {struct hisi_sas_phy* phy; int rst_work; int wq; struct device* dev; } ;
struct device {int dummy; } ;
typedef int irqreturn_t ;


 int FUNC_0 (struct hisi_sas_hw_error*) ;
 int FUNC_1 (int ) ;
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
 int FUNC_2 (struct device*,char*,int,...) ;
 int FUNC_3 (struct hisi_sas_phy*,int ) ;
 int FUNC_4 (struct hisi_hba*,int) ;
 int FUNC_5 (struct hisi_hba*,int,int ) ;
 int FUNC_6 (struct hisi_hba*,int,int ,int) ;
 int FUNC_7 (struct hisi_hba*,int ) ;
 int FUNC_8 (struct hisi_hba*,int ,int) ;
 int FUNC_9 (int,struct hisi_hba*) ;
 struct hisi_sas_hw_error* VAR_15 ;
 int FUNC_10 (int ,int *) ;

__attribute__((used)) static irqreturn_t FUNC_11(int VAR_16, void *VAR_17)
{
 struct hisi_hba *VAR_18 = VAR_17;
 struct device *VAR_19 = VAR_18->dev;
 u32 VAR_20, VAR_21, VAR_22;
 int VAR_23 = 0;

 VAR_20 = FUNC_7(VAR_18, VAR_9);
 VAR_21 = VAR_20;
 VAR_20 |= VAR_10;
 FUNC_8(VAR_18, VAR_9, VAR_20);

 VAR_22 = (FUNC_7(VAR_18, VAR_11) >>
   VAR_12) & 0x1ff;

 while (VAR_22) {
  u32 VAR_24 = FUNC_5(VAR_18, VAR_23,
           VAR_0);
  u32 VAR_25 = FUNC_5(VAR_18, VAR_23,
           VAR_6);
  u32 VAR_26 = FUNC_5(VAR_18, VAR_23,
           VAR_7);

  if ((VAR_22 & (1 << VAR_23)) && VAR_25) {
   int VAR_27;

   for (VAR_27 = 0; VAR_27 < FUNC_0(VAR_15); VAR_27++) {
    const struct hisi_sas_hw_error *VAR_28 =
      &VAR_15[VAR_27];

    if (!(VAR_25 & VAR_28->irq_msk))
     continue;

    FUNC_2(VAR_19, "%s error (phy%d 0x%x) found!\n",
     VAR_28->msg, VAR_23, VAR_25);
    FUNC_10(VAR_18->wq, &VAR_18->rst_work);
   }

   FUNC_6(VAR_18, VAR_23,
          VAR_6, VAR_25);
  }

  if ((VAR_22 & (1 << VAR_23)) && VAR_26) {
   struct hisi_sas_phy *VAR_29 = &VAR_18->phy[VAR_23];

   if (VAR_26 & FUNC_1(VAR_8)) {
    FUNC_2(VAR_19, "phy%d identify timeout\n",
      VAR_23);
    FUNC_3(VAR_29,
      VAR_13);
   }

   FUNC_6(VAR_18, VAR_23,
       VAR_7, VAR_26);
  }

  if ((VAR_22 & (1 << VAR_23)) && VAR_24) {
   if (VAR_24 & VAR_5)
    FUNC_9(VAR_23, VAR_18);

   if (VAR_24 & VAR_3)
    FUNC_4(VAR_18, VAR_23);

   FUNC_6(VAR_18, VAR_23,
     VAR_0, VAR_24
     & (~VAR_1)
     & (~VAR_4)
     & (~VAR_2));
  }
  VAR_22 &= ~(1 << VAR_23);
  VAR_23++;
 }

 FUNC_8(VAR_18, VAR_9, VAR_21);

 return VAR_14;
}
