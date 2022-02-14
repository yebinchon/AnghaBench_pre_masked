
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * parent; } ;
struct rc_dev {char* driver_name; TYPE_1__ dev; int input_id; int input_phys; int device_name; int close; int open; int allowed_protocols; struct ati_remote* priv; } ;
struct ati_remote {TYPE_2__* interface; int udev; int rc_phys; int rc_name; struct rc_dev* rdev; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void FUNC_1(struct ati_remote *VAR_3)
{
 struct rc_dev *VAR_4 = VAR_3->rdev;

 VAR_4->priv = VAR_3;
 VAR_4->allowed_protocols = VAR_0;
 VAR_4->driver_name = "ati_remote";

 VAR_4->open = VAR_2;
 VAR_4->close = VAR_1;

 VAR_4->device_name = VAR_3->rc_name;
 VAR_4->input_phys = VAR_3->rc_phys;

 FUNC_0(VAR_3->udev, &VAR_4->input_id);
 VAR_4->dev.parent = &VAR_3->interface->dev;
}
