
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap3isp_hist_config {scalar_t__ num_acc_frames; } ;
struct ispstat {scalar_t__ state; scalar_t__ wait_acc_frames; scalar_t__ dma_ch; int buf_err; struct omap3isp_hist_config* priv; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct ispstat*) ;
 int FUNC_2 (struct ispstat*) ;
 int FUNC_3 (struct ispstat*) ;

__attribute__((used)) static int FUNC_4(struct ispstat *VAR_2)
{
 struct omap3isp_hist_config *VAR_3 = VAR_2->priv;
 int VAR_4;

 if (FUNC_0(&VAR_2->buf_err) || VAR_2->state != VAR_0) {
  FUNC_3(VAR_2);
  return VAR_1;
 }

 if (--(VAR_2->wait_acc_frames))
  return VAR_1;

 if (VAR_2->dma_ch)
  VAR_4 = FUNC_1(VAR_2);
 else
  VAR_4 = FUNC_2(VAR_2);

 VAR_2->wait_acc_frames = VAR_3->num_acc_frames;

 return VAR_4;
}
