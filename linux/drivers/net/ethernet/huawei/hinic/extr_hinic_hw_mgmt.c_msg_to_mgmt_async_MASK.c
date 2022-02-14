
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct hinic_pf_to_mgmt {int sync_msg_lock; } ;
typedef enum mgmt_direction_type { ____Placeholder_mgmt_direction_type } mgmt_direction_type ;
typedef enum hinic_mod_type { ____Placeholder_hinic_mod_type } hinic_mod_type ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct hinic_pf_to_mgmt*,int,int ,int *,int ,int ,int,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct hinic_pf_to_mgmt *VAR_1,
        enum hinic_mod_type VAR_2, u8 VAR_3,
        u8 *VAR_4, u16 VAR_5,
        enum mgmt_direction_type VAR_6,
        u16 VAR_7)
{
 int VAR_8;


 FUNC_0(&VAR_1->sync_msg_lock);

 VAR_8 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
          VAR_0, VAR_6, VAR_7);

 FUNC_2(&VAR_1->sync_msg_lock);
 return VAR_8;
}
