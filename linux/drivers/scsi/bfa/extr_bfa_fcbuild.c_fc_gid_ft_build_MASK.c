
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct fchs_s {int dummy; } ;
struct fcgs_gidft_req_s {scalar_t__ area_id; scalar_t__ domain_id; int fc4_type; } ;
struct ct_hdr_s {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ct_hdr_s*,int ,int ) ;
 int FUNC_2 (struct fchs_s*,int ,int ,int ) ;
 int FUNC_3 (struct fcgs_gidft_req_s*,int ,int) ;

u16
FUNC_4(struct fchs_s *VAR_2, void *VAR_3, u32 VAR_4, u8 VAR_5)
{

 struct ct_hdr_s *VAR_6 = (struct ct_hdr_s *) VAR_3;
 struct fcgs_gidft_req_s *VAR_7 = (struct fcgs_gidft_req_s *)(VAR_6 + 1);
 u32 VAR_8 = FUNC_0(VAR_0);

 FUNC_2(VAR_2, VAR_8, VAR_4, 0);

 FUNC_1(VAR_6, VAR_4, VAR_1);

 FUNC_3(VAR_7, 0, sizeof(struct fcgs_gidft_req_s));
 VAR_7->fc4_type = VAR_5;
 VAR_7->domain_id = 0;
 VAR_7->area_id = 0;

 return sizeof(struct fcgs_gidft_req_s) + sizeof(struct ct_hdr_s);
}
