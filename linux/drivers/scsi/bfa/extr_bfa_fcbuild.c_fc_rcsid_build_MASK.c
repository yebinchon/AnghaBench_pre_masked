
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
typedef int u16 ;
struct fchs_s {int dummy; } ;
struct fcgs_rcsid_req_s {void* cos; void* port_id; } ;
struct ct_hdr_s {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct ct_hdr_s*,void*,int ) ;
 int FUNC_2 (struct fchs_s*,void*,void*,int ) ;
 int FUNC_3 (struct fcgs_rcsid_req_s*,int ,int) ;

u16
FUNC_4(struct fchs_s *VAR_2, void *VAR_3, u32 VAR_4, u32 VAR_5,
        u32 VAR_6)
{
 struct ct_hdr_s *VAR_7 = (struct ct_hdr_s *) VAR_3;
 struct fcgs_rcsid_req_s *VAR_8 =
   (struct fcgs_rcsid_req_s *) (VAR_7 + 1);
 u32 VAR_9 = FUNC_0(VAR_0);

 FUNC_2(VAR_2, VAR_9, VAR_4, 0);
 FUNC_1(VAR_7, VAR_4, VAR_1);

 FUNC_3(VAR_8, 0, sizeof(struct fcgs_rcsid_req_s));
 VAR_8->port_id = VAR_5;
 VAR_8->cos = VAR_6;

 return sizeof(struct fcgs_rcsid_req_s) + sizeof(struct ct_hdr_s);
}
