
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct hw_atl_utils_fw_rpc {int dummy; } ;
struct aq_hw_s {scalar_t__ rpc_tid; struct hw_atl_utils_fw_rpc rpc; int rpc_addr; } ;
struct aq_hw_atl_utils_fw_rpc_tid_s {scalar_t__ tid; int len; int val; } ;


 int VAR_0 ;
 int FUNC_0 (struct aq_hw_s*,int ) ;
 int FUNC_1 (struct aq_hw_s*,int ,int *,int) ;
 int FUNC_2 (struct aq_hw_s*,int) ;
 int VAR_1 ;
 int FUNC_3 (int ,struct aq_hw_s*,int ,int,unsigned int,unsigned int) ;

int FUNC_4(struct aq_hw_s *VAR_2,
        struct hw_atl_utils_fw_rpc **VAR_3)
{
 int VAR_4 = 0;
 struct aq_hw_atl_utils_fw_rpc_tid_s VAR_5;
 struct aq_hw_atl_utils_fw_rpc_tid_s VAR_6;

 do {
  VAR_5.val = FUNC_0(VAR_2, VAR_0);

  VAR_2->rpc_tid = VAR_5.tid;

  VAR_4 = FUNC_3(VAR_1,
      VAR_2, VAR_6.val,
      VAR_5.tid == VAR_6.tid,
      1000U, 100000U);

  if (VAR_6.len == 0xFFFFU) {
   VAR_4 = FUNC_2(VAR_2, VAR_5.len);
   if (VAR_4 < 0)
    goto err_exit;
  }
 } while (VAR_5.tid != VAR_6.tid || 0xFFFFU == VAR_6.len);

 if (VAR_3) {
  if (VAR_6.len) {
   VAR_4 =
   FUNC_1(VAR_2,
            VAR_2->rpc_addr,
            (u32 *)(void *)
            &VAR_2->rpc,
            (VAR_6.len + sizeof(u32) -
             sizeof(u8)) /
            sizeof(u32));
   if (VAR_4 < 0)
    goto err_exit;
  }

  *VAR_3 = &VAR_2->rpc;
 }

err_exit:
 return VAR_4;
}
