
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct isp_video {struct isp_device* isp; } ;
struct TYPE_2__ {int dmaqueue_flags; } ;
struct isp_csi2_device {TYPE_1__ video_out; } ;
struct isp_device {struct isp_csi2_device isp_csi2a; } ;
struct isp_buffer {int dma; } ;


 int VAR_0 ;
 int FUNC_0 (struct isp_device*,struct isp_csi2_device*,int ,int) ;
 int FUNC_1 (struct isp_device*,struct isp_csi2_device*,int) ;
 int FUNC_2 (struct isp_csi2_device*,int ) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(struct isp_video *VAR_1, struct isp_buffer *VAR_2)
{
 struct isp_device *VAR_3 = VAR_1->isp;
 struct isp_csi2_device *VAR_4 = &VAR_3->isp_csi2a;

 FUNC_2(VAR_4, VAR_2->dma);







 if (VAR_4->video_out.dmaqueue_flags & VAR_0) {

  FUNC_1(VAR_3, VAR_4, 1);
  FUNC_0(VAR_3, VAR_4, 0, 1);
  FUNC_3(&VAR_4->video_out);
 }

 return 0;
}
