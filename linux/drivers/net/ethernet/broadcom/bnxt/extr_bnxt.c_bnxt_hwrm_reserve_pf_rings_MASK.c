
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hwrm_func_cfg_input {int enables; int member_0; } ;
struct TYPE_2__ {int resv_tx_rings; } ;
struct bnxt {int hwrm_spec_code; TYPE_1__ hw_resc; } ;
typedef int req ;


 int VAR_0 ;
 int FUNC_0 (struct bnxt*,struct hwrm_func_cfg_input*,int,int,int,int,int,int) ;
 int FUNC_1 (struct bnxt*) ;
 int FUNC_2 (struct bnxt*,struct hwrm_func_cfg_input*,int,int ) ;

__attribute__((used)) static int
FUNC_3(struct bnxt *VAR_1, int VAR_2, int VAR_3,
      int VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
 struct hwrm_func_cfg_input VAR_8 = {0};
 int VAR_9;

 FUNC_0(VAR_1, &VAR_8, VAR_2, VAR_3, VAR_4,
         VAR_5, VAR_6, VAR_7);
 if (!VAR_8.enables)
  return 0;

 VAR_9 = FUNC_2(VAR_1, &VAR_8, sizeof(VAR_8), VAR_0);
 if (VAR_9)
  return VAR_9;

 if (VAR_1->hwrm_spec_code < 0x10601)
  VAR_1->hw_resc.resv_tx_rings = VAR_2;

 VAR_9 = FUNC_1(VAR_1);
 return VAR_9;
}
