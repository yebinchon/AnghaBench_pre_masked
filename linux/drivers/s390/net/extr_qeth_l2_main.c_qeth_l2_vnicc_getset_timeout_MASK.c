
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct qeth_vnicc_getset_timeout {scalar_t__ timeout; scalar_t__ vnic_char; } ;
struct qeth_cmd_buffer {int dummy; } ;
struct qeth_card {int dummy; } ;
struct TYPE_6__ {scalar_t__* timeout; } ;
struct _qeth_l2_vnicc_request_cbctl {TYPE_1__ result; } ;
struct TYPE_8__ {struct qeth_vnicc_getset_timeout getset_timeout; } ;
struct TYPE_7__ {TYPE_3__ data; } ;
struct TYPE_9__ {TYPE_2__ vnicc; } ;
struct TYPE_10__ {TYPE_4__ data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct qeth_card*,int,char*) ;
 int FUNC_1 (struct qeth_vnicc_getset_timeout*) ;
 TYPE_5__* FUNC_2 (struct qeth_cmd_buffer*) ;
 struct qeth_cmd_buffer* FUNC_3 (struct qeth_card*,scalar_t__,int ) ;
 int VAR_3 ;
 int FUNC_4 (struct qeth_card*,struct qeth_cmd_buffer*,int ,struct _qeth_l2_vnicc_request_cbctl*) ;

__attribute__((used)) static int FUNC_5(struct qeth_card *VAR_4, u32 VAR_5,
     u32 VAR_6, u32 *VAR_7)
{
 struct qeth_vnicc_getset_timeout *VAR_8;
 struct _qeth_l2_vnicc_request_cbctl VAR_9;
 struct qeth_cmd_buffer *VAR_10;

 FUNC_0(VAR_4, 2, "vniccgst");
 VAR_10 = FUNC_3(VAR_4, VAR_6,
          FUNC_1(VAR_8));
 if (!VAR_10)
  return -VAR_0;

 VAR_8 = &FUNC_2(VAR_10)->data.vnicc.data.getset_timeout;
 VAR_8->vnic_char = VAR_5;

 if (VAR_6 == VAR_2)
  VAR_8->timeout = *VAR_7;


 if (VAR_6 == VAR_1)
  VAR_9.result.timeout = VAR_7;

 return FUNC_4(VAR_4, VAR_10, VAR_3, &VAR_9);
}
