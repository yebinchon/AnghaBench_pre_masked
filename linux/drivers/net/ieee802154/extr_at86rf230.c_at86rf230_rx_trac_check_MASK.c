
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {int len; } ;
struct TYPE_6__ {int complete; } ;
struct at86rf230_state_change {int* buf; TYPE_2__ trx; TYPE_3__ msg; struct at86rf230_local* lp; } ;
struct TYPE_4__ {int invalid; int success_wait_for_ack; int success; } ;
struct at86rf230_local {int spi; TYPE_1__ trac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;

 int FUNC_1 (int) ;


 int FUNC_2 (int,char*,int) ;
 int FUNC_3 (struct at86rf230_local*,struct at86rf230_state_change*,int) ;
 int VAR_3 ;
 int FUNC_4 (int ,TYPE_3__*) ;

__attribute__((used)) static void
FUNC_5(void *VAR_4)
{
 struct at86rf230_state_change *VAR_5 = VAR_4;
 struct at86rf230_local *VAR_6 = VAR_5->lp;
 u8 *VAR_7 = VAR_5->buf;
 int VAR_8;

 if (FUNC_0(VAR_2)) {
  u8 VAR_9 = FUNC_1(VAR_7[1]);

  switch (VAR_9) {
  case 129:
   VAR_6->trac.success++;
   break;
  case 128:
   VAR_6->trac.success_wait_for_ack++;
   break;
  case 130:
   VAR_6->trac.invalid++;
   break;
  default:
   FUNC_2(1, "received rx trac status %d\n", VAR_9);
   break;
  }
 }

 VAR_7[0] = VAR_1;
 VAR_5->trx.len = VAR_0;
 VAR_5->msg.complete = VAR_3;
 VAR_8 = FUNC_4(VAR_6->spi, &VAR_5->msg);
 if (VAR_8) {
  VAR_5->trx.len = 2;
  FUNC_3(VAR_6, VAR_5, VAR_8);
 }
}
