
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qeth_reply {int dummy; } ;
struct TYPE_2__ {int return_code; } ;
struct qeth_ipa_cmd {TYPE_1__ hdr; } ;
struct qeth_card {int dummy; } ;


 int FUNC_0 (struct qeth_card*,int ) ;

__attribute__((used)) static int FUNC_1(struct qeth_card *VAR_0,
         struct qeth_reply *VAR_1,
         unsigned long VAR_2)
{
 struct qeth_ipa_cmd *VAR_3 = (struct qeth_ipa_cmd *) VAR_2;

 return FUNC_0(VAR_0, VAR_3->hdr.return_code);
}
