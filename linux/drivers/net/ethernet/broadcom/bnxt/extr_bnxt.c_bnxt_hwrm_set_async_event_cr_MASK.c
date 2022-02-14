
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hwrm_func_vf_cfg_input {void* async_event_cr; void* enables; int member_0; void* fid; } ;
struct hwrm_func_cfg_input {void* async_event_cr; void* enables; int member_0; void* fid; } ;
struct bnxt {int dummy; } ;
typedef int req ;


 scalar_t__ FUNC_0 (struct bnxt*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct bnxt*,struct hwrm_func_vf_cfg_input*,int ,int,int) ;
 void* FUNC_2 (int) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (struct bnxt*,struct hwrm_func_vf_cfg_input*,int,int ) ;

__attribute__((used)) static int FUNC_5(struct bnxt *VAR_5, int VAR_6)
{
 int VAR_7;

 if (FUNC_0(VAR_5)) {
  struct hwrm_func_cfg_input VAR_8 = {0};

  FUNC_1(VAR_5, &VAR_8, VAR_3, -1, -1);
  VAR_8.fid = FUNC_2(0xffff);
  VAR_8.enables = FUNC_3(VAR_0);
  VAR_8.async_event_cr = FUNC_2(VAR_6);
  VAR_7 = FUNC_4(VAR_5, &VAR_8, sizeof(VAR_8), VAR_2);
 } else {
  struct hwrm_func_vf_cfg_input VAR_9 = {0};

  FUNC_1(VAR_5, &VAR_9, VAR_4, -1, -1);
  VAR_9.enables =
   FUNC_3(VAR_1);
  VAR_9.async_event_cr = FUNC_2(VAR_6);
  VAR_7 = FUNC_4(VAR_5, &VAR_9, sizeof(VAR_9), VAR_2);
 }
 return VAR_7;
}
