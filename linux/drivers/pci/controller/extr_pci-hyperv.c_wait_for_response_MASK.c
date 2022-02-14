
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hv_device {int device; TYPE_1__* channel; } ;
struct completion {int dummy; } ;
struct TYPE_2__ {scalar_t__ rescind; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (struct completion*,int) ;

__attribute__((used)) static int FUNC_2(struct hv_device *VAR_2,
        struct completion *VAR_3)
{
 while (1) {
  if (VAR_2->channel->rescind) {
   FUNC_0(&VAR_2->device, "The device is gone.\n");
   return -VAR_0;
  }

  if (FUNC_1(VAR_3, VAR_1 / 10))
   break;
 }

 return 0;
}
