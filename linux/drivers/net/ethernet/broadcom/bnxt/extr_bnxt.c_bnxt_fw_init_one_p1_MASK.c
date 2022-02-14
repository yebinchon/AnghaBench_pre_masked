
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnxt {int fw_cap; scalar_t__ hwrm_max_ext_req_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bnxt*) ;
 int FUNC_1 (struct bnxt*) ;
 int FUNC_2 (struct bnxt*) ;
 int FUNC_3 (struct bnxt*) ;
 int FUNC_4 (struct bnxt*) ;

__attribute__((used)) static int FUNC_5(struct bnxt *VAR_4)
{
 int VAR_5;

 VAR_4->fw_cap = 0;
 VAR_5 = FUNC_4(VAR_4);
 if (VAR_5)
  return VAR_5;

 if (VAR_4->fw_cap & VAR_0) {
  VAR_5 = FUNC_1(VAR_4);
  if (VAR_5)
   VAR_4->fw_cap &= ~VAR_0;
 }

 if ((VAR_4->fw_cap & VAR_1) ||
     VAR_4->hwrm_max_ext_req_len > VAR_2) {
  VAR_5 = FUNC_0(VAR_4);
  if (VAR_5)
   return VAR_5;
 }
 VAR_5 = FUNC_2(VAR_4);
 if (VAR_5)
  return -VAR_3;

 FUNC_3(VAR_4);
 return 0;
}
