
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct omap3isp_h3a_af_paxel {int h_cnt; int v_cnt; int height; int width; int line_inc; scalar_t__ h_start; } ;
struct omap3isp_h3a_af_iir {scalar_t__ h_start; scalar_t__* coeff_set0; scalar_t__* coeff_set1; } ;
struct omap3isp_h3a_af_config {scalar_t__ buf_size; struct omap3isp_h3a_af_iir iir; struct omap3isp_h3a_af_paxel paxel; } ;
struct ispstat {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int ,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_1 (struct omap3isp_h3a_af_config*) ;

__attribute__((used)) static int FUNC_2(struct ispstat *VAR_18, void *VAR_19)
{
 struct omap3isp_h3a_af_config *VAR_20 = VAR_19;
 struct omap3isp_h3a_af_paxel *VAR_21 = &VAR_20->paxel;
 struct omap3isp_h3a_af_iir *VAR_22 = &VAR_20->iir;
 int VAR_23;
 u32 VAR_24;


 if (FUNC_0(VAR_21->h_cnt,
        VAR_9,
        VAR_8))
  return -VAR_0;


 if (FUNC_0(VAR_21->v_cnt,
        VAR_15,
        VAR_14))
  return -VAR_0;

 if (FUNC_0(VAR_21->height, VAR_7,
        VAR_6) ||
     VAR_21->height % 2)
  return -VAR_0;


 if (FUNC_0(VAR_21->width, VAR_17,
        VAR_16) ||
     VAR_21->width % 2)
  return -VAR_0;


 if (FUNC_0(VAR_21->line_inc,
        VAR_13,
        VAR_12) ||
     VAR_21->line_inc % 2)
  return -VAR_0;


 if ((VAR_21->h_start < VAR_22->h_start) ||
     FUNC_0(VAR_21->h_start,
        VAR_11,
        VAR_10))
  return -VAR_0;


 for (VAR_23 = 0; VAR_23 < VAR_5; VAR_23++) {
  if ((VAR_22->coeff_set0[VAR_23]) > VAR_1)
   return -VAR_0;

  if ((VAR_22->coeff_set1[VAR_23]) > VAR_1)
   return -VAR_0;
 }

 if (FUNC_0(VAR_22->h_start, VAR_3,
        VAR_2))
  return -VAR_0;


 if ((VAR_21->h_cnt * VAR_21->v_cnt > 9) &&
     (VAR_21->width * VAR_21->height == 12))
  return -VAR_0;

 VAR_24 = FUNC_1(VAR_20);
 if (VAR_24 > VAR_20->buf_size)

  VAR_20->buf_size = VAR_24;
 else if (VAR_20->buf_size > VAR_4)
  VAR_20->buf_size = VAR_4;

 return 0;
}
