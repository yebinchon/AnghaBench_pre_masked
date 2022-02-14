
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ctrl_name; } ;
struct omapfb_platform_data {TYPE_1__ lcd; } ;
struct omapfb_device {int dev; TYPE_2__* ctrl; TYPE_2__* int_ctrl; } ;
typedef int name ;
struct TYPE_5__ {char* name; } ;


 int FUNC_0 (TYPE_2__**) ;
 TYPE_2__** VAR_0 ;
 int FUNC_1 (int ,char*,char*) ;
 struct omapfb_platform_data* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct omapfb_device *VAR_1)
{
 struct omapfb_platform_data *VAR_2;
 char VAR_3[17];
 int VAR_4;

 VAR_2 = FUNC_2(VAR_1->dev);

 VAR_1->ctrl = ((void*)0);

 FUNC_4(VAR_3, VAR_2->lcd.ctrl_name, sizeof(VAR_3) - 1);
 VAR_3[sizeof(VAR_3) - 1] = '\0';

 if (FUNC_3(VAR_3, "internal") == 0) {
  VAR_1->ctrl = VAR_1->int_ctrl;
  return 0;
 }

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++) {
  FUNC_1(VAR_1->dev, "ctrl %s\n", VAR_0[VAR_4]->name);
  if (FUNC_3(VAR_0[VAR_4]->name, VAR_3) == 0) {
   VAR_1->ctrl = VAR_0[VAR_4];
   break;
  }
 }

 if (VAR_1->ctrl == ((void*)0)) {
  FUNC_1(VAR_1->dev, "ctrl %s not supported\n", VAR_3);
  return -1;
 }

 return 0;
}
