
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hw_atl_utils_mbox_header {int transaction_id; } ;
struct aq_hw_s {int dummy; } ;


 int FUNC_0 (struct aq_hw_s*,struct hw_atl_utils_mbox_header*) ;

__attribute__((used)) static u32 FUNC_1(struct aq_hw_s *VAR_0)
{
 struct hw_atl_utils_mbox_header VAR_1;

 FUNC_0(VAR_0, &VAR_1);

 return VAR_1.transaction_id;
}
