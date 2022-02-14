
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct qeth_card {int dummy; } ;
typedef enum qeth_ipa_cmds { ____Placeholder_qeth_ipa_cmds } qeth_ipa_cmds ;


 int FUNC_0 (struct qeth_card*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct qeth_card*,int,char*) ;
 int FUNC_2 (int,char*,int ,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct qeth_card*,int *,int) ;

__attribute__((used)) static int FUNC_5(struct qeth_card *VAR_2, u8 *VAR_3)
{
 enum qeth_ipa_cmds VAR_4 = FUNC_3(VAR_3) ?
     VAR_0 : VAR_1;
 int VAR_5;

 FUNC_1(VAR_2, 2, "L2Rmac");
 VAR_5 = FUNC_4(VAR_2, VAR_3, VAR_4);
 if (VAR_5)
  FUNC_2(2, "Failed to delete MAC on device %u: %d\n",
     FUNC_0(VAR_2), VAR_5);
 return VAR_5;
}
