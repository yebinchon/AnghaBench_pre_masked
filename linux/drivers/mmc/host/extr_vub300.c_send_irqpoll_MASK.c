
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int header_size; int header_type; int command_type; int poll_timeout_lsb; int poll_timeout_msb; scalar_t__ port_number; } ;
struct TYPE_4__ {TYPE_1__ poll; } ;
struct vub300_mmc_host {int usb_transport_fail; int irqpoll_complete; int command_out_urb; TYPE_2__ cmnd; int cmnd_out_ep; int udev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ,TYPE_2__*,int,int ,struct vub300_mmc_host*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct vub300_mmc_host*,int) ;

__attribute__((used)) static void FUNC_5(struct vub300_mmc_host *VAR_3)
{

 int VAR_4;
 int VAR_5 = 0xFFFF & (0x0001FFFF - VAR_1);
 VAR_3->cmnd.poll.header_size = 22;
 VAR_3->cmnd.poll.header_type = 1;
 VAR_3->cmnd.poll.port_number = 0;
 VAR_3->cmnd.poll.command_type = 2;
 VAR_3->cmnd.poll.poll_timeout_lsb = 0xFF & (unsigned)VAR_5;
 VAR_3->cmnd.poll.poll_timeout_msb = 0xFF & (unsigned)(VAR_5 >> 8);
 FUNC_1(VAR_3->command_out_urb, VAR_3->udev,
     FUNC_2(VAR_3->udev, VAR_3->cmnd_out_ep)
     , &VAR_3->cmnd, sizeof(VAR_3->cmnd)
     , VAR_2, VAR_3);
 VAR_4 = FUNC_3(VAR_3->command_out_urb, VAR_0);
 if (0 > VAR_4) {
  VAR_3->usb_transport_fail = VAR_4;
  FUNC_4(VAR_3, 1);
  FUNC_0(&VAR_3->irqpoll_complete);
  return;
 } else {
  return;
 }
}
