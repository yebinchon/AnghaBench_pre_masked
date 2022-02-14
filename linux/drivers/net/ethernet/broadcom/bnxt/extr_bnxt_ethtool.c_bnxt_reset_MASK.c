
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct net_device {int dummy; } ;
struct bnxt {int hwrm_spec_code; int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bnxt*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (struct net_device*,char*) ;
 int FUNC_3 (struct net_device*,char*) ;
 struct bnxt* FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_7, u32 *VAR_8)
{
 struct bnxt *VAR_9 = FUNC_4(VAR_7);
 int VAR_10 = 0;

 if (!FUNC_0(VAR_9)) {
  FUNC_2(VAR_7, "Reset is not supported from a VF\n");
  return -VAR_4;
 }

 if (FUNC_5(VAR_9->pdev)) {
  FUNC_2(VAR_7,
      "Reset not allowed when VFs are assigned to VMs\n");
  return -VAR_2;
 }

 if (*VAR_8 == VAR_5) {

  if (VAR_9->hwrm_spec_code < 0x10803)
   return -VAR_4;

  VAR_10 = FUNC_1(VAR_7, VAR_1);
  if (!VAR_10) {
   FUNC_3(VAR_7, "Reset request successful. Reload driver to complete reset\n");
   *VAR_8 = 0;
  }
 } else if (*VAR_8 == VAR_6) {

  if (VAR_9->hwrm_spec_code < 0x10803)
   return -VAR_4;

  VAR_10 = FUNC_1(VAR_7, VAR_0);
  if (!VAR_10) {
   FUNC_3(VAR_7, "Reset Application Processor request successful.\n");
   *VAR_8 = 0;
  }
 } else {
  VAR_10 = -VAR_3;
 }

 return VAR_10;
}
