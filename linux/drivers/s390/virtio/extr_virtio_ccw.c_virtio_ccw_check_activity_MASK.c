
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtio_ccw_device {int curr_io; TYPE_1__* cdev; int wait_q; } ;
typedef int __u32 ;
struct TYPE_2__ {int dev; } ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct virtio_ccw_device *VAR_0,
          __u32 VAR_1)
{
 if (VAR_0->curr_io & VAR_1) {
  switch (VAR_1) {
  case 139:
  case 129:
  case 140:
  case 130:
  case 128:
  case 138:
  case 131:
  case 134:
  case 135:
  case 136:
  case 137:
  case 133:
  case 132:
   VAR_0->curr_io &= ~VAR_1;
   FUNC_2(&VAR_0->wait_q);
   break;
  default:

   FUNC_1(&VAR_0->cdev->dev,
     "Suspicious activity '%08x'\n", VAR_1);
   FUNC_0(1);
   break;
  }
 }
}
