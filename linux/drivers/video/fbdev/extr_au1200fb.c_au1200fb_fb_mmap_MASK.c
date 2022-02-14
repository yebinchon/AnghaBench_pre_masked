
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct fb_info {struct au1200fb_device* par; } ;
struct au1200fb_device {int fb_len; int fb_phys; int fb_mem; int dev; } ;


 int FUNC_0 (int ,struct vm_area_struct*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct fb_info *VAR_0, struct vm_area_struct *VAR_1)
{
 struct au1200fb_device *VAR_2 = VAR_0->par;

 return FUNC_0(VAR_2->dev, VAR_1, VAR_2->fb_mem, VAR_2->fb_phys,
   VAR_2->fb_len, 0);
}
