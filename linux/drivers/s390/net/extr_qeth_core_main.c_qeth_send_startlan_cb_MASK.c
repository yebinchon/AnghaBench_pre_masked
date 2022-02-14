
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qeth_reply {int dummy; } ;
struct TYPE_2__ {scalar_t__ return_code; } ;
struct qeth_ipa_cmd {TYPE_1__ hdr; } ;
struct qeth_card {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_0(struct qeth_card *VAR_3,
     struct qeth_reply *VAR_4, unsigned long VAR_5)
{
 struct qeth_ipa_cmd *VAR_6 = (struct qeth_ipa_cmd *) VAR_5;

 if (VAR_6->hdr.return_code == VAR_2)
  return -VAR_1;

 return (VAR_6->hdr.return_code) ? -VAR_0 : 0;
}
