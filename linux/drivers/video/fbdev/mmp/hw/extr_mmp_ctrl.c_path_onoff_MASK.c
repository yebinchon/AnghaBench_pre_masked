
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mmp_path {int status; TYPE_1__* panel; int name; int dev; } ;
struct TYPE_3__ {int (* set_onoff ) (TYPE_1__*,int) ;} ;


 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (struct mmp_path*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_5(struct mmp_path *VAR_0, int VAR_1)
{
 if (VAR_0->status == VAR_1) {
  FUNC_0(VAR_0->dev, "path %s is already %s\n",
    VAR_0->name, FUNC_2(VAR_0->status));
  return;
 }

 if (VAR_1) {
  FUNC_1(VAR_0, 1);

  if (VAR_0->panel && VAR_0->panel->set_onoff)
   VAR_0->panel->set_onoff(VAR_0->panel, 1);
 } else {
  if (VAR_0->panel && VAR_0->panel->set_onoff)
   VAR_0->panel->set_onoff(VAR_0->panel, 0);

  FUNC_1(VAR_0, 0);
 }
 VAR_0->status = VAR_1;
}
