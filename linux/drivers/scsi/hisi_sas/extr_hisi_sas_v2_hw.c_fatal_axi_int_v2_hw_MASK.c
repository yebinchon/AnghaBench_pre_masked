
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hisi_sas_hw_error {int irq_msk; int shift; int msk; scalar_t__ msg; int reg; struct hisi_sas_hw_error* sub; } ;
struct hisi_sas_device {int completion; } ;
struct hisi_hba {struct hisi_sas_device* devices; int rst_work; int wq; struct device* dev; } ;
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
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,char*,scalar_t__,int) ;
 struct hisi_sas_hw_error* VAR_6 ;
 int FUNC_5 (struct hisi_hba*,int ) ;
 int FUNC_6 (struct hisi_hba*,int ,int) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_7, void *VAR_8)
{
 struct hisi_hba *VAR_9 = VAR_8;
 u32 VAR_10, VAR_11, VAR_12;
 struct device *VAR_13 = VAR_9->dev;
 const struct hisi_sas_hw_error *VAR_14;
 int VAR_15;

 VAR_11 = FUNC_5(VAR_9, VAR_2);
 FUNC_6(VAR_9, VAR_2, VAR_11 | 0xfffffffe);

 VAR_10 = FUNC_5(VAR_9, VAR_0);

 for (VAR_15 = 0; VAR_15 < FUNC_0(VAR_6); VAR_15++) {
  VAR_14 = &VAR_6[VAR_15];
  if (!(VAR_10 & VAR_14->irq_msk))
   continue;

  FUNC_6(VAR_9, VAR_0,
     1 << VAR_14->shift);
  if (VAR_14->sub) {
   const struct hisi_sas_hw_error *VAR_16 = VAR_14->sub;

   VAR_12 = FUNC_5(VAR_9, VAR_14->reg);
   for (; VAR_16->msk || VAR_16->msg; VAR_16++) {
    if (!(VAR_12 & VAR_16->msk))
     continue;
    FUNC_4(VAR_13, "%s (0x%x) found!\n",
     VAR_16->msg, VAR_10);
    FUNC_7(VAR_9->wq, &VAR_9->rst_work);
   }
  } else {
   FUNC_4(VAR_13, "%s (0x%x) found!\n",
    VAR_14->msg, VAR_10);
   FUNC_7(VAR_9->wq, &VAR_9->rst_work);
  }
 }

 if (VAR_10 & FUNC_1(VAR_1)) {
  u32 VAR_17 = FUNC_5(VAR_9, VAR_4);
  u32 VAR_18 = VAR_17 & VAR_5;
  struct hisi_sas_device *VAR_19 = &VAR_9->devices[VAR_18];

  FUNC_6(VAR_9, VAR_4, 0);
  FUNC_3(VAR_13, "clear ITCT ok\n");
  FUNC_2(VAR_19->completion);
 }

 FUNC_6(VAR_9, VAR_0, VAR_10);
 FUNC_6(VAR_9, VAR_2, VAR_11);

 return VAR_3;
}
