
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int revision; } ;
struct hisi_sas_hw_error {int irq_msk; int msk; scalar_t__ msg; scalar_t__ reg; struct hisi_sas_hw_error* sub; } ;
struct hisi_sas_device {int completion; } ;
struct hisi_hba {struct hisi_sas_device* devices; int rst_work; int wq; struct pci_dev* pci_dev; struct device* dev; } ;
struct device {int dummy; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hisi_sas_hw_error*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,char*,scalar_t__,int) ;
 struct hisi_sas_hw_error* VAR_9 ;
 int FUNC_5 (struct hisi_hba*) ;
 int FUNC_6 (struct hisi_hba*,scalar_t__) ;
 int FUNC_7 (struct hisi_hba*,scalar_t__,int) ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_10, void *VAR_11)
{
 u32 VAR_12, VAR_13;
 struct hisi_hba *VAR_14 = VAR_11;
 struct device *VAR_15 = VAR_14->dev;
 struct pci_dev *VAR_16 = VAR_14->pci_dev;
 int VAR_17;

 VAR_13 = FUNC_6(VAR_14, VAR_5);
 FUNC_7(VAR_14, VAR_5, VAR_13 | 0x1df00);

 VAR_12 = FUNC_6(VAR_14, VAR_3);
 VAR_12 &= ~VAR_13;

 for (VAR_17 = 0; VAR_17 < FUNC_0(VAR_9); VAR_17++) {
  const struct hisi_sas_hw_error *VAR_18 = &VAR_9[VAR_17];

  if (!(VAR_12 & VAR_18->irq_msk))
   continue;

  if (VAR_18->sub) {
   const struct hisi_sas_hw_error *VAR_19 = VAR_18->sub;
   u32 VAR_20 = FUNC_6(VAR_14, VAR_18->reg);

   for (; VAR_19->msk || VAR_19->msg; VAR_19++) {
    if (!(VAR_20 & VAR_19->msk))
     continue;

    FUNC_4(VAR_15, "%s error (0x%x) found!\n",
     VAR_19->msg, VAR_12);
    FUNC_8(VAR_14->wq, &VAR_14->rst_work);
   }
  } else {
   FUNC_4(VAR_15, "%s error (0x%x) found!\n",
    VAR_18->msg, VAR_12);
   FUNC_8(VAR_14->wq, &VAR_14->rst_work);
  }

  if (VAR_16->revision < 0x21) {
   u32 VAR_21;

   VAR_21 = FUNC_6(VAR_14,
        VAR_2 +
        VAR_0);
   VAR_21 |= VAR_1;
   FUNC_7(VAR_14, VAR_2 +
      VAR_0, VAR_21);
  }
 }

 FUNC_5(VAR_14);

 if (VAR_12 & FUNC_1(VAR_4)) {
  u32 VAR_22 = FUNC_6(VAR_14, VAR_7);
  u32 VAR_23 = VAR_22 & VAR_8;
  struct hisi_sas_device *VAR_24 =
    &VAR_14->devices[VAR_23];

  FUNC_7(VAR_14, VAR_7, 0);
  FUNC_3(VAR_15, "clear ITCT ok\n");
  FUNC_2(VAR_24->completion);
 }

 FUNC_7(VAR_14, VAR_3, VAR_12 & 0x1df00);
 FUNC_7(VAR_14, VAR_5, VAR_13);

 return VAR_6;
}
