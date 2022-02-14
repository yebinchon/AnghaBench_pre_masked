
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcc_acpi {struct input_dev* input_dev; } ;
struct TYPE_2__ {int vendor; int product; int version; int bustype; } ;
struct input_dev {TYPE_1__ id; int phys; int name; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct input_dev* FUNC_1 () ;
 int FUNC_2 (struct input_dev*) ;
 int FUNC_3 (struct input_dev*) ;
 int VAR_5 ;
 int FUNC_4 (struct input_dev*,int ,int *) ;

__attribute__((used)) static int FUNC_5(struct pcc_acpi *VAR_6)
{
 struct input_dev *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_1();
 if (!VAR_7)
  return -VAR_4;

 VAR_7->name = VAR_1;
 VAR_7->phys = VAR_2;
 VAR_7->id.bustype = VAR_3;
 VAR_7->id.vendor = 0x0001;
 VAR_7->id.product = 0x0001;
 VAR_7->id.version = 0x0100;

 VAR_8 = FUNC_4(VAR_7, VAR_5, ((void*)0));
 if (VAR_8) {
  FUNC_0((VAR_0,
      "Unable to setup input device keymap\n"));
  goto err_free_dev;
 }

 VAR_8 = FUNC_3(VAR_7);
 if (VAR_8) {
  FUNC_0((VAR_0,
      "Unable to register input device\n"));
  goto err_free_dev;
 }

 VAR_6->input_dev = VAR_7;
 return 0;

 err_free_dev:
 FUNC_2(VAR_7);
 return VAR_8;
}
