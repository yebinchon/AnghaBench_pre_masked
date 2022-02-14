
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct savagefb_par {scalar_t__ chip; int pseudo_palette; int SavageWaitFifo; int SavageWaitIdle; struct pci_dev* pcidev; } ;
struct pci_device_id {int driver_data; } ;
struct pci_dev {int dummy; } ;
struct TYPE_5__ {int size; int scan_align; int buf_align; int access_align; scalar_t__ addr; } ;
struct TYPE_4__ {int width; int height; scalar_t__ accel_flags; int activate; scalar_t__ nonstd; } ;
struct TYPE_6__ {int ypanstep; int accel; int id; scalar_t__ ywrapstep; scalar_t__ type_aux; int type; } ;
struct fb_info {int flags; int cmap; TYPE_2__ pixmap; int pseudo_palette; int * fbops; TYPE_1__ var; TYPE_3__ fix; struct savagefb_par* par; } ;


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
 void* VAR_11 ;
 void* VAR_12 ;
 scalar_t__ VAR_13 ;
 void* VAR_14 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_15 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 void* VAR_16 ;
 scalar_t__ VAR_17 ;
 void* VAR_18 ;
 int FUNC_2 (int *,int ,int ) ;
 scalar_t__ FUNC_3 (int,int,int ) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_4 (int ,int,char*) ;

__attribute__((used)) static int FUNC_5(struct fb_info *VAR_26, struct pci_dev *VAR_27,
          const struct pci_device_id *VAR_28)
{
 struct savagefb_par *VAR_29 = VAR_26->par;
 int VAR_30 = 0;

 VAR_29->pcidev = VAR_27;

 VAR_26->fix.type = VAR_8;
 VAR_26->fix.type_aux = 0;
 VAR_26->fix.ypanstep = 1;
 VAR_26->fix.ywrapstep = 0;
 VAR_26->fix.accel = VAR_28->driver_data;

 switch (VAR_26->fix.accel) {
 case 128:
  VAR_29->chip = VAR_17;
  FUNC_4(VAR_26->fix.id, 16, "SuperSavage");
  break;
 case 133:
  VAR_29->chip = VAR_15;
  FUNC_4(VAR_26->fix.id, 16, "Savage4");
  break;
 case 135:
  VAR_29->chip = VAR_14;
  FUNC_4(VAR_26->fix.id, 16, "Savage3D");
  break;
 case 134:
  VAR_29->chip = VAR_14;
  FUNC_4(VAR_26->fix.id, 16, "Savage3D-MV");
  break;
 case 136:
  VAR_29->chip = VAR_13;
  FUNC_4(VAR_26->fix.id, 16, "Savage2000");
  break;
 case 129:
  VAR_29->chip = VAR_16;
  FUNC_4(VAR_26->fix.id, 16, "Savage/MX-MV");
  break;
 case 130:
  VAR_29->chip = VAR_16;
  FUNC_4(VAR_26->fix.id, 16, "Savage/MX");
  break;
 case 131:
  VAR_29->chip = VAR_16;
  FUNC_4(VAR_26->fix.id, 16, "Savage/IX-MV");
  break;
 case 132:
  VAR_29->chip = VAR_16;
  FUNC_4(VAR_26->fix.id, 16, "Savage/IX");
  break;
 case 139:
  VAR_29->chip = VAR_11;
  FUNC_4(VAR_26->fix.id, 16, "ProSavagePM");
  break;
 case 140:
  VAR_29->chip = VAR_11;
  FUNC_4(VAR_26->fix.id, 16, "ProSavageKM");
  break;
 case 137:
  VAR_29->chip = VAR_18;
  FUNC_4(VAR_26->fix.id, 16, "TwisterP");
  break;
 case 138:
  VAR_29->chip = VAR_18;
  FUNC_4(VAR_26->fix.id, 16, "TwisterK");
  break;
 case 142:
  VAR_29->chip = VAR_12;
  FUNC_4(VAR_26->fix.id, 16, "ProSavageDDR");
  break;
 case 141:
  VAR_29->chip = VAR_12;
  FUNC_4(VAR_26->fix.id, 16, "ProSavage8");
  break;
 }

 if (FUNC_0(VAR_29->chip)) {
  VAR_29->SavageWaitIdle = VAR_22;
  VAR_29->SavageWaitFifo = VAR_21;
 } else if (FUNC_1(VAR_29->chip) ||
     VAR_17 == VAR_29->chip) {
  VAR_29->SavageWaitIdle = VAR_24;
  VAR_29->SavageWaitFifo = VAR_23;
 } else {
  VAR_29->SavageWaitIdle = VAR_20;
  VAR_29->SavageWaitFifo = VAR_19;
 }

 VAR_26->var.nonstd = 0;
 VAR_26->var.activate = VAR_7;
 VAR_26->var.width = -1;
 VAR_26->var.height = -1;
 VAR_26->var.accel_flags = 0;

 VAR_26->fbops = &VAR_25;
 VAR_26->flags = VAR_1 |
                 VAR_6 |
                 VAR_5;

 VAR_26->pseudo_palette = VAR_29->pseudo_palette;
 return VAR_30;
}
