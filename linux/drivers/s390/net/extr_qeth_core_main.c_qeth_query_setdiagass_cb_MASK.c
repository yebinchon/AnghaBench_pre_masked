
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct qeth_reply {int dummy; } ;
struct TYPE_7__ {int ext; } ;
struct TYPE_8__ {TYPE_3__ diagass; } ;
struct TYPE_5__ {scalar_t__ return_code; } ;
struct qeth_ipa_cmd {TYPE_4__ data; TYPE_1__ hdr; } ;
struct TYPE_6__ {int diagass_support; } ;
struct qeth_card {TYPE_2__ info; } ;


 int VAR_0 ;
 int FUNC_0 (struct qeth_card*,int,char*,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct qeth_card *VAR_1,
  struct qeth_reply *VAR_2, unsigned long VAR_3)
{
 struct qeth_ipa_cmd *VAR_4 = (struct qeth_ipa_cmd *) VAR_3;
 u16 VAR_5 = VAR_4->hdr.return_code;

 if (VAR_5) {
  FUNC_0(VAR_1, 2, "diagq:%x", VAR_5);
  return -VAR_0;
 }

 VAR_1->info.diagass_support = VAR_4->data.diagass.ext;
 return 0;
}
