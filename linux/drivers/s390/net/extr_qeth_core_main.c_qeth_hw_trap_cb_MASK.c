
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct qeth_reply {int dummy; } ;
struct TYPE_2__ {scalar_t__ return_code; } ;
struct qeth_ipa_cmd {TYPE_1__ hdr; } ;
struct qeth_card {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct qeth_card*,int,char*,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct qeth_card *VAR_1,
  struct qeth_reply *VAR_2, unsigned long VAR_3)
{
 struct qeth_ipa_cmd *VAR_4 = (struct qeth_ipa_cmd *) VAR_3;
 u16 VAR_5 = VAR_4->hdr.return_code;

 if (VAR_5) {
  FUNC_0(VAR_1, 2, "trapc:%x", VAR_5);
  return -VAR_0;
 }
 return 0;
}
