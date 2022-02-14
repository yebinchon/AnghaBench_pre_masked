
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct isp_video {scalar_t__ type; TYPE_1__* isp; } ;
struct isp_prev_device {int dummy; } ;
struct isp_buffer {int dma; } ;
struct TYPE_2__ {struct isp_prev_device isp_prev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct isp_prev_device*,int ) ;
 int FUNC_1 (struct isp_prev_device*,int ) ;

__attribute__((used)) static int FUNC_2(struct isp_video *VAR_2,
          struct isp_buffer *VAR_3)
{
 struct isp_prev_device *VAR_4 = &VAR_2->isp->isp_prev;

 if (VAR_2->type == VAR_1)
  FUNC_0(VAR_4, VAR_3->dma);

 if (VAR_2->type == VAR_0)
  FUNC_1(VAR_4, VAR_3->dma);

 return 0;
}
