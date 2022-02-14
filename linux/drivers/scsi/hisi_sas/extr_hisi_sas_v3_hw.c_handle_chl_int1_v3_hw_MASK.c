
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hisi_sas_hw_error {int irq_msk; int msg; } ;
struct hisi_hba {int rst_work; int wq; struct device* dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct hisi_sas_hw_error*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct device*,char*,int ,int,int) ;
 int FUNC_2 (struct hisi_hba*,int,int ) ;
 int FUNC_3 (struct hisi_hba*,int,int ,int) ;
 struct hisi_sas_hw_error* VAR_2 ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct hisi_hba *VAR_3, int VAR_4)
{
 u32 VAR_5 = FUNC_2(VAR_3, VAR_4, VAR_0);
 u32 VAR_6 = FUNC_2(VAR_3, VAR_4, VAR_1);
 struct device *VAR_7 = VAR_3->dev;
 int VAR_8;

 VAR_5 &= ~VAR_6;
 if (!VAR_5)
  return;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_2); VAR_8++) {
  const struct hisi_sas_hw_error *VAR_9 = &VAR_2[VAR_8];

  if (!(VAR_5 & VAR_9->irq_msk))
   continue;

  FUNC_1(VAR_7, "%s error (phy%d 0x%x) found!\n",
   VAR_9->msg, VAR_4, VAR_5);
  FUNC_4(VAR_3->wq, &VAR_3->rst_work);
 }

 FUNC_3(VAR_3, VAR_4, VAR_0, VAR_5);
}
