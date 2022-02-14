
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef scalar_t__ u32 ;
struct qeth_reply {scalar_t__ param; } ;
struct TYPE_20__ {int timeout; } ;
struct TYPE_18__ {int sup_cmds; } ;
struct TYPE_11__ {TYPE_9__ getset_timeout; TYPE_7__ query_cmds; } ;
struct TYPE_17__ {int enabled; int supported; } ;
struct TYPE_12__ {scalar_t__ sub_command; } ;
struct qeth_ipacmd_vnicc {TYPE_10__ data; TYPE_6__ vnicc_cmds; TYPE_1__ hdr; } ;
struct TYPE_14__ {scalar_t__ return_code; } ;
struct TYPE_13__ {struct qeth_ipacmd_vnicc vnicc; } ;
struct qeth_ipa_cmd {TYPE_3__ hdr; TYPE_2__ data; } ;
struct TYPE_15__ {int cur_chars; int sup_chars; } ;
struct TYPE_16__ {TYPE_4__ vnicc; } ;
struct qeth_card {TYPE_5__ options; } ;
struct TYPE_19__ {int * timeout; int * sup_cmds; } ;
struct _qeth_l2_vnicc_request_cbctl {TYPE_8__ result; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct qeth_card*,int,char*) ;
 int FUNC_1 (struct qeth_card*,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct qeth_card *VAR_2,
        struct qeth_reply *VAR_3,
        unsigned long VAR_4)
{
 struct _qeth_l2_vnicc_request_cbctl *VAR_5 =
  (struct _qeth_l2_vnicc_request_cbctl *) VAR_3->param;
 struct qeth_ipa_cmd *VAR_6 = (struct qeth_ipa_cmd *) VAR_4;
 struct qeth_ipacmd_vnicc *VAR_7 = &VAR_6->data.vnicc;
 u32 VAR_8 = VAR_6->data.vnicc.hdr.sub_command;

 FUNC_0(VAR_2, 2, "vniccrcb");
 if (VAR_6->hdr.return_code)
  return FUNC_1(VAR_2, VAR_6->hdr.return_code);

 VAR_2->options.vnicc.sup_chars = VAR_7->vnicc_cmds.supported;
 VAR_2->options.vnicc.cur_chars = VAR_7->vnicc_cmds.enabled;

 if (VAR_8 == VAR_1)
  *VAR_5->result.sup_cmds = VAR_7->data.query_cmds.sup_cmds;
 else if (VAR_8 == VAR_0)
  *VAR_5->result.timeout = VAR_7->data.getset_timeout.timeout;

 return 0;
}
