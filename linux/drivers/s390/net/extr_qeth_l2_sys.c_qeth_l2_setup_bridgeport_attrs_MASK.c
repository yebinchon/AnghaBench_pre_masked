
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ role; scalar_t__ hostnotification; int supported_funcs; } ;
struct TYPE_3__ {TYPE_2__ sbp; } ;
struct qeth_card {TYPE_1__ options; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct qeth_card*,int) ;
 int FUNC_1 (struct qeth_card*,scalar_t__*,int *) ;
 int FUNC_2 (struct qeth_card*,scalar_t__) ;

void FUNC_3(struct qeth_card *VAR_1)
{
 int VAR_2;

 if (!VAR_1)
  return;
 if (!VAR_1->options.sbp.supported_funcs)
  return;
 if (VAR_1->options.sbp.role != VAR_0) {

  FUNC_2(VAR_1, VAR_1->options.sbp.role);

  FUNC_1(VAR_1,
   &VAR_1->options.sbp.role, ((void*)0));
 }
 if (VAR_1->options.sbp.hostnotification) {
  VAR_2 = FUNC_0(VAR_1, 1);
  if (VAR_2)
   VAR_1->options.sbp.hostnotification = 0;
 } else
  FUNC_0(VAR_1, 0);
}
