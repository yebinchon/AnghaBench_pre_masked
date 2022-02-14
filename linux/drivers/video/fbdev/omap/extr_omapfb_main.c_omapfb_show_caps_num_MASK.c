
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omapfb_device {int dummy; } ;
struct omapfb_caps {int ctrl; int plane_color; int wnd_color; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 struct omapfb_device* FUNC_0 (struct device*) ;
 int FUNC_1 (struct omapfb_device*,int,struct omapfb_caps*) ;
 scalar_t__ FUNC_2 (char*,size_t,char*,int,int,int,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2,
        struct device_attribute *VAR_3, char *VAR_4)
{
 struct omapfb_device *VAR_5 = FUNC_0(VAR_2);
 int VAR_6;
 size_t VAR_7;
 struct omapfb_caps VAR_8;

 VAR_6 = 0;
 VAR_7 = 0;
 while (VAR_7 < VAR_1 && VAR_6 < VAR_0) {
  FUNC_1(VAR_5, VAR_6, &VAR_8);
  VAR_7 += FUNC_2(&VAR_4[VAR_7], VAR_1 - VAR_7,
   "plane#%d %#010x %#010x %#010x\n",
   VAR_6, VAR_8.ctrl, VAR_8.plane_color, VAR_8.wnd_color);
  VAR_6++;
 }
 return VAR_7;
}
