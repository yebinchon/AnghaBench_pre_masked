
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct pinctrl_dev {int dev; TYPE_1__* hog_sleep; TYPE_1__* p; TYPE_1__* hog_default; } ;
struct TYPE_7__ {int users; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int ,struct pinctrl_dev*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int *) ;
 void* FUNC_6 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_7 (TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_8(struct pinctrl_dev *VAR_3)
{
 VAR_3->p = FUNC_2(VAR_3->dev, VAR_3);
 if (FUNC_1(VAR_3->p) == -VAR_0) {
  FUNC_3(VAR_3->dev, "no hogs found\n");

  return 0;
 }

 if (FUNC_0(VAR_3->p)) {
  FUNC_4(VAR_3->dev, "error claiming hogs: %li\n",
   FUNC_1(VAR_3->p));

  return FUNC_1(VAR_3->p);
 }

 FUNC_5(&VAR_3->p->users);
 VAR_3->hog_default =
  FUNC_6(VAR_3->p, VAR_1);
 if (FUNC_0(VAR_3->hog_default)) {
  FUNC_3(VAR_3->dev,
   "failed to lookup the default state\n");
 } else {
  if (FUNC_7(VAR_3->p,
      VAR_3->hog_default))
   FUNC_4(VAR_3->dev,
    "failed to select default state\n");
 }

 VAR_3->hog_sleep =
  FUNC_6(VAR_3->p,
         VAR_2);
 if (FUNC_0(VAR_3->hog_sleep))
  FUNC_3(VAR_3->dev,
   "failed to lookup the sleep state\n");

 return 0;
}
