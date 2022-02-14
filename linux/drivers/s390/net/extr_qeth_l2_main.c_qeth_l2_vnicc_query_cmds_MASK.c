
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct qeth_cmd_buffer {int dummy; } ;
struct qeth_card {int dummy; } ;
struct TYPE_11__ {int * sup_cmds; } ;
struct _qeth_l2_vnicc_request_cbctl {TYPE_5__ result; } ;
struct TYPE_7__ {int vnic_char; } ;
struct TYPE_8__ {TYPE_1__ query_cmds; } ;
struct TYPE_9__ {TYPE_2__ data; } ;
struct TYPE_10__ {TYPE_3__ vnicc; } ;
struct TYPE_12__ {TYPE_4__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qeth_card*,int,char*) ;
 int FUNC_1 (int ) ;
 TYPE_6__* FUNC_2 (struct qeth_cmd_buffer*) ;
 struct qeth_cmd_buffer* FUNC_3 (struct qeth_card*,int ,int ) ;
 int VAR_2 ;
 int FUNC_4 (struct qeth_card*,struct qeth_cmd_buffer*,int ,struct _qeth_l2_vnicc_request_cbctl*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_5(struct qeth_card *VAR_4, u32 VAR_5,
        u32 *VAR_6)
{
 struct _qeth_l2_vnicc_request_cbctl VAR_7;
 struct qeth_cmd_buffer *VAR_8;

 FUNC_0(VAR_4, 2, "vniccqcm");
 VAR_8 = FUNC_3(VAR_4, VAR_1,
          FUNC_1(VAR_3));
 if (!VAR_8)
  return -VAR_0;

 FUNC_2(VAR_8)->data.vnicc.data.query_cmds.vnic_char = VAR_5;


 VAR_7.result.sup_cmds = VAR_6;

 return FUNC_4(VAR_4, VAR_8, VAR_2, &VAR_7);
}
