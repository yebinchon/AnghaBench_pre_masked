
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vub300_mmc_host {int command_complete; TYPE_1__* command_res_urb; int resp; int udev; int cmnd_res_ep; } ;
struct urb {scalar_t__ status; scalar_t__ context; } ;
struct TYPE_3__ {scalar_t__ actual_length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int ,unsigned int,int *,int,int ,struct vub300_mmc_host*) ;
 unsigned int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_4(struct urb *VAR_2)
{
 struct vub300_mmc_host *VAR_3 = (struct vub300_mmc_host *)VAR_2->context;
 if (VAR_2->status) {
  FUNC_0(&VAR_3->command_complete);
 } else {
  int VAR_4;
  unsigned int VAR_5 =
   FUNC_2(VAR_3->udev, VAR_3->cmnd_res_ep);
  FUNC_1(VAR_3->command_res_urb, VAR_3->udev, VAR_5,
      &VAR_3->resp, sizeof(VAR_3->resp),
      VAR_1, VAR_3);
  VAR_3->command_res_urb->actual_length = 0;
  VAR_4 = FUNC_3(VAR_3->command_res_urb, VAR_0);
  if (VAR_4 == 0) {




  } else {




   FUNC_0(&VAR_3->command_complete);
  }
 }
}
