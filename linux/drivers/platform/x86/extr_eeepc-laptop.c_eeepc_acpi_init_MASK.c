
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct eeepc_laptop {int cm_supported; int handle; TYPE_2__* device; } ;
struct TYPE_3__ {int present; } ;
struct TYPE_4__ {TYPE_1__ status; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct eeepc_laptop*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,unsigned int) ;
 scalar_t__ FUNC_5 (int ,char*,int *) ;
 scalar_t__ FUNC_6 (int ,char*,unsigned int) ;

__attribute__((used)) static int FUNC_7(struct eeepc_laptop *VAR_3)
{
 unsigned int VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_3->device);
 if (VAR_5)
  return VAR_5;
 if (!VAR_3->device->status.present) {
  FUNC_2("Hotkey device not present, aborting\n");
  return -VAR_2;
 }

 VAR_4 = VAR_1 | VAR_0;
 FUNC_4("Hotkey init flags 0x%x\n", VAR_4);

 if (FUNC_6(VAR_3->handle, "INIT", VAR_4)) {
  FUNC_2("Hotkey initialization failed\n");
  return -VAR_2;
 }


 if (FUNC_5(VAR_3->handle, "CMSG", &VAR_3->cm_supported)) {
  FUNC_2("Get control methods supported failed\n");
  return -VAR_2;
 }
 FUNC_1(VAR_3);
 FUNC_3("Get control methods supported: 0x%x\n", VAR_3->cm_supported);

 return 0;
}
