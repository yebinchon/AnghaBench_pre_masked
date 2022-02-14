
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u16 ;
struct hinic_pf_to_mgmt {int sync_msg_buf; struct hinic_api_cmd_chain** cmd_chain; } ;
struct hinic_api_cmd_chain {int dummy; } ;
typedef enum msg_ack_type { ____Placeholder_msg_ack_type } msg_ack_type ;
typedef enum mgmt_direction_type { ____Placeholder_mgmt_direction_type } mgmt_direction_type ;
typedef enum hinic_mod_type { ____Placeholder_hinic_mod_type } hinic_mod_type ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hinic_pf_to_mgmt*) ;
 int FUNC_1 (struct hinic_pf_to_mgmt*) ;
 int FUNC_2 (struct hinic_api_cmd_chain*,int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct hinic_pf_to_mgmt*,int ,int,int,int,int ,int ) ;
 int FUNC_5 (int ,int *,int *,int ) ;

__attribute__((used)) static int FUNC_6(struct hinic_pf_to_mgmt *VAR_3,
       enum hinic_mod_type VAR_4, u8 VAR_5,
       u8 *VAR_6, u16 VAR_7,
       enum msg_ack_type VAR_8,
       enum mgmt_direction_type VAR_9,
       u16 VAR_10)
{
 struct hinic_api_cmd_chain *VAR_11;
 u64 VAR_12;
 u16 VAR_13;

 VAR_13 = FUNC_0(VAR_3);

 if (VAR_9 == VAR_2) {
  VAR_12 = FUNC_4(VAR_3, VAR_7, VAR_4, VAR_8,
     VAR_9, VAR_5, VAR_10);
 } else {
  FUNC_1(VAR_3);
  VAR_12 = FUNC_4(VAR_3, VAR_7, VAR_4, VAR_8,
     VAR_9, VAR_5, VAR_13);
 }

 FUNC_5(VAR_3->sync_msg_buf, &VAR_12, VAR_6, VAR_7);

 VAR_11 = VAR_3->cmd_chain[VAR_0];
 return FUNC_2(VAR_11, VAR_1,
       VAR_3->sync_msg_buf,
       FUNC_3(VAR_7));
}
