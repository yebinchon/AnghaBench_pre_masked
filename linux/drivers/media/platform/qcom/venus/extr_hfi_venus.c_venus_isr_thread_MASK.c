
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct venus_resources {int vmem_addr; int vmem_size; int vmem_id; } ;
struct venus_hfi_device {int irq_status; int pwr_collapse_prep; int release_resource; void* pkt_buf; TYPE_1__* core; } ;
struct venus_core {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {struct venus_resources* res; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct venus_core*,void*) ;
 int FUNC_2 (struct venus_core*) ;
 struct venus_hfi_device* FUNC_3 (struct venus_core*) ;
 int FUNC_4 (struct venus_hfi_device*) ;
 int FUNC_5 (struct venus_core*,int ,int ,int ,struct venus_hfi_device*) ;
 int FUNC_6 (struct venus_hfi_device*,void*) ;
 int FUNC_7 (struct venus_hfi_device*,void*) ;
 int FUNC_8 (struct venus_hfi_device*) ;

__attribute__((used)) static irqreturn_t FUNC_9(struct venus_core *VAR_3)
{
 struct venus_hfi_device *VAR_4 = FUNC_3(VAR_3);
 const struct venus_resources *VAR_5;
 void *VAR_6;
 u32 VAR_7;

 if (!VAR_4)
  return VAR_1;

 VAR_5 = VAR_4->core->res;
 VAR_6 = VAR_4->pkt_buf;

 if (VAR_4->irq_status & VAR_2) {
  FUNC_8(VAR_4);
  FUNC_2(VAR_3);
 }

 while (!FUNC_6(VAR_4, VAR_6)) {
  VAR_7 = FUNC_1(VAR_3, VAR_6);
  switch (VAR_7) {
  case 131:
   FUNC_7(VAR_4, VAR_6);
   break;
  case 130:
   FUNC_5(VAR_3, VAR_5->vmem_id,
          VAR_5->vmem_size,
          VAR_5->vmem_addr,
          VAR_4);
   break;
  case 128:
   FUNC_0(&VAR_4->release_resource);
   break;
  case 129:
   FUNC_0(&VAR_4->pwr_collapse_prep);
   break;
  default:
   break;
  }
 }

 FUNC_4(VAR_4);

 return VAR_0;
}
