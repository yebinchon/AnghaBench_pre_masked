
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef int u32 ;
typedef int u16 ;
struct fchs_s {int dummy; } ;
struct ct_hdr_s {void* exp_code; void* reason_code; int rev_id; int cmd_rsp_code; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct fchs_s*,int ,int ,int) ;

u16
FUNC_2(struct fchs_s *VAR_2, struct ct_hdr_s *VAR_3,
  u32 VAR_4, u32 VAR_5, u16 VAR_6, u8 VAR_7,
  u8 VAR_8)
{
 FUNC_1(VAR_2, VAR_4, VAR_5, VAR_6);

 VAR_3->cmd_rsp_code = FUNC_0(VAR_1);
 VAR_3->rev_id = VAR_0;

 VAR_3->reason_code = VAR_7;
 VAR_3->exp_code = VAR_8;
 return sizeof(struct ct_hdr_s);
}
