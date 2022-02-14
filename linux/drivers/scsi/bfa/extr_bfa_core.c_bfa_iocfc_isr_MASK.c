
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int msg_id; } ;
union bfi_iocfc_i2h_msg_u {TYPE_1__ mh; } ;
struct bfi_mbmsg_s {int dummy; } ;
struct bfi_faa_addr_msg_s {int dummy; } ;
struct bfa_iocfc_s {int updateq_cbarg; int (* updateq_cbfn ) (int ,int ) ;} ;
struct bfa_s {struct bfa_iocfc_s iocfc; } ;
typedef int bfi_faa_query_rsp_t ;


 int VAR_0 ;




 int FUNC_0 (int) ;
 int FUNC_1 (struct bfa_iocfc_s*,int *) ;
 int FUNC_2 (struct bfa_s*) ;
 int FUNC_3 (struct bfa_s*,struct bfi_faa_addr_msg_s*) ;
 int FUNC_4 (struct bfa_s*,int) ;
 int FUNC_5 (int ,int ) ;

void
FUNC_6(void *VAR_1, struct bfi_mbmsg_s *VAR_2)
{
 struct bfa_s *VAR_3 = VAR_1;
 struct bfa_iocfc_s *VAR_4 = &VAR_3->iocfc;
 union bfi_iocfc_i2h_msg_u *VAR_5;

 VAR_5 = (union bfi_iocfc_i2h_msg_u *) VAR_2;
 FUNC_4(VAR_3, VAR_5->mh.msg_id);

 switch (VAR_5->mh.msg_id) {
 case 130:
  FUNC_2(VAR_3);
  break;
 case 128:
  VAR_4->updateq_cbfn(VAR_4->updateq_cbarg, VAR_0);
  break;
 case 131:
  FUNC_3(VAR_3,
    (struct bfi_faa_addr_msg_s *)VAR_5);
  break;
 case 129:
  FUNC_1(VAR_4, (bfi_faa_query_rsp_t *)VAR_5);
  break;
 default:
  FUNC_0(1);
 }
}
