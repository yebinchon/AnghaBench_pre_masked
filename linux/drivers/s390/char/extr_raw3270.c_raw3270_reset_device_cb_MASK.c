
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct raw3270_request {scalar_t__ rc; TYPE_1__* view; } ;
struct raw3270 {scalar_t__ state; int init_reset; } ;
struct TYPE_2__ {struct raw3270* dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (struct raw3270*) ;
 int FUNC_2 (struct raw3270*) ;
 int FUNC_3 (struct raw3270*) ;

__attribute__((used)) static void
FUNC_4(struct raw3270_request *VAR_3, void *VAR_4)
{
 struct raw3270 *VAR_5 = VAR_3->view->dev;

 if (VAR_5->state != VAR_2)
  return;
 if (VAR_3->rc) {

  VAR_5->state = VAR_1;
 } else if (VAR_0) {
  FUNC_2(VAR_5);
  FUNC_1(VAR_5);
 } else
  FUNC_3(VAR_5);
 FUNC_0(&VAR_5->init_reset, 0, sizeof(VAR_5->init_reset));
}
