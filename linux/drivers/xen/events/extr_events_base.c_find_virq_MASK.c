
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int virq; } ;
struct evtchn_status {int port; scalar_t__ status; scalar_t__ vcpu; TYPE_1__ u; int dom; } ;
typedef int status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,struct evtchn_status*) ;
 int FUNC_1 (struct evtchn_status*,int ,int) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (unsigned int) ;

__attribute__((used)) static int FUNC_4(unsigned int VAR_4, unsigned int VAR_5)
{
 struct evtchn_status VAR_6;
 int VAR_7, VAR_8 = -VAR_1;

 FUNC_1(&VAR_6, 0, sizeof(VAR_6));
 for (VAR_7 = 0; VAR_7 < FUNC_2(); VAR_7++) {
  VAR_6.dom = VAR_0;
  VAR_6.port = VAR_7;
  VAR_8 = FUNC_0(VAR_2, &VAR_6);
  if (VAR_8 < 0)
   continue;
  if (VAR_6.status != VAR_3)
   continue;
  if (VAR_6.u.virq == VAR_4 && VAR_6.vcpu == FUNC_3(VAR_5)) {
   VAR_8 = VAR_7;
   break;
  }
 }
 return VAR_8;
}
