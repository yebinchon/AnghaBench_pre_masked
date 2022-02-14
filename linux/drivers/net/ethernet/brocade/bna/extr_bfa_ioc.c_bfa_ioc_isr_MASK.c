
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int cap_bm; int port_mode; } ;
struct TYPE_3__ {int msg_id; } ;
union bfi_ioc_i2h_msg_u {TYPE_2__ fw_event; TYPE_1__ mh; } ;
struct bfi_mbmsg {int dummy; } ;
struct bfa_iocpf {int dummy; } ;
struct bfa_ioc {struct bfa_iocpf iocpf; } ;
typedef enum bfa_mode { ____Placeholder_bfa_mode } bfa_mode ;






 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct bfa_iocpf*,int ) ;
 int FUNC_2 (struct bfa_ioc*,int,int ) ;
 int FUNC_3 (struct bfa_ioc*) ;
 int FUNC_4 (struct bfa_ioc*,int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_5(struct bfa_ioc *VAR_2, struct bfi_mbmsg *VAR_3)
{
 union bfi_ioc_i2h_msg_u *VAR_4;
 struct bfa_iocpf *VAR_5 = &VAR_2->iocpf;

 VAR_4 = (union bfi_ioc_i2h_msg_u *) VAR_3;

 FUNC_4(VAR_2, VAR_1);

 switch (VAR_4->mh.msg_id) {
 case 128:
  break;

 case 130:
  FUNC_2(VAR_2,
   (enum bfa_mode)VAR_4->fw_event.port_mode,
   VAR_4->fw_event.cap_bm);
  break;

 case 131:
  FUNC_1(VAR_5, VAR_0);
  break;

 case 129:
  FUNC_3(VAR_2);
  break;

 default:
  FUNC_0(1);
 }
}
