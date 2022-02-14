
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int msg_id; } ;
struct TYPE_3__ {int cap_bm; int port_mode; } ;
union bfi_ioc_i2h_msg_u {TYPE_2__ mh; TYPE_1__ fw_event; } ;
struct bfi_mbmsg_s {int dummy; } ;
struct bfa_iocpf_s {int dummy; } ;
struct bfa_ioc_s {int port_mode; int port_mode_cfg; int ad_cap_bm; struct bfa_iocpf_s iocpf; } ;
typedef enum bfa_mode_s { ____Placeholder_bfa_mode_s } bfa_mode_s ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct bfa_iocpf_s*,int ) ;
 int FUNC_2 (struct bfa_ioc_s*) ;
 int FUNC_3 (struct bfa_ioc_s*,int ) ;
 int FUNC_4 (struct bfa_ioc_s*,int) ;
 int VAR_2 ;

void
FUNC_5(struct bfa_ioc_s *VAR_3, struct bfi_mbmsg_s *VAR_4)
{
 union bfi_ioc_i2h_msg_u *VAR_5;
 struct bfa_iocpf_s *VAR_6 = &VAR_3->iocpf;

 VAR_5 = (union bfi_ioc_i2h_msg_u *) VAR_4;

 FUNC_3(VAR_3, VAR_2);

 switch (VAR_5->mh.msg_id) {
 case 128:
  break;

 case 130:
  VAR_3->port_mode = VAR_3->port_mode_cfg =
    (enum bfa_mode_s)VAR_5->fw_event.port_mode;
  VAR_3->ad_cap_bm = VAR_5->fw_event.cap_bm;
  FUNC_1(VAR_6, VAR_1);
  break;

 case 131:
  FUNC_1(VAR_6, VAR_0);
  break;

 case 129:
  FUNC_2(VAR_3);
  break;

 default:
  FUNC_4(VAR_3, VAR_5->mh.msg_id);
  FUNC_0(1);
 }
}
