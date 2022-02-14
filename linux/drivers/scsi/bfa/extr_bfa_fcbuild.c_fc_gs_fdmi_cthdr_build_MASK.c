
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct ct_hdr_s {int cmd_rsp_code; int gs_sub_type; int gs_type; int rev_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ct_hdr_s*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct ct_hdr_s *VAR_3, u32 VAR_4, u16 VAR_5)
{
 FUNC_1(VAR_3, 0, sizeof(struct ct_hdr_s));
 VAR_3->rev_id = VAR_0;
 VAR_3->gs_type = VAR_2;
 VAR_3->gs_sub_type = VAR_1;
 VAR_3->cmd_rsp_code = FUNC_0(VAR_5);
}
