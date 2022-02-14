
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

__attribute__((used)) static int FUNC_0(struct qeth_card *VAR_1,
    struct qeth_reply *VAR_2, unsigned long VAR_3)
{
 struct qeth_ipa_cmd *VAR_4 = (struct qeth_ipa_cmd *) VAR_3;

 return (VAR_4->hdr.return_code) ? -VAR_0 : 0;
}
