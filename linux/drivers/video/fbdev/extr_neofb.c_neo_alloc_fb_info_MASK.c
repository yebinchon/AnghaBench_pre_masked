
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_device_id {int driver_data; } ;
struct pci_dev {int dev; } ;
struct neofb_par {int pci_burst; int lcd_stretch; int palette; int external_display; int internal_display; int libretto; } ;
struct TYPE_2__ {int accel; int ypanstep; scalar_t__ ywrapstep; scalar_t__ xpanstep; scalar_t__ type_aux; int type; int id; } ;
struct fb_info {int flags; int pseudo_palette; int * fbops; TYPE_1__ fix; struct neofb_par* par; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct fb_info* FUNC_0 (int,int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ,int,char*) ;

__attribute__((used)) static struct fb_info *FUNC_2(struct pci_dev *VAR_12,
      const struct pci_device_id *VAR_13)
{
 struct fb_info *VAR_14;
 struct neofb_par *VAR_15;

 VAR_14 = FUNC_0(sizeof(struct neofb_par), &VAR_12->dev);

 if (!VAR_14)
  return ((void*)0);

 VAR_15 = VAR_14->par;

 VAR_14->fix.accel = VAR_13->driver_data;

 VAR_15->pci_burst = !VAR_10;
 VAR_15->lcd_stretch = !VAR_11;
 VAR_15->libretto = VAR_8;

 VAR_15->internal_display = VAR_7;
 VAR_15->external_display = VAR_6;
 VAR_14->flags = VAR_0 | VAR_4;

 switch (VAR_14->fix.accel) {
 case 136:
  FUNC_1(VAR_14->fix.id, sizeof(VAR_14->fix.id),
    "MagicGraph 128");
  break;
 case 135:
  FUNC_1(VAR_14->fix.id, sizeof(VAR_14->fix.id),
    "MagicGraph 128V");
  break;
 case 134:
  FUNC_1(VAR_14->fix.id, sizeof(VAR_14->fix.id),
    "MagicGraph 128ZV");
  break;
 case 133:
  FUNC_1(VAR_14->fix.id, sizeof(VAR_14->fix.id),
    "MagicGraph 128ZV+");
  break;
 case 132:
  FUNC_1(VAR_14->fix.id, sizeof(VAR_14->fix.id),
    "MagicGraph 128XD");
  break;
 case 131:
  FUNC_1(VAR_14->fix.id, sizeof(VAR_14->fix.id),
    "MagicGraph 256AV");
  VAR_14->flags |= VAR_3 |
                 VAR_1 |
                        VAR_2;
  break;
 case 130:
  FUNC_1(VAR_14->fix.id, sizeof(VAR_14->fix.id),
    "MagicGraph 256AV+");
  VAR_14->flags |= VAR_3 |
                 VAR_1 |
                        VAR_2;
  break;
 case 129:
  FUNC_1(VAR_14->fix.id, sizeof(VAR_14->fix.id),
    "MagicGraph 256ZX");
  VAR_14->flags |= VAR_3 |
                 VAR_1 |
                        VAR_2;
  break;
 case 128:
  FUNC_1(VAR_14->fix.id, sizeof(VAR_14->fix.id),
    "MagicGraph 256XL+");
  VAR_14->flags |= VAR_3 |
                 VAR_1 |
                        VAR_2;
  break;
 }

 VAR_14->fix.type = VAR_5;
 VAR_14->fix.type_aux = 0;
 VAR_14->fix.xpanstep = 0;
 VAR_14->fix.ypanstep = 4;
 VAR_14->fix.ywrapstep = 0;
 VAR_14->fix.accel = VAR_13->driver_data;

 VAR_14->fbops = &VAR_9;
 VAR_14->pseudo_palette = VAR_15->palette;
 return VAR_14;
}
