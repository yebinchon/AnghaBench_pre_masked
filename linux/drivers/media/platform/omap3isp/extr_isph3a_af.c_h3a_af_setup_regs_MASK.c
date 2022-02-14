
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int threshold; scalar_t__ enable; } ;
struct TYPE_7__ {int h_start; int* coeff_set0; int* coeff_set1; } ;
struct TYPE_6__ {int width; int height; int line_inc; int v_cnt; int h_cnt; int h_start; int v_start; } ;
struct omap3isp_h3a_af_config {int rgb_pos; scalar_t__ fvmode; int buf_size; TYPE_4__ hmf; scalar_t__ alaw_enable; TYPE_3__ iir; TYPE_2__ paxel; } ;
struct ispstat {scalar_t__ state; int buf_size; scalar_t__ inc_config; int config_counter; scalar_t__ update; int isp; TYPE_1__* active_buf; } ;
struct TYPE_5__ {int dma_addr; } ;


 scalar_t__ VAR_0 ;
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
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 int FUNC_0 (int ,int ,int ,int ,int) ;
 int FUNC_1 (int ,int,int ,int) ;

__attribute__((used)) static void FUNC_2(struct ispstat *VAR_25, void *VAR_26)
{
 struct omap3isp_h3a_af_config *VAR_27 = VAR_26;
 u32 VAR_28;
 u32 VAR_29;
 u32 VAR_30;
 u32 VAR_31;
 u32 VAR_32;
 u32 VAR_33;
 u32 VAR_34;
 int VAR_35;

 if (VAR_25->state == VAR_22)
  return;

 FUNC_1(VAR_25->isp, VAR_25->active_buf->dma_addr, VAR_24,
         VAR_12);

 if (!VAR_25->update)
  return;


 VAR_29 = ((VAR_27->paxel.width >> 1) - 1) << VAR_8;

 VAR_29 |= (VAR_27->paxel.height >> 1) - 1;
 FUNC_1(VAR_25->isp, VAR_29, VAR_24, VAR_18);



 VAR_30 = ((VAR_27->paxel.line_inc >> 1) - 1) << VAR_5;

 VAR_30 |= (VAR_27->paxel.v_cnt - 1) << VAR_11;

 VAR_30 |= (VAR_27->paxel.h_cnt - 1);
 FUNC_1(VAR_25->isp, VAR_30, VAR_24, VAR_19);



 VAR_31 = VAR_27->paxel.h_start << VAR_4;

 VAR_31 |= VAR_27->paxel.v_start;
 FUNC_1(VAR_25->isp, VAR_31, VAR_24,
         VAR_20);


 FUNC_1(VAR_25->isp, VAR_27->iir.h_start,
         VAR_24, VAR_17);

 VAR_33 = VAR_14;
 VAR_34 = VAR_16;
 for (VAR_35 = 0; VAR_35 <= 8; VAR_35 += 2) {

  VAR_32 = 0;
  VAR_32 |= VAR_27->iir.coeff_set0[VAR_35];
  VAR_32 |= VAR_27->iir.coeff_set0[VAR_35 + 1] <<
   VAR_2;
  FUNC_1(VAR_25->isp, VAR_32, VAR_24,
          VAR_33);
  VAR_33 += VAR_0;


  VAR_32 = 0;
  VAR_32 |= VAR_27->iir.coeff_set1[VAR_35];
  VAR_32 |= VAR_27->iir.coeff_set1[VAR_35 + 1] <<
   VAR_2;
  FUNC_1(VAR_25->isp, VAR_32, VAR_24,
          VAR_34);
  VAR_34 += VAR_0;
 }

 FUNC_1(VAR_25->isp, VAR_27->iir.coeff_set0[10],
         VAR_24, VAR_13);

 FUNC_1(VAR_25->isp, VAR_27->iir.coeff_set1[10],
         VAR_24, VAR_15);



 VAR_28 = VAR_27->rgb_pos << VAR_10;

 if (VAR_27->fvmode == VAR_23)
  VAR_28 |= VAR_3;

 if (VAR_27->alaw_enable)
  VAR_28 |= VAR_1;

 if (VAR_27->hmf.enable) {

  VAR_28 |= VAR_6;

  VAR_28 |= VAR_27->hmf.threshold << VAR_7;
 }

 FUNC_0(VAR_25->isp, VAR_24, VAR_21,
   VAR_9, VAR_28);

 VAR_25->update = 0;
 VAR_25->config_counter += VAR_25->inc_config;
 VAR_25->inc_config = 0;
 VAR_25->buf_size = VAR_27->buf_size;
}
