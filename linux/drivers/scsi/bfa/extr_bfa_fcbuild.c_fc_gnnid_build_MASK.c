
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct fchs_s {int dummy; } ;
struct ct_hdr_s {int dummy; } ;
struct TYPE_3__ {int dap; } ;
typedef TYPE_1__ fcgs_gnnid_req_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ct_hdr_s*,int ,int ) ;
 int FUNC_2 (struct fchs_s*,int ,int ,int) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;

u16
FUNC_4(struct fchs_s *VAR_2, void *VAR_3, u32 VAR_4, u16 VAR_5,
        u32 VAR_6)
{
 struct ct_hdr_s *VAR_7 = (struct ct_hdr_s *) VAR_3;
 fcgs_gnnid_req_t *VAR_8 = (fcgs_gnnid_req_t *) (VAR_7 + 1);
 u32 VAR_9 = FUNC_0(VAR_0);

 FUNC_2(VAR_2, VAR_9, VAR_4, VAR_5);
 FUNC_1(VAR_7, VAR_4, VAR_1);

 FUNC_3(VAR_8, 0, sizeof(fcgs_gnnid_req_t));
 VAR_8->dap = VAR_6;
 return sizeof(fcgs_gnnid_req_t) + sizeof(struct ct_hdr_s);
}
