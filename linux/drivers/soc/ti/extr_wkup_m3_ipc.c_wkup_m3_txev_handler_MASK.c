
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wkup_m3_ipc {int state; int sync_complete; struct device* dev; } ;
struct device {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;




 int VAR_3 ;
 int FUNC_0 (struct wkup_m3_ipc*) ;
 int FUNC_1 (struct wkup_m3_ipc*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct device*,char*,int) ;
 int FUNC_4 (struct device*,char*,...) ;
 int FUNC_5 (struct wkup_m3_ipc*) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_4, void *VAR_5)
{
 struct wkup_m3_ipc *VAR_6 = VAR_5;
 struct device *VAR_7 = VAR_6->dev;
 int VAR_8 = 0;

 FUNC_1(VAR_6);

 switch (VAR_6->state) {
 case 129:
  VAR_8 = FUNC_5(VAR_6);

  if (VAR_8 == VAR_3 ||
      VAR_8 < VAR_1) {
   FUNC_4(VAR_7, "CM3 Firmware Version %x not supported\n",
     VAR_8);
  } else {
   FUNC_3(VAR_7, "CM3 Firmware Version = 0x%x\n", VAR_8);
  }

  VAR_6->state = VAR_2;
  FUNC_2(&VAR_6->sync_complete);
  break;
 case 130:
  VAR_6->state = VAR_2;
  FUNC_2(&VAR_6->sync_complete);
  break;
 case 131:
  FUNC_2(&VAR_6->sync_complete);
  break;
 case 128:
  FUNC_4(VAR_7, "Unknown CM3 State\n");
 }

 FUNC_0(VAR_6);

 return VAR_0;
}
