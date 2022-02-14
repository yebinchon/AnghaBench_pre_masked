
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xxx_par {int dummy; } ;
struct pci_device_id {int dummy; } ;
struct device {int dummy; } ;
struct pci_dev {struct device dev; } ;
struct TYPE_4__ {int id; } ;
struct TYPE_3__ {int scan_align; int buf_align; int access_align; int flags; int size; int addr; } ;
struct fb_info {TYPE_2__ fix; int cmap; int var; TYPE_1__ pixmap; int flags; int pseudo_palette; int * fbops; int screen_base; struct xxx_par* par; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct fb_info*,char*,int *,int ,int *,int) ;
 int FUNC_3 (struct fb_info*,char*,int ) ;
 struct fb_info* FUNC_4 (int,struct device*) ;
 int VAR_6 ;
 int FUNC_5 (int ,int ) ;
 char* VAR_7 ;
 int FUNC_6 (struct pci_dev*,struct fb_info*) ;
 int VAR_8 ;
 scalar_t__ FUNC_7 (struct fb_info*) ;
 int FUNC_8 (int *,struct fb_info*) ;
 TYPE_2__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_9(struct pci_dev *VAR_12, const struct pci_device_id *VAR_13)
{
    struct fb_info *VAR_14;
    struct xxx_par *VAR_15;
    struct device *VAR_16 = &VAR_12->dev;
    int VAR_17, VAR_18;




    VAR_14 = FUNC_4(sizeof(struct xxx_par), VAR_16);

    if (!VAR_14) {

    }

    VAR_15 = VAR_14->par;







    VAR_14->screen_base = VAR_6;
    VAR_14->fbops = &VAR_10;
    VAR_14->fix = VAR_9;
    VAR_14->pseudo_palette = VAR_8;
    VAR_14->flags = VAR_2;
    VAR_14->pixmap.addr = FUNC_5(VAR_5, VAR_4);
    if (!VAR_14->pixmap.addr) {

    }

    VAR_14->pixmap.size = VAR_5;
    VAR_14->pixmap.flags = VAR_3;





    VAR_14->pixmap.scan_align = 4;






    VAR_14->pixmap.buf_align = 4;







    VAR_14->pixmap.access_align = 32;






    if (!VAR_7)
 VAR_7 = "640x480@60";

    VAR_18 = FUNC_2(&VAR_14->var, VAR_14, VAR_7, ((void*)0), 0, ((void*)0), 8);

    if (!VAR_18 || VAR_18 == 4)
 return -VAR_0;


    if (FUNC_0(&VAR_14->cmap, VAR_17, 0))
 return -VAR_1;





    VAR_14->var = VAR_11;




    FUNC_8(&VAR_14->var, VAR_14);
    if (FUNC_7(VAR_14) < 0) {
 FUNC_1(&VAR_14->cmap);
 return -VAR_0;
    }
    FUNC_3(VAR_14, "%s frame buffer device\n", VAR_14->fix.id);
    FUNC_6(VAR_12, VAR_14);
    return 0;
}
