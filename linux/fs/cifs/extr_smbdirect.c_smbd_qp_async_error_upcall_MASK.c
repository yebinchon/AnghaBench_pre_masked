
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smbd_connection {int dummy; } ;
struct ib_event {int event; TYPE_1__* device; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int ,int ,struct smbd_connection*) ;
 int FUNC_2 (struct smbd_connection*) ;

__attribute__((used)) static void
FUNC_3(struct ib_event *VAR_1, void *VAR_2)
{
 struct smbd_connection *VAR_3 = VAR_2;

 FUNC_1(VAR_0, "%s on device %s info %p\n",
  FUNC_0(VAR_1->event), VAR_1->device->name, VAR_3);

 switch (VAR_1->event) {
 case 129:
 case 128:
  FUNC_2(VAR_3);

 default:
  break;
 }
}
