
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned int left; unsigned int width; unsigned int top; unsigned int height; } ;
struct TYPE_4__ {unsigned int gamma_wd; scalar_t__ enable; } ;
struct ccdc_config_params_raw {unsigned int data_sz; TYPE_1__ alaw; int blk_comp; int blk_clamp; } ;
struct ccdc_params_raw {unsigned int vd_pol; unsigned int hd_pol; unsigned int fid_pol; unsigned int frm_fmt; unsigned int pix_fmt; TYPE_2__ win; scalar_t__ image_invert_enable; struct ccdc_config_params_raw config_params; } ;
struct TYPE_6__ {int dev; struct ccdc_params_raw bayer; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 int VAR_22 ;
 unsigned int VAR_23 ;
 unsigned int VAR_24 ;
 unsigned int VAR_25 ;
 unsigned int VAR_26 ;
 unsigned int VAR_27 ;
 unsigned int VAR_28 ;
 unsigned int VAR_29 ;
 unsigned int VAR_30 ;
 unsigned int VAR_31 ;
 int VAR_32 ;
 unsigned int VAR_33 ;
 int VAR_34 ;
 unsigned int VAR_35 ;
 unsigned int VAR_36 ;
 unsigned int VAR_37 ;
 unsigned int VAR_38 ;
 unsigned int VAR_39 ;
 int VAR_40 ;
 unsigned int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 unsigned int VAR_44 ;
 unsigned int VAR_45 ;
 unsigned int VAR_46 ;
 unsigned int VAR_47 ;
 int VAR_48 ;
 unsigned int VAR_49 ;
 unsigned int VAR_50 ;
 unsigned int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 unsigned int VAR_54 ;
 TYPE_3__ VAR_55 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_2__*,unsigned int,int ) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (unsigned int,int ) ;

__attribute__((used)) static void FUNC_8(void)
{
 struct ccdc_params_raw *VAR_56 = &VAR_55.bayer;
 struct ccdc_config_params_raw *VAR_57 =
    &VAR_55.bayer.config_params;
 unsigned int VAR_58 = 0;
 unsigned int VAR_59;

 FUNC_6(VAR_55.dev, "\nStarting ccdc_config_raw...");


 FUNC_3();


 FUNC_7(VAR_37, VAR_4);
 VAR_58 =
  (((VAR_56->vd_pol & VAR_46) << VAR_47) |
  ((VAR_56->hd_pol & VAR_30) << VAR_31) |
  ((VAR_56->fid_pol & VAR_13) << VAR_14) |
  ((VAR_56->frm_fmt & VAR_28) << VAR_29) |
  ((VAR_57->data_sz & VAR_10) <<
  VAR_11) |
  ((VAR_56->pix_fmt & VAR_38) << VAR_39) |
  VAR_54 | VAR_45);


 if (VAR_57->alaw.enable) {
  VAR_59 = ((VAR_57->alaw.gamma_wd &
        VAR_3) | VAR_2);
  FUNC_7(VAR_59, VAR_1);
  FUNC_6(VAR_55.dev, "\nWriting 0x%x to ALAW...\n", VAR_59);
 }


 FUNC_5(&VAR_56->win, VAR_56->frm_fmt, VAR_40);


 FUNC_0(&VAR_57->blk_clamp);


 FUNC_1(&VAR_57->blk_comp);


 if ((VAR_57->data_sz == VAR_8) ||
      VAR_57->alaw.enable)
  VAR_58 |= VAR_9;


 VAR_59 = VAR_12;

 if (VAR_57->data_sz == VAR_8)
  VAR_59 |= (VAR_7 & VAR_16)
      << VAR_17;
 else
  VAR_59 |= (VAR_57->data_sz & VAR_16)
      << VAR_17;

 FUNC_7(VAR_59, VAR_15);

 FUNC_6(VAR_55.dev, "\nWriting 0x%x to FMTCFG...\n", VAR_59);

 FUNC_7(VAR_6, VAR_5);

 FUNC_6(VAR_55.dev, "\nWriting 0xBB11BB11 to COLPTN...\n");




 VAR_59 = ((VAR_56->win.left & VAR_20) <<
       VAR_21) |
       (VAR_56->win.width & VAR_19);
 FUNC_7(VAR_59, VAR_18);

 FUNC_6(VAR_55.dev, "\nWriting 0x%x to FMT_HORZ...\n", VAR_59);
 VAR_59 = (VAR_56->win.top & VAR_24)
     << VAR_25;
 if (VAR_56->frm_fmt == VAR_27)
  VAR_59 |= (VAR_56->win.height) & VAR_23;
 else
  VAR_59 |= (VAR_56->win.height >> 1) & VAR_23;

 FUNC_6(VAR_55.dev, "\nparams->win.height  0x%x ...\n",
        VAR_56->win.height);
 FUNC_7(VAR_59, VAR_22);

 FUNC_6(VAR_55.dev, "\nWriting 0x%x to FMT_VERT...\n", VAR_59);

 FUNC_6(VAR_55.dev, "\nbelow regw(val, FMT_VERT)...");





 if ((VAR_57->data_sz == VAR_8) ||
     VAR_57->alaw.enable)
  FUNC_7((VAR_56->win.width + VAR_0) &
      VAR_33, VAR_32);
 else

  FUNC_7(((VAR_56->win.width * VAR_44) +
      VAR_0) & VAR_33,
      VAR_32);


 if (VAR_56->frm_fmt == VAR_26) {
  if (VAR_56->image_invert_enable) {

   FUNC_7(VAR_35, VAR_42);
   FUNC_6(VAR_55.dev, "\nWriting 0x4B6D to SDOFST..\n");
  }

  else {

   FUNC_7(VAR_36, VAR_42);
   FUNC_6(VAR_55.dev, "\nWriting 0x0249 to SDOFST..\n");
  }
 } else if (VAR_56->frm_fmt == VAR_27) {
  FUNC_7(VAR_41, VAR_42);
  FUNC_6(VAR_55.dev, "\nWriting 0x0000 to SDOFST...\n");
 }





 if (VAR_56->frm_fmt == VAR_27)
  VAR_59 = (((VAR_56->win.height - 1) & VAR_52))
      << VAR_53;
 else
  VAR_59 =
      ((((VAR_56->win.height >> VAR_34) -
       1) & VAR_52)) <<
      VAR_53;

 VAR_59 |= ((((VAR_56->win.width))) & VAR_49)
     << VAR_50;
 VAR_59 |= (VAR_56->win.left) & VAR_51;
 FUNC_7(VAR_59, VAR_48);

 FUNC_6(VAR_55.dev, "\nWriting 0x%x to VP_OUT...\n", VAR_59);
 FUNC_7(VAR_58, VAR_43);
 FUNC_6(VAR_55.dev, "\nWriting 0x%x to SYN_MODE...\n", VAR_58);

 FUNC_4();
 FUNC_6(VAR_55.dev, "\nend of ccdc_config_raw...");
 FUNC_2();
}
