
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_6__ {int write; int read; } ;
struct TYPE_5__ {int write; int read; } ;
struct TYPE_7__ {int write; int read; } ;
struct TYPE_8__ {TYPE_2__ dw; TYPE_1__ w; TYPE_3__ b; } ;
struct config_field {int size; TYPE_4__ u; } ;


 int VAR_0 ;
 int FUNC_0 (struct pci_dev*,struct config_field*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

int FUNC_1(struct pci_dev *VAR_7, struct config_field
        *VAR_8)
{
 int VAR_9 = 0;

 switch (VAR_8->size) {
 case 1:
  VAR_8->u.b.read = VAR_1;
  VAR_8->u.b.write = VAR_4;
  break;
 case 2:
  VAR_8->u.w.read = VAR_3;
  VAR_8->u.w.write = VAR_6;
  break;
 case 4:
  VAR_8->u.dw.read = VAR_2;
  VAR_8->u.dw.write = VAR_5;
  break;
 default:
  VAR_9 = -VAR_0;
  goto out;
 }

 FUNC_0(VAR_7, VAR_8);

out:
 return VAR_9;
}
