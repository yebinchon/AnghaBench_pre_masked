
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc2_qh {scalar_t__ dw_align_buf_dma; scalar_t__ dw_align_buf; } ;
struct dwc2_hsotg {int dev; int unaligned_cache; } ;
struct dwc2_host_chan {scalar_t__ max_packet; scalar_t__ align_buf; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(struct dwc2_hsotg *VAR_6,
         struct dwc2_qh *VAR_7,
         struct dwc2_host_chan *VAR_8)
{
 if (!VAR_6->unaligned_cache ||
     VAR_8->max_packet > VAR_1)
  return -VAR_3;

 if (!VAR_7->dw_align_buf) {
  VAR_7->dw_align_buf = FUNC_3(VAR_6->unaligned_cache,
          VAR_4 | VAR_5);
  if (!VAR_7->dw_align_buf)
   return -VAR_3;
 }

 VAR_7->dw_align_buf_dma = FUNC_1(VAR_6->dev, VAR_7->dw_align_buf,
           VAR_1,
           VAR_0);

 if (FUNC_2(VAR_6->dev, VAR_7->dw_align_buf_dma)) {
  FUNC_0(VAR_6->dev, "can't map align_buf\n");
  VAR_8->align_buf = 0;
  return -VAR_2;
 }

 VAR_8->align_buf = VAR_7->dw_align_buf_dma;
 return 0;
}
