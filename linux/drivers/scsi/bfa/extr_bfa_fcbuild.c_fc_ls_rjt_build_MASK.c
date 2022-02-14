
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
typedef int u32 ;
typedef int u16 ;
struct fchs_s {int dummy; } ;
struct TYPE_2__ {int els_code; } ;
struct fc_ls_rjt_s {int vendor_unique; void* reason_code_expl; void* reason_code; TYPE_1__ els_cmd; } ;
typedef int __be16 ;


 int VAR_0 ;
 int FUNC_0 (struct fchs_s*,int ,int ,int ) ;
 int FUNC_1 (struct fc_ls_rjt_s*,int ,int) ;

u16
FUNC_2(struct fchs_s *VAR_1, struct fc_ls_rjt_s *VAR_2, u32 VAR_3,
  u32 VAR_4, __be16 VAR_5, u8 VAR_6,
  u8 VAR_7)
{
 FUNC_0(VAR_1, VAR_3, VAR_4, VAR_5);
 FUNC_1(VAR_2, 0, sizeof(struct fc_ls_rjt_s));

 VAR_2->els_cmd.els_code = VAR_0;
 VAR_2->reason_code = VAR_6;
 VAR_2->reason_code_expl = VAR_7;
 VAR_2->vendor_unique = 0x00;

 return sizeof(struct fc_ls_rjt_s);
}
