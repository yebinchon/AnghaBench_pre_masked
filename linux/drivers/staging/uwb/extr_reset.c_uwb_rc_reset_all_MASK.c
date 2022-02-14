
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uwb_rc {int dummy; } ;
struct uwb_event {int message; int type; int ts_jiffies; int rc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct uwb_rc*) ;
 int VAR_3 ;
 struct uwb_event* FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct uwb_event*) ;

void FUNC_4(struct uwb_rc *VAR_4)
{
 struct uwb_event *VAR_5;

 VAR_5 = FUNC_1(sizeof(struct uwb_event), VAR_0);
 if (FUNC_2(VAR_5 == ((void*)0)))
  return;

 VAR_5->rc = FUNC_0(VAR_4);
 VAR_5->ts_jiffies = VAR_3;
 VAR_5->type = VAR_2;
 VAR_5->message = VAR_1;

 FUNC_3(VAR_5);
}
