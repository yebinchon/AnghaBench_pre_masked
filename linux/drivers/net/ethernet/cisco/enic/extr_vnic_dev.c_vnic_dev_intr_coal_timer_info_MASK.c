
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_2__ {void* max_usec; void* div; void* mul; } ;
struct vnic_dev {int (* devcmd_rtn ) (struct vnic_dev*,int ,int) ;scalar_t__* args; TYPE_1__ intr_coal_timer_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__*,int ,int) ;
 int FUNC_1 (struct vnic_dev*,int ,int) ;
 int FUNC_2 (struct vnic_dev*,char*) ;
 scalar_t__ FUNC_3 (struct vnic_dev*,int ) ;
 int FUNC_4 (struct vnic_dev*) ;

int FUNC_5(struct vnic_dev *VAR_2)
{
 int VAR_3 = 1000;
 int VAR_4;

 FUNC_0(VAR_2->args, 0, sizeof(VAR_2->args));

 if (FUNC_3(VAR_2, VAR_0))
  VAR_4 = VAR_2->devcmd_rtn(VAR_2, VAR_0, VAR_3);
 else
  VAR_4 = VAR_1;




 if ((VAR_4 == VAR_1) ||
  (!VAR_4 && !(VAR_2->args[0] && VAR_2->args[1] && VAR_2->args[2]))) {
  FUNC_2(VAR_2, "Using default conversion factor for interrupt coalesce timer\n");
  FUNC_4(VAR_2);
  return 0;
 }

 if (!VAR_4) {
  VAR_2->intr_coal_timer_info.mul = (u32) VAR_2->args[0];
  VAR_2->intr_coal_timer_info.div = (u32) VAR_2->args[1];
  VAR_2->intr_coal_timer_info.max_usec = (u32) VAR_2->args[2];
 }

 return VAR_4;
}
