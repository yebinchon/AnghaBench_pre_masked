
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
typedef int u16 ;
struct fchs_s {int dummy; } ;
struct fcgs_rftid_req_s {int dap; int * fc4_type; } ;
struct ct_hdr_s {int dummy; } ;
typedef enum bfa_lport_role { ____Placeholder_bfa_lport_role } bfa_lport_role ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ct_hdr_s*,int,int ) ;
 int FUNC_3 (struct fchs_s*,int,int,int) ;
 int FUNC_4 (struct fcgs_rftid_req_s*,int ,int) ;

u16
FUNC_5(struct fchs_s *VAR_3, void *VAR_4, u32 VAR_5, u16 VAR_6,
        enum bfa_lport_role VAR_7)
{
 struct ct_hdr_s *VAR_8 = (struct ct_hdr_s *) VAR_4;
 struct fcgs_rftid_req_s *VAR_9 = (struct fcgs_rftid_req_s *)(VAR_8 + 1);
 u32 VAR_10, VAR_11 = FUNC_0(VAR_0);
 u8 VAR_12;

 FUNC_3(VAR_3, VAR_11, VAR_5, VAR_6);
 FUNC_2(VAR_8, VAR_5, VAR_2);

 FUNC_4(VAR_9, 0, sizeof(struct fcgs_rftid_req_s));

 VAR_9->dap = VAR_5;


 VAR_12 = VAR_1 >> 5;
 VAR_10 = 1 << (VAR_1 % 32);
 VAR_9->fc4_type[VAR_12] = FUNC_1(VAR_10);

 return sizeof(struct fcgs_rftid_req_s) + sizeof(struct ct_hdr_s);
}
