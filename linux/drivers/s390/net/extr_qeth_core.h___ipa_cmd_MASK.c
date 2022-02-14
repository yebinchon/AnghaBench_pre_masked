
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_ipa_cmd {int dummy; } ;
struct qeth_cmd_buffer {scalar_t__ data; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline struct qeth_ipa_cmd *FUNC_0(struct qeth_cmd_buffer *VAR_1)
{
 return (struct qeth_ipa_cmd *)(VAR_1->data + VAR_0);
}
