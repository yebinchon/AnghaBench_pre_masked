
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fb_info {int dev; TYPE_1__* fbops; int * fbdefio; struct dlfb_data* par; } ;
struct dlfb_data {scalar_t__ fb_count; } ;
struct TYPE_2__ {int fb_mmap; } ;


 int FUNC_0 (int ,char*,int,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (struct fb_info*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct fb_info *VAR_1, int VAR_2)
{
 struct dlfb_data *VAR_3 = VAR_1->par;

 VAR_3->fb_count--;

 if ((VAR_3->fb_count == 0) && (VAR_1->fbdefio)) {
  FUNC_1(VAR_1);
  FUNC_2(VAR_1->fbdefio);
  VAR_1->fbdefio = ((void*)0);
  VAR_1->fbops->fb_mmap = VAR_0;
 }

 FUNC_0(VAR_1->dev, "release, user=%d count=%d\n", VAR_2, VAR_3->fb_count);

 return 0;
}
