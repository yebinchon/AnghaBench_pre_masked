
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct omap3isp_h3a_aewb_config {scalar_t__ saturation_limit; int win_height; int win_width; scalar_t__ ver_win_count; scalar_t__ hor_win_count; scalar_t__ ver_win_start; scalar_t__ hor_win_start; scalar_t__ blk_ver_win_start; int blk_win_height; int subsample_ver_inc; int subsample_hor_inc; scalar_t__ buf_size; } ;
struct ispstat {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_0 (struct omap3isp_h3a_aewb_config*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct ispstat *VAR_14, void *VAR_15)
{
 struct omap3isp_h3a_aewb_config *VAR_16 = VAR_15;
 u32 VAR_17;

 if (FUNC_1(VAR_16->saturation_limit >
       VAR_2))
  return -VAR_0;

 if (FUNC_1(VAR_16->win_height < VAR_12 ||
       VAR_16->win_height > VAR_7 ||
       VAR_16->win_height & 0x01))
  return -VAR_0;

 if (FUNC_1(VAR_16->win_width < VAR_13 ||
       VAR_16->win_width > VAR_8 ||
       VAR_16->win_width & 0x01))
  return -VAR_0;

 if (FUNC_1(VAR_16->ver_win_count < VAR_11 ||
       VAR_16->ver_win_count > VAR_6))
  return -VAR_0;

 if (FUNC_1(VAR_16->hor_win_count < VAR_10 ||
       VAR_16->hor_win_count > VAR_4))
  return -VAR_0;

 if (FUNC_1(VAR_16->ver_win_start > VAR_5))
  return -VAR_0;

 if (FUNC_1(VAR_16->hor_win_start > VAR_5))
  return -VAR_0;

 if (FUNC_1(VAR_16->blk_ver_win_start > VAR_5))
  return -VAR_0;

 if (FUNC_1(VAR_16->blk_win_height < VAR_12 ||
       VAR_16->blk_win_height > VAR_7 ||
       VAR_16->blk_win_height & 0x01))
  return -VAR_0;

 if (FUNC_1(VAR_16->subsample_ver_inc < VAR_9 ||
       VAR_16->subsample_ver_inc > VAR_3 ||
       VAR_16->subsample_ver_inc & 0x01))
  return -VAR_0;

 if (FUNC_1(VAR_16->subsample_hor_inc < VAR_9 ||
       VAR_16->subsample_hor_inc > VAR_3 ||
       VAR_16->subsample_hor_inc & 0x01))
  return -VAR_0;

 VAR_17 = FUNC_0(VAR_16);
 if (VAR_17 > VAR_16->buf_size)
  VAR_16->buf_size = VAR_17;
 else if (VAR_16->buf_size > VAR_1)
  VAR_16->buf_size = VAR_1;

 return 0;
}
