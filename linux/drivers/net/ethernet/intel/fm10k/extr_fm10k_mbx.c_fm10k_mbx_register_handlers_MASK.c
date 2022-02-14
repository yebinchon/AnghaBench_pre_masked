
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fm10k_msg_data {int dummy; } ;
struct fm10k_mbx_info {struct fm10k_msg_data const* msg_data; } ;
typedef int s32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct fm10k_msg_data const*) ;

__attribute__((used)) static s32 FUNC_1(struct fm10k_mbx_info *VAR_1,
           const struct fm10k_msg_data *VAR_2)
{

 if (FUNC_0(VAR_2))
  return VAR_0;


 VAR_1->msg_data = VAR_2;

 return 0;
}
