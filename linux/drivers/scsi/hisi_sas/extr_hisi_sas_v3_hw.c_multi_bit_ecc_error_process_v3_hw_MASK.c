
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hisi_sas_hw_error {int irq_msk; int msk; int shift; int msg; int reg; } ;
struct hisi_hba {int rst_work; int wq; struct device* dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct hisi_sas_hw_error*) ;
 int FUNC_1 (struct device*,char*,int ,int,int) ;
 int FUNC_2 (struct hisi_hba*,int ) ;
 struct hisi_sas_hw_error* VAR_0 ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct hisi_hba *VAR_1,
           u32 VAR_2)
{
 struct device *VAR_3 = VAR_1->dev;
 const struct hisi_sas_hw_error *VAR_4;
 u32 VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_0); VAR_6++) {
  VAR_4 = &VAR_0[VAR_6];
  if (VAR_2 & VAR_4->irq_msk) {
   VAR_5 = FUNC_2(VAR_1, VAR_4->reg);
   VAR_5 &= VAR_4->msk;
   VAR_5 >>= VAR_4->shift;
   FUNC_1(VAR_3, "%s (0x%x) found: mem addr is 0x%08X\n",
    VAR_4->msg, VAR_2, VAR_5);
   FUNC_3(VAR_1->wq, &VAR_1->rst_work);
  }
 }
}
