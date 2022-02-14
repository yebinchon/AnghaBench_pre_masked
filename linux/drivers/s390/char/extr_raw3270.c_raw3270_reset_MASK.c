
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raw3270_view {struct raw3270* dev; } ;
struct raw3270 {int flags; struct raw3270_view* view; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct raw3270*) ;
 int FUNC_1 (struct raw3270*) ;
 scalar_t__ FUNC_2 (int ,int *) ;

int
FUNC_3(struct raw3270_view *VAR_3)
{
 struct raw3270 *VAR_4;
 int VAR_5;

 VAR_4 = VAR_3->dev;
 if (!VAR_4 || VAR_4->view != VAR_3 ||
     FUNC_2(VAR_2, &VAR_4->flags))
  VAR_5 = -VAR_0;
 else if (!FUNC_1(VAR_4))
  VAR_5 = -VAR_1;
 else
  VAR_5 = FUNC_0(VAR_3->dev);
 return VAR_5;
}
