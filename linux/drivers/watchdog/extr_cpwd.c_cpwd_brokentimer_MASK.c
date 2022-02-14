
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct cpwd {TYPE_1__* devs; } ;
struct TYPE_7__ {int expires; } ;
struct TYPE_6__ {int runstatus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 struct cpwd* VAR_3 ;
 int FUNC_1 (struct cpwd*,int) ;
 TYPE_2__ VAR_4 ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_5)
{
 struct cpwd *VAR_6 = VAR_3;
 int VAR_7, VAR_8 = 0;




 if (FUNC_3(&VAR_4))
  FUNC_2(&VAR_4);

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  if (VAR_6->devs[VAR_7].runstatus & VAR_2) {
   ++VAR_8;
   FUNC_1(VAR_6, VAR_7);
  }
 }

 if (VAR_8) {

  VAR_4.expires = VAR_0;
  FUNC_0(&VAR_4);
 }
}
