
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_ipa_info {int supported_funcs; } ;
typedef enum qeth_ipa_setadp_cmd { ____Placeholder_qeth_ipa_setadp_cmd } qeth_ipa_setadp_cmd ;



__attribute__((used)) static inline int FUNC_0(struct qeth_ipa_info *VAR_0,
  enum qeth_ipa_setadp_cmd VAR_1)
{
 return (VAR_0->supported_funcs & VAR_1);
}
