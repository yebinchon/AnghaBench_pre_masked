
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raw3270_view {struct raw3270* dev; } ;
struct raw3270_request {int dummy; } ;
struct raw3270 {int cdev; int flags; struct raw3270_view* view; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct raw3270*,struct raw3270_view*,struct raw3270_request*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct raw3270*) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (int ,unsigned long) ;
 scalar_t__ FUNC_5 (int ,int *) ;

int
FUNC_6(struct raw3270_view *VAR_3, struct raw3270_request *VAR_4)
{
 unsigned long VAR_5;
 struct raw3270 *VAR_6;
 int VAR_7;

 FUNC_3(FUNC_1(VAR_3->dev->cdev), VAR_5);
 VAR_6 = VAR_3->dev;
 if (!VAR_6 || VAR_6->view != VAR_3 ||
     FUNC_5(VAR_2, &VAR_6->flags))
  VAR_7 = -VAR_0;
 else if (!FUNC_2(VAR_6))
  VAR_7 = -VAR_1;
 else
  VAR_7 = FUNC_0(VAR_6, VAR_3, VAR_4);
 FUNC_4(FUNC_1(VAR_3->dev->cdev), VAR_5);
 return VAR_7;
}
