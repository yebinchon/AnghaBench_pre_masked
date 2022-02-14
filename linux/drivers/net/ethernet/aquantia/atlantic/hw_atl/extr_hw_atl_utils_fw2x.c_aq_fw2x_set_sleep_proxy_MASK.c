
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct offload_info {int len; int mac_addr; } ;
struct hw_atl_utils_fw_rpc {int msg_id; } ;
struct aq_hw_s {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct aq_hw_s*,int ) ;
 int FUNC_1 (struct aq_hw_s*,int ,int) ;
 int FUNC_2 (struct aq_hw_s*,unsigned int) ;
 int FUNC_3 (struct aq_hw_s*,struct hw_atl_utils_fw_rpc**) ;
 int FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (struct hw_atl_utils_fw_rpc*,int ,unsigned int) ;
 int FUNC_6 (int ,struct aq_hw_s*,int,int,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_7(struct aq_hw_s *VAR_5, u8 *VAR_6)
{
 struct hw_atl_utils_fw_rpc *VAR_7 = ((void*)0);
 struct offload_info *VAR_8 = ((void*)0);
 unsigned int VAR_9 = 0U;
 u32 VAR_10;
 int VAR_11 = 0;
 u32 VAR_12;

 VAR_9 = sizeof(VAR_7->msg_id) + sizeof(*VAR_8);

 VAR_11 = FUNC_3(VAR_5, &VAR_7);
 if (VAR_11 < 0)
  goto err_exit;

 FUNC_5(VAR_7, 0, VAR_9);
 VAR_8 = (struct offload_info *)(&VAR_7->msg_id + 1);

 FUNC_4(VAR_8->mac_addr, VAR_6, VAR_0);
 VAR_8->len = sizeof(*VAR_8);


 VAR_10 = FUNC_0(VAR_5, VAR_3);
 VAR_10 &= ~VAR_2;
 VAR_10 &= ~VAR_1;

 FUNC_1(VAR_5, VAR_3, VAR_10);

 VAR_11 = FUNC_2(VAR_5, VAR_9);
 if (VAR_11 < 0)
  goto err_exit;


 VAR_10 |= VAR_2;
 FUNC_1(VAR_5, VAR_3, VAR_10);

 VAR_11 = FUNC_6(VAR_4,
     VAR_5, VAR_12,
     VAR_12 & VAR_2,
     1U, 100000U);

err_exit:
 return VAR_11;
}
