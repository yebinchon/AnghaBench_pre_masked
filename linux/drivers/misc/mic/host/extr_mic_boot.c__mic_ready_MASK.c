
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mic_device {TYPE_1__* ops; } ;
struct cosm_device {int dummy; } ;
struct TYPE_2__ {int (* is_fw_ready ) (struct mic_device*) ;} ;


 struct mic_device* FUNC_0 (struct cosm_device*) ;
 int FUNC_1 (struct mic_device*) ;

__attribute__((used)) static bool FUNC_2(struct cosm_device *VAR_0)
{
 struct mic_device *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->ops->is_fw_ready(VAR_1);
}
