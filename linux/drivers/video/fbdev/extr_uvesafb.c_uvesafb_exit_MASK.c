
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; } ;
struct uvesafb_ktask {TYPE_1__ t; } ;
struct TYPE_5__ {int driver; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 int FUNC_4 (struct uvesafb_ktask*) ;
 int FUNC_5 (struct uvesafb_ktask*) ;
 struct uvesafb_ktask* FUNC_6 () ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void FUNC_7(void)
{
 struct uvesafb_ktask *VAR_6;

 if (VAR_5) {
  VAR_6 = FUNC_6();
  if (VAR_6) {
   VAR_6->t.flags = VAR_0;
   FUNC_4(VAR_6);
   FUNC_5(VAR_6);
  }
 }

 FUNC_0(&VAR_2);
 FUNC_1(&VAR_4.driver, &VAR_1);
 FUNC_2(VAR_3);
 FUNC_3(&VAR_4);
}
