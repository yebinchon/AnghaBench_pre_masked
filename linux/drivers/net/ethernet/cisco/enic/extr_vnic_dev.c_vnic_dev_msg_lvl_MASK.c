
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int msglvl; } ;
struct vnic_dev {TYPE_1__ notify_copy; } ;


 int FUNC_0 (struct vnic_dev*) ;

u32 FUNC_1(struct vnic_dev *VAR_0)
{
 if (!FUNC_0(VAR_0))
  return 0;

 return VAR_0->notify_copy.msglvl;
}
