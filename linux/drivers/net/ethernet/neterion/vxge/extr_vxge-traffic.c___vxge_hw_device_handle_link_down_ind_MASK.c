
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct __vxge_hw_device {scalar_t__ link_state; TYPE_1__* uld_callbacks; } ;
typedef enum vxge_hw_status { ____Placeholder_vxge_hw_status } vxge_hw_status ;
struct TYPE_2__ {int (* link_down ) (struct __vxge_hw_device*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct __vxge_hw_device*) ;

__attribute__((used)) static enum vxge_hw_status
FUNC_1(struct __vxge_hw_device *VAR_2)
{



 if (VAR_2->link_state == VAR_0)
  goto exit;

 VAR_2->link_state = VAR_0;


 if (VAR_2->uld_callbacks->link_down)
  VAR_2->uld_callbacks->link_down(VAR_2);
exit:
 return VAR_1;
}
