
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct hw_atl_utils_fw_rpc {int dummy; } ;
struct fw2x_msg_wol {int magic_packet_enabled; int hw_addr; int msg_id; } ;
struct aq_hw_s {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct aq_hw_s*,int ) ;
 int FUNC_1 (struct aq_hw_s*,int ,int) ;
 int FUNC_2 (struct aq_hw_s*,int) ;
 int FUNC_3 (struct aq_hw_s*,struct hw_atl_utils_fw_rpc**) ;
 int FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (struct fw2x_msg_wol*,int ,int) ;
 int FUNC_6 (int ,struct aq_hw_s*,int,int,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_7(struct aq_hw_s *VAR_6, u8 *VAR_7)
{
 struct hw_atl_utils_fw_rpc *VAR_8 = ((void*)0);
 struct fw2x_msg_wol *VAR_9 = ((void*)0);
 u32 VAR_10;
 int VAR_11 = 0;
 u32 VAR_12;

 VAR_11 = FUNC_3(VAR_6, &VAR_8);
 if (VAR_11 < 0)
  goto err_exit;

 VAR_9 = (struct fw2x_msg_wol *)VAR_8;

 FUNC_5(VAR_9, 0, sizeof(*VAR_9));

 VAR_9->msg_id = VAR_1;
 VAR_9->magic_packet_enabled = 1;
 FUNC_4(VAR_9->hw_addr, VAR_7, VAR_0);

 VAR_10 = FUNC_0(VAR_6, VAR_4);
 VAR_10 &= ~(VAR_2 | VAR_3);

 FUNC_1(VAR_6, VAR_4, VAR_10);

 VAR_11 = FUNC_2(VAR_6, sizeof(*VAR_9));
 if (VAR_11 < 0)
  goto err_exit;


 VAR_10 |= VAR_3;
 FUNC_1(VAR_6, VAR_4, VAR_10);

 VAR_11 = FUNC_6(VAR_5,
     VAR_6, VAR_12, VAR_12 & VAR_3,
     1U, 10000U);

err_exit:
 return VAR_11;
}
