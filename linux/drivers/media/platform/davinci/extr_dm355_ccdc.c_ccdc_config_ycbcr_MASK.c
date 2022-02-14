
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int width; } ;
struct ccdc_params_ycbcr {int pix_fmt; int frm_fmt; int fid_pol; int hd_pol; int vd_pol; int pix_order; scalar_t__ buf_type; TYPE_1__ win; scalar_t__ bt656_enable; } ;
struct TYPE_4__ {int dev; struct ccdc_params_ycbcr ycbcr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
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
 TYPE_2__ VAR_23 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,int,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static void FUNC_4(void)
{
 struct ccdc_params_ycbcr *VAR_24 = &VAR_23.ycbcr;
 u32 VAR_25;


 FUNC_2(VAR_23.dev, "\nStarting ccdc_config_ycbcr...");
 FUNC_0();


 VAR_25 = (((VAR_24->pix_fmt & VAR_10) <<
  VAR_11) |
  ((VAR_24->frm_fmt & VAR_6) <<
  VAR_7));


 if (VAR_24->bt656_enable) {
  FUNC_3(VAR_13, VAR_21);




  VAR_25 |= VAR_16;
 } else {
  VAR_25 |= (((VAR_24->fid_pol & VAR_4) <<
   VAR_5) |
   ((VAR_24->hd_pol & VAR_8) <<
   VAR_9) |
   ((VAR_24->vd_pol & VAR_15) <<
   VAR_17));
 }


 VAR_25 |= VAR_3;

 FUNC_3(VAR_25, VAR_20);


 FUNC_1(&VAR_24->win, VAR_24->frm_fmt, 2);


 VAR_25 = (VAR_24->pix_order << VAR_18);
 VAR_25 |= VAR_12 | VAR_2;
 FUNC_3(VAR_25, VAR_0);






 FUNC_3(((VAR_24->win.width * 2 + 31) >> 5), VAR_19);


 if (VAR_24->buf_type == VAR_1) {

  FUNC_3(VAR_14, VAR_22);
 }

 FUNC_2(VAR_23.dev, "\nEnd of ccdc_config_ycbcr...\n");
}
