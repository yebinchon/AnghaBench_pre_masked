
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mic_device {TYPE_1__* ops; } ;
struct cosm_device {int dummy; } ;
struct TYPE_2__ {int (* reset ) (struct mic_device*) ;int (* reset_fw_ready ) (struct mic_device*) ;} ;


 struct mic_device* FUNC_0 (struct cosm_device*) ;
 int FUNC_1 (struct mic_device*) ;
 int FUNC_2 (struct mic_device*) ;

__attribute__((used)) static void FUNC_3(struct cosm_device *VAR_0)
{
 struct mic_device *VAR_1 = FUNC_0(VAR_0);

 VAR_1->ops->reset_fw_ready(VAR_1);
 VAR_1->ops->reset(VAR_1);
}
