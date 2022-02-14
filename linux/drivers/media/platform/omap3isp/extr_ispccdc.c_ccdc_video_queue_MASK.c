
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct isp_video {TYPE_1__* isp; } ;
struct isp_ccdc_device {int output; scalar_t__ state; int underrun; int lock; scalar_t__ bt656; int running; } ;
struct isp_buffer {int dma; } ;
struct TYPE_2__ {struct isp_ccdc_device isp_ccdc; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct isp_ccdc_device*) ;
 int FUNC_1 (struct isp_ccdc_device*,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct isp_video *VAR_3, struct isp_buffer *VAR_4)
{
 struct isp_ccdc_device *VAR_5 = &VAR_3->isp->isp_ccdc;
 unsigned long VAR_6;
 bool VAR_7 = 0;

 if (!(VAR_5->output & VAR_0))
  return -VAR_1;

 FUNC_1(VAR_5, VAR_4->dma);







 FUNC_2(&VAR_5->lock, VAR_6);
 if (VAR_5->state == VAR_2 && !VAR_5->running &&
     VAR_5->bt656)
  VAR_7 = 1;
 else
  VAR_5->underrun = 1;
 FUNC_3(&VAR_5->lock, VAR_6);

 if (VAR_7)
  FUNC_0(VAR_5);

 return 0;
}
