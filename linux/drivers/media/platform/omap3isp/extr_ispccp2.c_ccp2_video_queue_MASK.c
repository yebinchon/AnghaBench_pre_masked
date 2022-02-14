
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct isp_video {TYPE_1__* isp; } ;
struct isp_ccp2_device {int dummy; } ;
struct isp_buffer {int dma; } ;
struct TYPE_2__ {struct isp_ccp2_device isp_ccp2; } ;


 int FUNC_0 (struct isp_ccp2_device*,int ) ;

__attribute__((used)) static int FUNC_1(struct isp_video *VAR_0, struct isp_buffer *VAR_1)
{
 struct isp_ccp2_device *VAR_2 = &VAR_0->isp->isp_ccp2;

 FUNC_0(VAR_2, VAR_1->dma);
 return 0;
}
