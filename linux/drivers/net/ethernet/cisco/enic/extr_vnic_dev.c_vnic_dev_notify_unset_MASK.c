
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnic_devcmd_notify {int dummy; } ;
struct vnic_dev {int notify_pa; scalar_t__ notify; int pdev; } ;


 int FUNC_0 (int ,int,scalar_t__,int ) ;
 int FUNC_1 (struct vnic_dev*) ;

int FUNC_2(struct vnic_dev *VAR_0)
{
 if (VAR_0->notify) {
  FUNC_0(VAR_0->pdev,
   sizeof(struct vnic_devcmd_notify),
   VAR_0->notify,
   VAR_0->notify_pa);
 }

 return FUNC_1(VAR_0);
}
