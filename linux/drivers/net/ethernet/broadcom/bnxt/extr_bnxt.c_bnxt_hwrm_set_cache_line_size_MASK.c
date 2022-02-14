
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hwrm_func_cfg_input {int options; int enables; int fid; int member_0; } ;
struct bnxt {int hwrm_spec_code; } ;
typedef int req ;


 scalar_t__ FUNC_0 (struct bnxt*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct bnxt*,struct hwrm_func_cfg_input*,int ,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct bnxt*,struct hwrm_func_cfg_input*,int,int ) ;

__attribute__((used)) static int FUNC_5(struct bnxt *VAR_5, int VAR_6)
{
 struct hwrm_func_cfg_input VAR_7 = {0};
 int VAR_8;

 if (FUNC_0(VAR_5) || VAR_5->hwrm_spec_code < 0x10803)
  return 0;

 FUNC_1(VAR_5, &VAR_7, VAR_4, -1, -1);
 VAR_7.fid = FUNC_2(0xffff);
 VAR_7.enables = FUNC_3(VAR_0);
 VAR_7.options = VAR_2;
 if (VAR_6 == 128)
  VAR_7.options = VAR_1;

 VAR_8 = FUNC_4(VAR_5, &VAR_7, sizeof(VAR_7), VAR_3);
 return VAR_8;
}
