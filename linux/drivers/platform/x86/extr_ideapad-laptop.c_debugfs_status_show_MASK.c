
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {struct ideapad_private* private; } ;
struct ideapad_private {TYPE_1__* adev; } ;
struct TYPE_2__ {int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,unsigned long*) ;
 int FUNC_1 (int ,int ,unsigned long*) ;
 int FUNC_2 (struct seq_file*,char*,...) ;
 int FUNC_3 (struct seq_file*,char*) ;
 scalar_t__ FUNC_4 (int ,unsigned long*) ;

__attribute__((used)) static int FUNC_5(struct seq_file *VAR_11, void *VAR_12)
{
 struct ideapad_private *VAR_13 = VAR_11->private;
 unsigned long VAR_14;

 if (!VAR_13)
  return -VAR_1;

 if (!FUNC_1(VAR_13->adev->handle, VAR_4, &VAR_14))
  FUNC_2(VAR_11, "Backlight max:\t%lu\n", VAR_14);
 if (!FUNC_1(VAR_13->adev->handle, VAR_3, &VAR_14))
  FUNC_2(VAR_11, "Backlight now:\t%lu\n", VAR_14);
 if (!FUNC_1(VAR_13->adev->handle, VAR_5, &VAR_14))
  FUNC_2(VAR_11, "BL power value:\t%s\n", VAR_14 ? "On" : "Off");
 FUNC_2(VAR_11, "=====================\n");

 if (!FUNC_1(VAR_13->adev->handle, VAR_8, &VAR_14))
  FUNC_2(VAR_11, "Radio status:\t%s(%lu)\n",
      VAR_14 ? "On" : "Off", VAR_14);
 if (!FUNC_1(VAR_13->adev->handle, VAR_10, &VAR_14))
  FUNC_2(VAR_11, "Wifi status:\t%s(%lu)\n",
      VAR_14 ? "On" : "Off", VAR_14);
 if (!FUNC_1(VAR_13->adev->handle, VAR_6, &VAR_14))
  FUNC_2(VAR_11, "BT status:\t%s(%lu)\n",
      VAR_14 ? "On" : "Off", VAR_14);
 if (!FUNC_1(VAR_13->adev->handle, VAR_2, &VAR_14))
  FUNC_2(VAR_11, "3G status:\t%s(%lu)\n",
      VAR_14 ? "On" : "Off", VAR_14);
 FUNC_2(VAR_11, "=====================\n");

 if (!FUNC_1(VAR_13->adev->handle, VAR_9, &VAR_14))
  FUNC_2(VAR_11, "Touchpad status:%s(%lu)\n",
      VAR_14 ? "On" : "Off", VAR_14);
 if (!FUNC_1(VAR_13->adev->handle, VAR_7, &VAR_14))
  FUNC_2(VAR_11, "Camera status:\t%s(%lu)\n",
      VAR_14 ? "On" : "Off", VAR_14);
 FUNC_3(VAR_11, "=====================\n");

 if (!FUNC_0(VAR_13->adev->handle, &VAR_14)) {
  FUNC_2(VAR_11, "Conservation mode:\t%s(%lu)\n",
      FUNC_4(VAR_0, &VAR_14) ? "On" : "Off",
      VAR_14);
 }

 return 0;
}
