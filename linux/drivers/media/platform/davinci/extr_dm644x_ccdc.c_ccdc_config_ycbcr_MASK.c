
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int width; } ;
struct ccdc_params_ycbcr {int pix_fmt; int frm_fmt; int fid_pol; int hd_pol; int vd_pol; int pix_order; scalar_t__ buf_type; TYPE_1__ win; scalar_t__ bt656_enable; } ;
struct TYPE_4__ {scalar_t__ if_type; int dev; struct ccdc_params_ycbcr ycbcr; } ;


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
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 scalar_t__ VAR_27 ;
 TYPE_2__ VAR_28 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*,int,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static void FUNC_5(void)
{
 struct ccdc_params_ycbcr *VAR_29 = &VAR_28.ycbcr;
 u32 VAR_30;

 FUNC_3(VAR_28.dev, "\nStarting ccdc_config_ycbcr...");





 FUNC_0();






 VAR_30 = (((VAR_29->pix_fmt & VAR_20) <<
      VAR_21) |
      ((VAR_29->frm_fmt & VAR_15) <<
      VAR_16) | VAR_23 |
      VAR_26 | VAR_4);


 if (VAR_29->bt656_enable) {
  FUNC_4(VAR_12, VAR_11);





  VAR_30 |= VAR_22;
  if (VAR_28.if_type == VAR_27)
   VAR_30 |= VAR_18;
  else
   VAR_30 |= VAR_19;
 } else {

  VAR_30 |= (((VAR_29->fid_pol & VAR_5) <<
        VAR_6) |
        ((VAR_29->hd_pol & VAR_7) <<
        VAR_8) |
        ((VAR_29->vd_pol & VAR_24) <<
        VAR_25));
 }
 FUNC_4(VAR_30, VAR_17);


 FUNC_2(&VAR_29->win, VAR_29->frm_fmt, 2);





 if (VAR_28.if_type == VAR_27)
  FUNC_4((VAR_29->pix_order << VAR_3) |
   VAR_10 | VAR_2,
   VAR_1);
 else
  FUNC_4((VAR_29->pix_order << VAR_3) |
   VAR_10, VAR_1);





 FUNC_4(((VAR_29->win.width * 2 + 31) & ~0x1f), VAR_9);


 if (VAR_29->buf_type == VAR_0)

  FUNC_4(VAR_14, VAR_13);

 FUNC_1();
 FUNC_3(VAR_28.dev, "\nEnd of ccdc_config_ycbcr...\n");
}
