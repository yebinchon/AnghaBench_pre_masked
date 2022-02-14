
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {long expires; } ;
struct delayed_work {TYPE_1__ timer; } ;


 int FUNC_0 (struct delayed_work*) ;
 long VAR_0 ;

__attribute__((used)) static long FUNC_1(struct delayed_work *VAR_1)
{
 int VAR_2 = FUNC_0(VAR_1);
 long VAR_3;
 if (VAR_2 > 0) {

  VAR_3 = VAR_1->timer.expires - VAR_0;
  if (VAR_3 < 0)
   VAR_3 = 0;
 } else {
  VAR_3 = -1;
 }
 return VAR_3;
}
