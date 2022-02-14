
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnxt {int hwrm_spec_code; int fw_cap; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct bnxt*) ;
 int FUNC_1 (struct bnxt*) ;
 int FUNC_2 (struct bnxt*,int) ;
 int FUNC_3 (struct bnxt*) ;
 int FUNC_4 (int ,char*,int) ;

__attribute__((used)) static int FUNC_5(struct bnxt *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2)
  return VAR_2;
 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2) {
  FUNC_4(VAR_1->dev, "hwrm query qportcfg failure rc: %d\n", VAR_2);
  return VAR_2;
 }
 if (VAR_1->hwrm_spec_code >= 0x10803) {
  VAR_2 = FUNC_1(VAR_1);
  if (VAR_2)
   return VAR_2;
  VAR_2 = FUNC_2(VAR_1, 1);
  if (!VAR_2)
   VAR_1->fw_cap |= VAR_0;
 }
 return 0;
}
