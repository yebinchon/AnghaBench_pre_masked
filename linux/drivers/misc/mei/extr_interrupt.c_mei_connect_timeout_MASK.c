
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_device {scalar_t__ hbm_f_dot_supported; } ;
struct mei_cl {scalar_t__ state; int wait; struct mei_device* dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct mei_device*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct mei_cl *VAR_2)
{
 struct mei_device *VAR_3 = VAR_2->dev;

 if (VAR_2->state == VAR_0) {
  if (VAR_3->hbm_f_dot_supported) {
   VAR_2->state = VAR_1;
   FUNC_1(&VAR_2->wait);
   return;
  }
 }
 FUNC_0(VAR_3);
}
