
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int kobj; } ;
struct pci_dev {TYPE_3__* vpd; TYPE_2__ dev; } ;
struct TYPE_4__ {char* name; int mode; } ;
struct bin_attribute {int write; int read; TYPE_1__ attr; scalar_t__ size; } ;
struct TYPE_6__ {struct bin_attribute* attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bin_attribute*) ;
 struct bin_attribute* FUNC_1 (int,int ) ;
 int VAR_3 ;
 int FUNC_2 (struct bin_attribute*) ;
 int FUNC_3 (int *,struct bin_attribute*) ;
 int VAR_4 ;

void FUNC_4(struct pci_dev *VAR_5)
{
 int VAR_6;
 struct bin_attribute *VAR_7;

 if (!VAR_5->vpd)
  return;

 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_0);
 if (!VAR_7)
  return;

 FUNC_2(VAR_7);
 VAR_7->size = 0;
 VAR_7->attr.name = "vpd";
 VAR_7->attr.mode = VAR_1 | VAR_2;
 VAR_7->read = VAR_3;
 VAR_7->write = VAR_4;
 VAR_6 = FUNC_3(&VAR_5->dev.kobj, VAR_7);
 if (VAR_6) {
  FUNC_0(VAR_7);
  return;
 }

 VAR_5->vpd->attr = VAR_7;
}
