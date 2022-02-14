
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct raw3270_request {TYPE_1__* view; } ;
struct raw3270 {int dummy; } ;
struct TYPE_2__ {struct raw3270* dev; } ;


 int FUNC_0 (struct raw3270*) ;
 int FUNC_1 (struct raw3270*) ;

__attribute__((used)) static void
FUNC_2(struct raw3270_request *VAR_0, void *VAR_1)
{
 struct raw3270 *VAR_2 = VAR_0->view->dev;

 FUNC_0(VAR_2);
 FUNC_1(VAR_2);
}
