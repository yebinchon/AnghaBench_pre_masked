
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct qeth_reply {int dummy; } ;
struct TYPE_8__ {int return_code; scalar_t__ prot_version; int ipa_enabled; int ipa_supported; } ;
struct qeth_ipa_cmd {TYPE_4__ hdr; } ;
struct TYPE_6__ {int enabled_funcs; int supported_funcs; } ;
struct TYPE_5__ {int enabled_funcs; int supported_funcs; } ;
struct TYPE_7__ {TYPE_2__ ipa6; TYPE_1__ ipa4; } ;
struct qeth_card {TYPE_3__ options; } ;


 int FUNC_0 (struct qeth_card*) ;
 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int FUNC_1 (struct qeth_card*,int,char*) ;
 int FUNC_2 (int,char*,int ,...) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_3(struct qeth_card *VAR_5,
  struct qeth_reply *VAR_6, unsigned long VAR_7)
{
 struct qeth_ipa_cmd *VAR_8;

 FUNC_1(VAR_5, 2, "qipasscb");

 VAR_8 = (struct qeth_ipa_cmd *) VAR_7;

 switch (VAR_8->hdr.return_code) {
 case 128:
  break;
 case 129:
 case 130:
  FUNC_1(VAR_5, 2, "ipaunsup");
  VAR_5->options.ipa4.supported_funcs |= VAR_2;
  VAR_5->options.ipa6.supported_funcs |= VAR_2;
  return -VAR_1;
 default:
  FUNC_2(1, "IPA_CMD_QIPASSIST on device %x: Unhandled rc=%#x\n",
     FUNC_0(VAR_5), VAR_8->hdr.return_code);
  return -VAR_0;
 }

 if (VAR_8->hdr.prot_version == VAR_3) {
  VAR_5->options.ipa4.supported_funcs = VAR_8->hdr.ipa_supported;
  VAR_5->options.ipa4.enabled_funcs = VAR_8->hdr.ipa_enabled;
 } else if (VAR_8->hdr.prot_version == VAR_4) {
  VAR_5->options.ipa6.supported_funcs = VAR_8->hdr.ipa_supported;
  VAR_5->options.ipa6.enabled_funcs = VAR_8->hdr.ipa_enabled;
 } else
  FUNC_2(1, "IPA_CMD_QIPASSIST on device %x: Flawed LIC detected\n",
     FUNC_0(VAR_5));
 return 0;
}
