
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct subchannel {int dummy; } ;
struct TYPE_5__ {scalar_t__ expires; } ;
struct eadm_private {TYPE_1__ timer; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 struct eadm_private* FUNC_2 (struct subchannel*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_5(struct subchannel *VAR_1, int VAR_2)
{
 struct eadm_private *VAR_3 = FUNC_2(VAR_1);

 if (VAR_2 == 0) {
  FUNC_1(&VAR_3->timer);
  return;
 }
 if (FUNC_4(&VAR_3->timer)) {
  if (FUNC_3(&VAR_3->timer, VAR_0 + VAR_2))
   return;
 }
 VAR_3->timer.expires = VAR_0 + VAR_2;
 FUNC_0(&VAR_3->timer);
}
