
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int line_inc; int v_cnt; int h_cnt; int height; int width; int h_start; } ;
struct omap3isp_h3a_af_config {int buf_size; TYPE_1__ paxel; } ;
struct ispstat {struct omap3isp_h3a_af_config* recover_priv; struct isp_device* isp; int event_type; struct omap3isp_h3a_af_config* priv; int * ops; } ;
struct isp_device {int dev; struct ispstat isp_af; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct omap3isp_h3a_af_config*) ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_2 (struct ispstat*,struct omap3isp_h3a_af_config*) ;
 int FUNC_3 (struct omap3isp_h3a_af_config*) ;
 struct omap3isp_h3a_af_config* FUNC_4 (int,int ) ;
 int FUNC_5 (struct ispstat*,char*,int *) ;

int FUNC_6(struct isp_device *VAR_12)
{
 struct ispstat *VAR_13 = &VAR_12->isp_af;
 struct omap3isp_h3a_af_config *VAR_14;
 struct omap3isp_h3a_af_config *VAR_15 = ((void*)0);
 int VAR_16;

 VAR_14 = FUNC_4(sizeof(*VAR_14), VAR_2);
 if (VAR_14 == ((void*)0))
  return -VAR_1;

 VAR_13->ops = &VAR_10;
 VAR_13->priv = VAR_14;
 VAR_13->event_type = VAR_9;
 VAR_13->isp = VAR_12;


 VAR_15 = FUNC_4(sizeof(*VAR_15), VAR_2);
 if (!VAR_15) {
  FUNC_0(VAR_13->isp->dev,
   "AF: cannot allocate memory for recover configuration.\n");
  VAR_16 = -VAR_1;
  goto err;
 }

 VAR_15->paxel.h_start = VAR_5;
 VAR_15->paxel.width = VAR_8;
 VAR_15->paxel.height = VAR_3;
 VAR_15->paxel.h_cnt = VAR_4;
 VAR_15->paxel.v_cnt = VAR_7;
 VAR_15->paxel.line_inc = VAR_6;
 if (FUNC_2(VAR_13, VAR_15)) {
  FUNC_0(VAR_13->isp->dev,
   "AF: recover configuration is invalid.\n");
  VAR_16 = -VAR_0;
  goto err;
 }

 VAR_15->buf_size = FUNC_1(VAR_15);
 VAR_13->recover_priv = VAR_15;

 VAR_16 = FUNC_5(VAR_13, "AF", &VAR_11);

err:
 if (VAR_16) {
  FUNC_3(VAR_14);
  FUNC_3(VAR_15);
 }

 return VAR_16;
}
