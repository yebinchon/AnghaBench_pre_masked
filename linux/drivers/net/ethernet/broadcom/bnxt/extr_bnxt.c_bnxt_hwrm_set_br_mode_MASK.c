
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct hwrm_func_cfg_input {int evb_mode; int enables; int fid; int member_0; } ;
struct bnxt {int dummy; } ;
typedef int req ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct bnxt*,struct hwrm_func_cfg_input*,int ,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct bnxt*,struct hwrm_func_cfg_input*,int,int ) ;

__attribute__((used)) static int FUNC_4(struct bnxt *VAR_8, u16 VAR_9)
{
 struct hwrm_func_cfg_input VAR_10 = {0};
 int VAR_11;

 FUNC_0(VAR_8, &VAR_10, VAR_7, -1, -1);
 VAR_10.fid = FUNC_1(0xffff);
 VAR_10.enables = FUNC_2(VAR_3);
 if (VAR_9 == VAR_0)
  VAR_10.evb_mode = VAR_4;
 else if (VAR_9 == VAR_1)
  VAR_10.evb_mode = VAR_5;
 else
  return -VAR_2;
 VAR_11 = FUNC_3(VAR_8, &VAR_10, sizeof(VAR_10), VAR_6);
 return VAR_11;
}
