
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct u132_udev {scalar_t__* endp_number_out; scalar_t__* endp_number_in; scalar_t__ portnumber; scalar_t__ usb_addr; scalar_t__ udev_number; int * usb_device; } ;
struct u132_ring {int number; int scheduler; int * curr_endp; scalar_t__ length; struct u132* u132; } ;
struct u132_port {scalar_t__ Status; scalar_t__ power; scalar_t__ enable; scalar_t__ reset; struct u132* u132; } ;
struct u132_addr {scalar_t__ address; } ;
struct u132 {int sw_lock; int ** endp; struct u132_udev* udev; struct u132_addr* addr; struct u132_port* port; int monitor; struct u132_ring* ring; int scheduler_lock; scalar_t__ reset; scalar_t__ power; struct platform_device* platform_dev; int board; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_6(struct u132 *VAR_7, struct platform_device *VAR_8)
{
 int VAR_9 = VAR_3;
 int VAR_10 = VAR_2;
 int VAR_11 = VAR_0;
 int VAR_12 = VAR_4;
 int VAR_13 = VAR_1;
 VAR_7->board = FUNC_2(&VAR_8->dev);
 VAR_7->platform_dev = VAR_8;
 VAR_7->power = 0;
 VAR_7->reset = 0;
 FUNC_3(&VAR_7->sw_lock);
 FUNC_3(&VAR_7->scheduler_lock);
 while (VAR_9-- > 0) {
  struct u132_ring *VAR_14 = &VAR_7->ring[VAR_9];
  VAR_14->u132 = VAR_7;
  VAR_14->number = VAR_9 + 1;
  VAR_14->length = 0;
  VAR_14->curr_endp = ((void*)0);
  FUNC_1(&VAR_14->scheduler,
      VAR_6);
 }
 FUNC_4(&VAR_7->sw_lock);
 FUNC_1(&VAR_7->monitor, VAR_5);
 while (VAR_10-- > 0) {
  struct u132_port *VAR_15 = &VAR_7->port[VAR_10];
  VAR_15->u132 = VAR_7;
  VAR_15->reset = 0;
  VAR_15->enable = 0;
  VAR_15->power = 0;
  VAR_15->Status = 0;
 }
 while (VAR_11-- > 0) {
  struct u132_addr *VAR_16 = &VAR_7->addr[VAR_11];
  VAR_16->address = 0;
 }
 while (VAR_12-- > 0) {
  struct u132_udev *VAR_17 = &VAR_7->udev[VAR_12];
  int VAR_18 = FUNC_0(VAR_17->endp_number_in);
  int VAR_19 = FUNC_0(VAR_17->endp_number_out);
  VAR_17->usb_device = ((void*)0);
  VAR_17->udev_number = 0;
  VAR_17->usb_addr = 0;
  VAR_17->portnumber = 0;
  while (VAR_18-- > 0)
   VAR_17->endp_number_in[VAR_18] = 0;

  while (VAR_19-- > 0)
   VAR_17->endp_number_out[VAR_19] = 0;

 }
 while (VAR_13-- > 0)
  VAR_7->endp[VAR_13] = ((void*)0);

 FUNC_5(&VAR_7->sw_lock);
}
