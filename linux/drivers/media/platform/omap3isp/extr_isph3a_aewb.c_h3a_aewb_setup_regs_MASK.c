
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct omap3isp_h3a_aewb_config {int saturation_limit; int win_height; int win_width; int ver_win_count; int hor_win_count; int hor_win_start; int ver_win_start; int blk_ver_win_start; int blk_win_height; int subsample_ver_inc; int subsample_hor_inc; int buf_size; int alaw_enable; } ;
struct ispstat {scalar_t__ state; int buf_size; scalar_t__ inc_config; int config_counter; scalar_t__ update; int isp; TYPE_1__* active_buf; } ;
struct TYPE_2__ {int dma_addr; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (int ,int ,int ,int ,int) ;
 int FUNC_1 (int ,int,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct ispstat *VAR_21, void *VAR_22)
{
 struct omap3isp_h3a_aewb_config *VAR_23 = VAR_22;
 u32 VAR_24;
 u32 VAR_25;
 u32 VAR_26;
 u32 VAR_27;
 u32 VAR_28;

 if (VAR_21->state == VAR_19)
  return;

 FUNC_1(VAR_21->isp, VAR_21->active_buf->dma_addr,
         VAR_20, VAR_0);

 if (!VAR_21->update)
  return;


 VAR_24 = VAR_23->saturation_limit << VAR_17;
 VAR_24 |= !!VAR_23->alaw_enable << VAR_16;

 VAR_25 = ((VAR_23->win_height >> 1) - 1) << VAR_12;
 VAR_25 |= ((VAR_23->win_width >> 1) - 1) << VAR_14;
 VAR_25 |= (VAR_23->ver_win_count - 1) << VAR_13;
 VAR_25 |= (VAR_23->hor_win_count - 1) << VAR_11;

 VAR_26 = VAR_23->hor_win_start << VAR_5;
 VAR_26 |= VAR_23->ver_win_start << VAR_6;

 VAR_27 = VAR_23->blk_ver_win_start << VAR_3;
 VAR_27 |= ((VAR_23->blk_win_height >> 1) - 1) << VAR_2;

 VAR_28 = ((VAR_23->subsample_ver_inc >> 1) - 1) <<
   VAR_9;
 VAR_28 |= ((VAR_23->subsample_hor_inc >> 1) - 1) <<
    VAR_8;

 FUNC_1(VAR_21->isp, VAR_25, VAR_20, VAR_10);
 FUNC_1(VAR_21->isp, VAR_26, VAR_20,
         VAR_4);
 FUNC_1(VAR_21->isp, VAR_27, VAR_20, VAR_1);
 FUNC_1(VAR_21->isp, VAR_28, VAR_20,
         VAR_7);
 FUNC_0(VAR_21->isp, VAR_20, VAR_15,
   VAR_18, VAR_24);

 VAR_21->update = 0;
 VAR_21->config_counter += VAR_21->inc_config;
 VAR_21->inc_config = 0;
 VAR_21->buf_size = VAR_23->buf_size;
}
