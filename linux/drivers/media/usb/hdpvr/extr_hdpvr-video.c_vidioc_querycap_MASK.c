
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_capability {int bus_info; int card; int driver; } ;
struct hdpvr_device {int udev; } ;
struct file {int dummy; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,int) ;
 struct hdpvr_device* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_0, void *VAR_1,
      struct v4l2_capability *VAR_2)
{
 struct hdpvr_device *VAR_3 = FUNC_2(VAR_0);

 FUNC_0(VAR_2->driver, "hdpvr", sizeof(VAR_2->driver));
 FUNC_0(VAR_2->card, "Hauppauge HD PVR", sizeof(VAR_2->card));
 FUNC_1(VAR_3->udev, VAR_2->bus_info, sizeof(VAR_2->bus_info));
 return 0;
}
