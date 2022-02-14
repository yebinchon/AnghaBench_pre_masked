
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isp_device {int dummy; } ;
struct isp_csi2_device {int video_out; struct isp_device* isp; } ;
struct isp_buffer {int dma; } ;


 int FUNC_0 (struct isp_device*,struct isp_csi2_device*,int ,int) ;
 int FUNC_1 (struct isp_csi2_device*,int ) ;
 struct isp_buffer* FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct isp_csi2_device *VAR_0)
{
 struct isp_device *VAR_1 = VAR_0->isp;
 struct isp_buffer *VAR_2;

 FUNC_0(VAR_1, VAR_0, 0, 0);

 VAR_2 = FUNC_2(&VAR_0->video_out);





 if (VAR_2 == ((void*)0))
  return;

 FUNC_1(VAR_0, VAR_2->dma);
 FUNC_0(VAR_1, VAR_0, 0, 1);
}
