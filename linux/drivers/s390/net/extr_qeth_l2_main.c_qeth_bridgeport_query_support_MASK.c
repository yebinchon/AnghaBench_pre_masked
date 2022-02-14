
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct qeth_cmd_buffer {int dummy; } ;
struct TYPE_5__ {int supported_funcs; int role; } ;
struct TYPE_6__ {TYPE_2__ sbp; } ;
struct qeth_card {TYPE_3__ options; } ;
struct TYPE_4__ {int supported; } ;
struct _qeth_sbp_cbctl {TYPE_1__ data; } ;


 int VAR_0 ;
 int FUNC_0 (struct qeth_card*,int,char*) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 struct qeth_cmd_buffer* FUNC_2 (struct qeth_card*,int ,int ) ;
 scalar_t__ FUNC_3 (struct qeth_card*,struct qeth_cmd_buffer*,int ,struct _qeth_sbp_cbctl*) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_4(struct qeth_card *VAR_4)
{
 struct qeth_cmd_buffer *VAR_5;
 struct _qeth_sbp_cbctl VAR_6;

 FUNC_0(VAR_4, 2, "brqsuppo");
 VAR_5 = FUNC_2(VAR_4, VAR_0,
     FUNC_1(VAR_3));
 if (!VAR_5)
  return;

 if (FUNC_3(VAR_4, VAR_5, VAR_2,
         &VAR_6)) {
  VAR_4->options.sbp.role = VAR_1;
  VAR_4->options.sbp.supported_funcs = 0;
  return;
 }
 VAR_4->options.sbp.supported_funcs = VAR_6.data.supported;
}
