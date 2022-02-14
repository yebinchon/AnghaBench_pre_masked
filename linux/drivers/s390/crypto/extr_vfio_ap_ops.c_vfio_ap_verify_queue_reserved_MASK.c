
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vfio_ap_queue_reserved {unsigned long* apid; unsigned long* apqi; int reserved; } ;
struct TYPE_4__ {TYPE_1__* vfio_ap_drv; } ;
struct TYPE_3__ {int driver; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,struct vfio_ap_queue_reserved*,int ) ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(unsigned long *VAR_3,
      unsigned long *VAR_4)
{
 int VAR_5;
 struct vfio_ap_queue_reserved VAR_6;

 VAR_6.apid = VAR_3;
 VAR_6.apqi = VAR_4;
 VAR_6.reserved = 0;

 VAR_5 = FUNC_0(&VAR_1->vfio_ap_drv->driver, ((void*)0),
         &VAR_6, VAR_2);
 if (VAR_5)
  return VAR_5;

 if (VAR_6.reserved)
  return 0;

 return -VAR_0;
}
