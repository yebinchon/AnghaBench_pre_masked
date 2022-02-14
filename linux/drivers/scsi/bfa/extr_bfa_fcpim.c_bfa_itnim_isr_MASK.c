
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


union bfi_itn_i2h_msg_u {TYPE_3__* sler_event; TYPE_2__* delete_rsp; TYPE_1__* create_rsp; struct bfi_msg_s* msg; } ;
struct TYPE_8__ {int msg_id; } ;
struct bfi_msg_s {TYPE_4__ mhdr; } ;
struct bfa_s {int dummy; } ;
struct bfa_itnim_s {int dummy; } ;
struct bfa_fcpim_s {int dummy; } ;
struct TYPE_7__ {int bfa_handle; } ;
struct TYPE_6__ {int status; int bfa_handle; } ;
struct TYPE_5__ {int status; int bfa_handle; } ;


 struct bfa_fcpim_s* FUNC_0 (struct bfa_s*) ;
 struct bfa_itnim_s* FUNC_1 (struct bfa_fcpim_s*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_2 (int) ;
 int FUNC_3 (struct bfa_itnim_s*,int ) ;
 int FUNC_4 (struct bfa_itnim_s*,int ) ;
 int FUNC_5 (struct bfa_s*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void
FUNC_6(struct bfa_s *VAR_6, struct bfi_msg_s *VAR_7)
{
 struct bfa_fcpim_s *VAR_8 = FUNC_0(VAR_6);
 union bfi_itn_i2h_msg_u VAR_9;
 struct bfa_itnim_s *VAR_10;

 FUNC_5(VAR_6, VAR_7->mhdr.msg_id);

 VAR_9.msg = VAR_7;

 switch (VAR_7->mhdr.msg_id) {
 case 130:
  VAR_10 = FUNC_1(VAR_8,
      VAR_9.create_rsp->bfa_handle);
  FUNC_2(VAR_9.create_rsp->status != VAR_2);
  FUNC_4(VAR_10, VAR_3);
  FUNC_3(VAR_10, VAR_0);
  break;

 case 129:
  VAR_10 = FUNC_1(VAR_8,
      VAR_9.delete_rsp->bfa_handle);
  FUNC_2(VAR_9.delete_rsp->status != VAR_2);
  FUNC_4(VAR_10, VAR_4);
  FUNC_3(VAR_10, VAR_0);
  break;

 case 128:
  VAR_10 = FUNC_1(VAR_8,
      VAR_9.sler_event->bfa_handle);
  FUNC_4(VAR_10, VAR_5);
  FUNC_3(VAR_10, VAR_1);
  break;

 default:
  FUNC_5(VAR_6, VAR_7->mhdr.msg_id);
  FUNC_2(1);
 }
}
