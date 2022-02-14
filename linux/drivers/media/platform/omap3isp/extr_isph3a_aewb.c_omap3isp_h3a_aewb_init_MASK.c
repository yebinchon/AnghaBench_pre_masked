
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap3isp_h3a_aewb_config {int win_height; int ver_win_count; int buf_size; void* subsample_hor_inc; void* subsample_ver_inc; void* blk_win_height; scalar_t__ ver_win_start; scalar_t__ blk_ver_win_start; int hor_win_count; int win_width; int saturation_limit; } ;
struct ispstat {struct omap3isp_h3a_aewb_config* recover_priv; struct isp_device* isp; int event_type; struct omap3isp_h3a_aewb_config* priv; int * ops; } ;
struct isp_device {int dev; struct ispstat isp_aewb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct omap3isp_h3a_aewb_config*) ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_2 (struct ispstat*,struct omap3isp_h3a_aewb_config*) ;
 int FUNC_3 (struct omap3isp_h3a_aewb_config*) ;
 struct omap3isp_h3a_aewb_config* FUNC_4 (int,int ) ;
 int FUNC_5 (struct ispstat*,char*,int *) ;

int FUNC_6(struct isp_device *VAR_12)
{
 struct ispstat *VAR_13 = &VAR_12->isp_aewb;
 struct omap3isp_h3a_aewb_config *VAR_14;
 struct omap3isp_h3a_aewb_config *VAR_15 = ((void*)0);
 int VAR_16;

 VAR_14 = FUNC_4(sizeof(*VAR_14), VAR_2);
 if (!VAR_14)
  return -VAR_1;

 VAR_13->ops = &VAR_10;
 VAR_13->priv = VAR_14;
 VAR_13->event_type = VAR_9;
 VAR_13->isp = VAR_12;


 VAR_15 = FUNC_4(sizeof(*VAR_15), VAR_2);
 if (!VAR_15) {
  FUNC_0(VAR_13->isp->dev,
   "AEWB: cannot allocate memory for recover configuration.\n");
  VAR_16 = -VAR_1;
  goto err;
 }

 VAR_15->saturation_limit = VAR_3;
 VAR_15->win_height = VAR_7;
 VAR_15->win_width = VAR_8;
 VAR_15->ver_win_count = VAR_6;
 VAR_15->hor_win_count = VAR_5;
 VAR_15->blk_ver_win_start = VAR_15->ver_win_start +
  VAR_15->win_height * VAR_15->ver_win_count;
 VAR_15->blk_win_height = VAR_7;
 VAR_15->subsample_ver_inc = VAR_4;
 VAR_15->subsample_hor_inc = VAR_4;

 if (FUNC_2(VAR_13, VAR_15)) {
  FUNC_0(VAR_13->isp->dev,
   "AEWB: recover configuration is invalid.\n");
  VAR_16 = -VAR_0;
  goto err;
 }

 VAR_15->buf_size = FUNC_1(VAR_15);
 VAR_13->recover_priv = VAR_15;

 VAR_16 = FUNC_5(VAR_13, "AEWB", &VAR_11);

err:
 if (VAR_16) {
  FUNC_3(VAR_14);
  FUNC_3(VAR_15);
 }

 return VAR_16;
}
