
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct visorinput_devdata {struct input_dev* visorinput_dev; } ;
struct TYPE_2__ {int arg1; int action; int arg2; } ;
struct visor_inputreport {TYPE_1__ activity; } ;
struct visor_device {int visorchannel; int device; } ;
struct input_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 struct visorinput_devdata* FUNC_1 (int *) ;
 int FUNC_2 (struct input_dev*,int,int) ;
 int FUNC_3 (struct input_dev*,int ,int) ;
 int FUNC_4 (struct input_dev*,int,int) ;
 int FUNC_5 (struct input_dev*,int ,int) ;
 int FUNC_6 (struct input_dev*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,int ,struct visor_inputreport*) ;

__attribute__((used)) static void FUNC_9(struct visor_device *VAR_3)
{
 struct visor_inputreport VAR_4;
 int VAR_5, VAR_6;
 struct input_dev *VAR_7;
 int VAR_8, VAR_9, VAR_10;
 int VAR_11;
 struct visorinput_devdata *VAR_12 = FUNC_1(&VAR_3->device);

 if (!VAR_12)
  return;

 VAR_7 = VAR_12->visorinput_dev;

 while (!FUNC_8(VAR_3->visorchannel, 0, &VAR_4)) {
  VAR_5 = VAR_4.activity.arg1;
  VAR_6 = FUNC_7(VAR_5);
  switch (VAR_4.activity.action) {
  case 138:
   FUNC_4(VAR_7, VAR_6, 1);
   FUNC_6(VAR_7);
   break;
  case 136:
   FUNC_4(VAR_7, VAR_6, 0);
   FUNC_6(VAR_7);
   break;
  case 137:
   FUNC_4(VAR_7, VAR_6, 1);
   FUNC_6(VAR_7);
   FUNC_4(VAR_7, VAR_6, 0);
   FUNC_6(VAR_7);
   break;
  case 131:
   FUNC_2(VAR_7, VAR_6,
        VAR_4.activity.arg2);
   break;
  case 128:
   VAR_8 = VAR_4.activity.arg1;
   VAR_9 = VAR_4.activity.arg2;
   FUNC_3(VAR_7, VAR_0, VAR_8);
   FUNC_3(VAR_7, VAR_1, VAR_9);
   FUNC_6(VAR_7);
   break;
  case 133:
   VAR_10 = FUNC_0(VAR_4.activity.arg1);
   if (VAR_10 < 0)
    break;
   FUNC_4(VAR_7, VAR_10, 1);
   FUNC_6(VAR_7);
   break;
  case 132:
   VAR_10 = FUNC_0(VAR_4.activity.arg1);
   if (VAR_10 < 0)
    break;
   FUNC_4(VAR_7, VAR_10, 0);
   FUNC_6(VAR_7);
   break;
  case 135:
   VAR_10 = FUNC_0(VAR_4.activity.arg1);
   if (VAR_10 < 0)
    break;
   FUNC_4(VAR_7, VAR_10, 1);
   FUNC_6(VAR_7);
   FUNC_4(VAR_7, VAR_10, 0);
   FUNC_6(VAR_7);
   break;
  case 134:
   VAR_10 = FUNC_0(VAR_4.activity.arg1);
   if (VAR_10 < 0)
    break;
   for (VAR_11 = 0; VAR_11 < 2; VAR_11++) {
    FUNC_4(VAR_7, VAR_10, 1);
    FUNC_6(VAR_7);
    FUNC_4(VAR_7, VAR_10, 0);
    FUNC_6(VAR_7);
   }
   break;
  case 130:
   FUNC_5(VAR_7, VAR_2, 1);
   FUNC_6(VAR_7);
   break;
  case 129:
   FUNC_5(VAR_7, VAR_2, -1);
   FUNC_6(VAR_7);
   break;
  default:

   break;
  }
 }
}
