
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct pfvf_general_resp_tlv {int dummy; } ;
struct pfvf_acquire_resp_tlv {int dummy; } ;
struct channel_list_end_tlv {int dummy; } ;
struct bnx2x_virtf {int index; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct TYPE_5__ {TYPE_1__ tl; } ;
struct bnx2x_vf_mbx {TYPE_3__* msg; TYPE_2__ first_tlv; } ;
struct bnx2x {int dummy; } ;
struct TYPE_6__ {int resp; } ;


 struct bnx2x_vf_mbx* FUNC_0 (struct bnx2x*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct bnx2x*,int *,scalar_t__,scalar_t__,int) ;

__attribute__((used)) static void FUNC_2(struct bnx2x *VAR_2,
      struct bnx2x_virtf *VAR_3)
{
 struct bnx2x_vf_mbx *VAR_4 = FUNC_0(VAR_2, VAR_3->index);
 u16 VAR_5, VAR_6;


 VAR_6 = VAR_4->first_tlv.tl.type;
 VAR_5 = VAR_6 == VAR_0 ?
  sizeof(struct pfvf_acquire_resp_tlv) :
  sizeof(struct pfvf_general_resp_tlv);
 FUNC_1(VAR_2, &VAR_4->msg->resp, 0, VAR_6, VAR_5);
 FUNC_1(VAR_2, &VAR_4->msg->resp, VAR_5, VAR_1,
        sizeof(struct channel_list_end_tlv));
}
