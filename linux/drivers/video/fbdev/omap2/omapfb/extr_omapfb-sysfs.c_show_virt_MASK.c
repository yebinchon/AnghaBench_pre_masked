
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omapfb_info {TYPE_1__* region; } ;
struct fb_info {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int vaddr; } ;


 struct omapfb_info* FUNC_0 (struct fb_info*) ;
 int VAR_0 ;
 struct fb_info* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,int ,char*,int ) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
  struct device_attribute *VAR_2, char *VAR_3)
{
 struct fb_info *VAR_4 = FUNC_1(VAR_1);
 struct omapfb_info *VAR_5 = FUNC_0(VAR_4);

 return FUNC_2(VAR_3, VAR_0, "%p\n", VAR_5->region->vaddr);
}
