
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct switchdev_obj_port_vlan {scalar_t__ vid_begin; scalar_t__ vid_end; int flags; } ;
struct rocker_port {struct ofdpa_port* wpriv; } ;
struct ofdpa_port {int dummy; } ;


 int FUNC_0 (struct ofdpa_port*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_1(struct rocker_port *VAR_0,
       const struct switchdev_obj_port_vlan *VAR_1)
{
 struct ofdpa_port *VAR_2 = VAR_0->wpriv;
 u16 VAR_3;
 int VAR_4;

 for (VAR_3 = VAR_1->vid_begin; VAR_3 <= VAR_1->vid_end; VAR_3++) {
  VAR_4 = FUNC_0(VAR_2, VAR_3, VAR_1->flags);
  if (VAR_4)
   return VAR_4;
 }

 return 0;
}
