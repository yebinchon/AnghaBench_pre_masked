
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gb_svc {int ap_intf_id; } ;
struct gb_interface {int interface_id; } ;
struct gb_camera {TYPE_2__* connection; } ;
struct TYPE_4__ {TYPE_1__* hd; struct gb_interface* intf; } ;
struct TYPE_3__ {struct gb_svc* svc; } ;


 int FUNC_0 (struct gb_camera*,int ,int) ;
 int FUNC_1 (struct gb_camera*,char*,char*,int) ;

__attribute__((used)) static int FUNC_2(struct gb_camera *VAR_0, bool VAR_1)
{
 struct gb_interface *VAR_2 = VAR_0->connection->intf;
 struct gb_svc *VAR_3 = VAR_0->connection->hd->svc;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_2->interface_id, VAR_1);
 if (VAR_4 < 0) {
  FUNC_1(VAR_0, "failed to set module interface to %s (%d)\n",
    VAR_1 ? "HS" : "PWM", VAR_4);
  return VAR_4;
 }

 VAR_4 = FUNC_0(VAR_0, VAR_3->ap_intf_id, VAR_1);
 if (VAR_4 < 0) {
  FUNC_0(VAR_0, VAR_2->interface_id, !VAR_1);
  FUNC_1(VAR_0, "failed to set AP interface to %s (%d)\n",
    VAR_1 ? "HS" : "PWM", VAR_4);
  return VAR_4;
 }

 return 0;
}
