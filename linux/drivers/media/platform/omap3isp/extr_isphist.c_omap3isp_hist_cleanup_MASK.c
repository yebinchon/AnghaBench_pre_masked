
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ispstat {scalar_t__ dma_ch; } ;
struct isp_device {struct ispstat isp_hist; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct ispstat*) ;

void FUNC_2(struct isp_device *VAR_0)
{
 struct ispstat *VAR_1 = &VAR_0->isp_hist;

 if (VAR_1->dma_ch)
  FUNC_0(VAR_1->dma_ch);

 FUNC_1(VAR_1);
}
