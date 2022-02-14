
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int mutex; } ;
struct TYPE_3__ {int mutex; } ;
struct isp_device {TYPE_2__ isp_csiphy2; TYPE_1__ isp_csiphy1; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct isp_device *VAR_0)
{
 FUNC_0(&VAR_0->isp_csiphy1.mutex);
 FUNC_0(&VAR_0->isp_csiphy2.mutex);
}
