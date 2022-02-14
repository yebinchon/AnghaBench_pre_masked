
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u16 ;
struct hinic_pf_to_mgmt {struct hinic_hwif* hwif; } ;
struct hinic_hwif {int dummy; } ;
typedef enum msg_ack_type { ____Placeholder_msg_ack_type } msg_ack_type ;
typedef enum mgmt_direction_type { ____Placeholder_mgmt_direction_type } mgmt_direction_type ;
typedef enum hinic_mod_type { ____Placeholder_hinic_mod_type } hinic_mod_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hinic_hwif*) ;
 int FUNC_1 (struct hinic_hwif*) ;
 int FUNC_2 (int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static u64 FUNC_3(struct hinic_pf_to_mgmt *VAR_14,
     u16 VAR_15, enum hinic_mod_type VAR_16,
     enum msg_ack_type VAR_17,
     enum mgmt_direction_type VAR_18,
     u16 VAR_19, u16 VAR_20)
{
 struct hinic_hwif *VAR_21 = VAR_14->hwif;

 return FUNC_2(VAR_15, VAR_7) |
        FUNC_2(VAR_16, VAR_5) |
        FUNC_2(VAR_11, VAR_12) |
        FUNC_2(VAR_17, VAR_8) |
        FUNC_2(0, VAR_0) |
        FUNC_2(0, VAR_13) |
        FUNC_2(VAR_4, VAR_3) |
        FUNC_2(VAR_18, VAR_2) |
        FUNC_2(VAR_19, VAR_1) |
        FUNC_2(FUNC_0(VAR_21), VAR_9) |
        FUNC_2(FUNC_1(VAR_21), VAR_10) |
        FUNC_2(VAR_20, VAR_6);
}
