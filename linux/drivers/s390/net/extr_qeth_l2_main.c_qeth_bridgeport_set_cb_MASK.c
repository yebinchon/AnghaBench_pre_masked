
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_reply {int dummy; } ;
struct qeth_ipa_cmd {int dummy; } ;
struct qeth_card {int dummy; } ;


 int FUNC_0 (struct qeth_card*,int,char*) ;
 int FUNC_1 (struct qeth_card*,struct qeth_ipa_cmd*) ;

__attribute__((used)) static int FUNC_2(struct qeth_card *VAR_0,
 struct qeth_reply *VAR_1, unsigned long VAR_2)
{
 struct qeth_ipa_cmd *VAR_3 = (struct qeth_ipa_cmd *)VAR_2;

 FUNC_0(VAR_0, 2, "brsetrcb");
 return FUNC_1(VAR_0, VAR_3);
}
