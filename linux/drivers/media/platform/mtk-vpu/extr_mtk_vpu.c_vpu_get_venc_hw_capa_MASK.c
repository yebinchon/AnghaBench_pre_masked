
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct TYPE_2__ {unsigned int enc_capability; } ;
struct mtk_vpu {TYPE_1__ run; } ;


 struct mtk_vpu* FUNC_0 (struct platform_device*) ;

unsigned int FUNC_1(struct platform_device *VAR_0)
{
 struct mtk_vpu *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->run.enc_capability;
}
