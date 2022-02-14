
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct hw_atl_utils_mbox_header {scalar_t__ transaction_id; } ;
struct aq_hw_s {int dummy; } ;
typedef enum hal_atl_utils_fw_state_e { ____Placeholder_hal_atl_utils_fw_state_e } hal_atl_utils_fw_state_e ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct aq_hw_s*,int ) ;
 int FUNC_1 (struct aq_hw_s*,int ,scalar_t__) ;
 int VAR_6 ;
 int FUNC_2 (struct aq_hw_s*,struct hw_atl_utils_mbox_header*) ;
 int FUNC_3 (int ,struct aq_hw_s*,scalar_t__,int,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct aq_hw_s *VAR_7,
          enum hal_atl_utils_fw_state_e VAR_8)
{
 int VAR_9 = 0;
 u32 VAR_10 = 0;
 struct hw_atl_utils_mbox_header VAR_11;
 u32 VAR_12 = FUNC_0(VAR_7, VAR_0);

 if (VAR_8 == VAR_5) {
  FUNC_2(VAR_7, &VAR_11);

  VAR_10 = VAR_11.transaction_id;

  VAR_9 = FUNC_3(VAR_6,
      VAR_7, VAR_11.transaction_id,
      VAR_10 !=
      VAR_11.transaction_id,
      1000U, 100000U);
  if (VAR_9 < 0)
   goto err_exit;
 }



 if (VAR_8 == VAR_3 || VAR_8 == VAR_4)
  VAR_12 |= VAR_1;
 else
  VAR_12 &= ~VAR_1;


 VAR_12 = VAR_12 & ~VAR_2;
 VAR_12 |= VAR_8 & VAR_2;

 FUNC_1(VAR_7, VAR_0, VAR_12);
err_exit:
 return VAR_9;
}
