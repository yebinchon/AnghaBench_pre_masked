
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int stype; } ;
struct vio_net_attr_info {TYPE_1__ tag; } ;
struct vio_driver_state {int dummy; } ;


 int VAR_0 ;



 int FUNC_0 (struct vio_driver_state*,struct vio_net_attr_info*) ;
 int FUNC_1 (struct vio_driver_state*,struct vio_net_attr_info*) ;
 int FUNC_2 (struct vio_driver_state*,struct vio_net_attr_info*) ;

int FUNC_3(struct vio_driver_state *VAR_1, void *VAR_2)
{
 struct vio_net_attr_info *VAR_3 = VAR_2;

 switch (VAR_3->tag.stype) {
 case 129:
  return FUNC_1(VAR_1, VAR_3);

 case 130:
  return FUNC_0(VAR_1, VAR_3);

 case 128:
  return FUNC_2(VAR_1, VAR_3);

 default:
  return -VAR_0;
 }
}
