
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_nfc_clk {int nfi_clk; int pad_clk; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, struct mtk_nfc_clk *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_1->nfi_clk);
 if (VAR_2) {
  FUNC_2(VAR_0, "failed to enable nfi clk\n");
  return VAR_2;
 }

 VAR_2 = FUNC_1(VAR_1->pad_clk);
 if (VAR_2) {
  FUNC_2(VAR_0, "failed to enable pad clk\n");
  FUNC_0(VAR_1->nfi_clk);
  return VAR_2;
 }

 return 0;
}
