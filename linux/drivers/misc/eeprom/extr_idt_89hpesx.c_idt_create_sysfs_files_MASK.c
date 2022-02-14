
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct idt_89hpesx_dev {scalar_t__ eesize; TYPE_3__* ee_file; scalar_t__ eero; TYPE_1__* client; } ;
struct device {int kobj; } ;
struct TYPE_7__ {int mode; } ;
struct TYPE_8__ {scalar_t__ size; int * write; TYPE_2__ attr; } ;
struct TYPE_6__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,char*) ;
 TYPE_3__* FUNC_2 (struct device*,int,int ) ;
 int FUNC_3 (TYPE_3__*,int *,int) ;
 int FUNC_4 (int *,TYPE_3__*) ;

__attribute__((used)) static int FUNC_5(struct idt_89hpesx_dev *VAR_3)
{
 struct device *VAR_4 = &VAR_3->client->dev;
 int VAR_5;


 if (VAR_3->eesize == 0) {
  FUNC_0(VAR_4, "Skip creating sysfs-files");
  return 0;
 }


 VAR_3->ee_file = FUNC_2(VAR_4, sizeof(*VAR_3->ee_file), VAR_1);
 if (!VAR_3->ee_file)
  return -VAR_0;


 FUNC_3(VAR_3->ee_file, &VAR_2, sizeof(*VAR_3->ee_file));


 if (VAR_3->eero) {
  VAR_3->ee_file->attr.mode &= ~0200;
  VAR_3->ee_file->write = ((void*)0);
 }

 VAR_3->ee_file->size = VAR_3->eesize;
 VAR_5 = FUNC_4(&VAR_4->kobj, VAR_3->ee_file);
 if (VAR_5 != 0) {
  FUNC_1(VAR_4, "Failed to create EEPROM sysfs-node");
  return VAR_5;
 }

 return 0;
}
