
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raw3270_view {struct raw3270* dev; } ;
struct raw3270 {int flags; struct raw3270_view* view; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;

int
FUNC_1(struct raw3270_view *VAR_1)
{
 struct raw3270 *VAR_2 = VAR_1->dev;

 return VAR_2 && VAR_2->view == VAR_1 &&
  !FUNC_0(VAR_0, &VAR_2->flags);
}
