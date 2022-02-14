
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct qlcnic_vf_info {int adapter; } ;
struct qlcnic_bc_trans {scalar_t__ func_id; scalar_t__ curr_rsp_frag; int rsp_pay_size; scalar_t__ rsp_pay; scalar_t__ rsp_hdr; scalar_t__ curr_req_frag; int req_pay_size; scalar_t__ req_pay; scalar_t__ req_hdr; struct qlcnic_vf_info* vf; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct qlcnic_vf_info*) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,int*,int*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_3(struct qlcnic_bc_trans *VAR_2, u8 VAR_3)
{
 struct qlcnic_vf_info *VAR_4 = VAR_2->vf;
 u32 VAR_5;
 u32 *VAR_6, *VAR_7;
 int VAR_8;
 u8 VAR_9 = VAR_2->func_id;

 if (FUNC_0(VAR_4))
  return -VAR_0;

 if (VAR_3 == VAR_1) {
  VAR_6 = (u32 *)(VAR_2->req_hdr + VAR_2->curr_req_frag);
  VAR_7 = (u32 *)(VAR_2->req_pay + VAR_2->curr_req_frag);
  VAR_5 = FUNC_1(VAR_2->req_pay_size,
             VAR_2->curr_req_frag);
  VAR_5 = (VAR_5 / sizeof(u32));
 } else {
  VAR_6 = (u32 *)(VAR_2->rsp_hdr + VAR_2->curr_rsp_frag);
  VAR_7 = (u32 *)(VAR_2->rsp_pay + VAR_2->curr_rsp_frag);
  VAR_5 = FUNC_1(VAR_2->rsp_pay_size,
             VAR_2->curr_rsp_frag);
  VAR_5 = (VAR_5 / sizeof(u32));
 }

 VAR_8 = FUNC_2(VAR_4->adapter, VAR_6, VAR_7,
           VAR_9, VAR_5);
 return VAR_8;
}
