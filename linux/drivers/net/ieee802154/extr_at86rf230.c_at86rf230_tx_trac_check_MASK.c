
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct at86rf230_state_change {int * buf; struct at86rf230_local* lp; } ;
struct TYPE_2__ {int invalid; int no_ack; int channel_access_failure; int success_data_pending; int success; } ;
struct at86rf230_local {TYPE_1__ trac; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;


 int FUNC_1 (int ) ;



 int FUNC_2 (int,char*,int) ;
 int FUNC_3 (struct at86rf230_local*,struct at86rf230_state_change*,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_4(void *VAR_3)
{
 struct at86rf230_state_change *VAR_4 = VAR_3;
 struct at86rf230_local *VAR_5 = VAR_4->lp;

 if (FUNC_0(VAR_0)) {
  u8 VAR_6 = FUNC_1(VAR_4->buf[1]);

  switch (VAR_6) {
  case 129:
   VAR_5->trac.success++;
   break;
  case 128:
   VAR_5->trac.success_data_pending++;
   break;
  case 132:
   VAR_5->trac.channel_access_failure++;
   break;
  case 130:
   VAR_5->trac.no_ack++;
   break;
  case 131:
   VAR_5->trac.invalid++;
   break;
  default:
   FUNC_2(1, "received tx trac status %d\n", VAR_6);
   break;
  }
 }

 FUNC_3(VAR_5, VAR_4, VAR_1, VAR_2);
}
