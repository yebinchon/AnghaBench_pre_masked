
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct qeth_reply {int dummy; } ;
struct TYPE_14__ {scalar_t__ prot_version; int ipa_enabled; scalar_t__ return_code; } ;
struct TYPE_8__ {scalar_t__ return_code; } ;
struct TYPE_9__ {TYPE_1__ hdr; } ;
struct TYPE_10__ {TYPE_2__ setassparms; } ;
struct qeth_ipa_cmd {TYPE_7__ hdr; TYPE_3__ data; } ;
struct TYPE_12__ {int enabled_funcs; } ;
struct TYPE_11__ {int enabled_funcs; } ;
struct TYPE_13__ {TYPE_5__ ipa6; TYPE_4__ ipa4; } ;
struct qeth_card {TYPE_6__ options; } ;


 int VAR_0 ;
 int FUNC_0 (struct qeth_card*,int,char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

int FUNC_1(struct qeth_card *VAR_3,
   struct qeth_reply *VAR_4, unsigned long VAR_5)
{
 struct qeth_ipa_cmd *VAR_6 = (struct qeth_ipa_cmd *) VAR_5;

 FUNC_0(VAR_3, 4, "defadpcb");

 if (VAR_6->hdr.return_code)
  return -VAR_0;

 VAR_6->hdr.return_code = VAR_6->data.setassparms.hdr.return_code;
 if (VAR_6->hdr.prot_version == VAR_1)
  VAR_3->options.ipa4.enabled_funcs = VAR_6->hdr.ipa_enabled;
 if (VAR_6->hdr.prot_version == VAR_2)
  VAR_3->options.ipa6.enabled_funcs = VAR_6->hdr.ipa_enabled;
 return 0;
}
