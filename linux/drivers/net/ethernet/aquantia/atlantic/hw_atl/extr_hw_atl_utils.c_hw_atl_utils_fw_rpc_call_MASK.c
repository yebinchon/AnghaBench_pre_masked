
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct aq_hw_s {int rpc_tid; int rpc; int rpc_addr; } ;
struct aq_hw_atl_utils_fw_rpc_tid_s {int tid; int val; scalar_t__ len; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct aq_hw_s*,int ,int ) ;
 int FUNC_2 (struct aq_hw_s*,int ,int *,unsigned int) ;

int FUNC_3(struct aq_hw_s *VAR_2, unsigned int VAR_3)
{
 int VAR_4 = 0;
 struct aq_hw_atl_utils_fw_rpc_tid_s VAR_5;

 if (!FUNC_0(VAR_1)) {
  VAR_4 = -1;
  goto err_exit;
 }
 VAR_4 = FUNC_2(VAR_2, VAR_2->rpc_addr,
         (u32 *)(void *)&VAR_2->rpc,
         (VAR_3 + sizeof(u32) -
          sizeof(u8)) / sizeof(u32));
 if (VAR_4 < 0)
  goto err_exit;

 VAR_5.tid = 0xFFFFU & (++VAR_2->rpc_tid);
 VAR_5.len = (u16)VAR_3;
 FUNC_1(VAR_2, VAR_0, VAR_5.val);

err_exit:
 return VAR_4;
}
