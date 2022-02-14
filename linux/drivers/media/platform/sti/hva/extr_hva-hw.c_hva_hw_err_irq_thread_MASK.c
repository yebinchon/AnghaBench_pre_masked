
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct hva_dev {int sts_reg; int sfl_reg; int lmi_err_reg; int emi_err_reg; int hec_mif_err_reg; int interrupt; struct hva_ctx** instances; } ;
struct hva_ctx {int hw_err; int name; } ;
struct device {int dummy; } ;
typedef int irqreturn_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct device*,char*,int ,int,int) ;
 int FUNC_2 (struct device*,char*,int ,size_t) ;
 struct device* FUNC_3 (struct hva_dev*) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_3, void *VAR_4)
{
 struct hva_dev *VAR_5 = VAR_4;
 struct device *VAR_6 = FUNC_3(VAR_5);
 u8 VAR_7 = 0;
 struct hva_ctx *VAR_8;

 FUNC_1(VAR_6, "%s     status: 0x%02x fifo level: 0x%02x\n",
  VAR_1, VAR_5->sts_reg & 0xFF, VAR_5->sfl_reg & 0xF);





 VAR_7 = (VAR_5->sts_reg & 0xFF00) >> 8;
 if (VAR_7 >= VAR_0) {
  FUNC_2(VAR_6, "%s     bad context identifier: %d\n", VAR_1,
   VAR_7);
  goto out;
 }

 VAR_8 = VAR_5->instances[VAR_7];
 if (!VAR_8)
  goto out;

 if (VAR_5->lmi_err_reg) {
  FUNC_2(VAR_6, "%s     local memory interface error: 0x%08x\n",
   VAR_8->name, VAR_5->lmi_err_reg);
  VAR_8->hw_err = 1;
 }

 if (VAR_5->emi_err_reg) {
  FUNC_2(VAR_6, "%s     external memory interface error: 0x%08x\n",
   VAR_8->name, VAR_5->emi_err_reg);
  VAR_8->hw_err = 1;
 }

 if (VAR_5->hec_mif_err_reg) {
  FUNC_2(VAR_6, "%s     hec memory interface error: 0x%08x\n",
   VAR_8->name, VAR_5->hec_mif_err_reg);
  VAR_8->hw_err = 1;
 }
out:
 FUNC_0(&VAR_5->interrupt);

 return VAR_2;
}
