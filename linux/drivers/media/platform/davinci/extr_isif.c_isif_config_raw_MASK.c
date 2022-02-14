
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct vpss_sync_pol {int ccdpg_hdpol; int ccdpg_vdpol; } ;
struct vpss_pg_frame_size {int hlpfr; int pplen; } ;
struct TYPE_10__ {int width; int height; } ;
struct TYPE_11__ {int df_or_csc; } ;
struct TYPE_9__ {int olop; int olep; int elop; int elep; } ;
struct TYPE_8__ {int olop; int olep; int elop; int elep; } ;
struct TYPE_7__ {scalar_t__ alg; int pred; } ;
struct isif_config_params_raw {int data_shift; int horz_offset; int vert_offset; scalar_t__ test_pat_gen; int culling; int linearize; TYPE_5__ df_csc; int dfc; int bclamp; TYPE_3__ col_pat_field1; TYPE_2__ col_pat_field0; TYPE_1__ compress; } ;
struct isif_params_raw {int vd_pol; int hd_pol; int fid_pol; int frm_fmt; int pix_fmt; int cfa_pat; int data_msb; TYPE_4__ win; struct isif_config_params_raw config_params; scalar_t__ image_invert_en; int horz_flip_en; } ;
struct TYPE_12__ {int data_pack; int dev; struct isif_params_raw bayer; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
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
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct vpss_pg_frame_size) ;
 int FUNC_3 (struct vpss_sync_pol) ;
 TYPE_6__ VAR_39 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 () ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_4__*,int,int) ;
 int FUNC_11 (int,int ) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(void)
{
 struct isif_params_raw *VAR_40 = &VAR_39.bayer;
 struct isif_config_params_raw *VAR_41 =
  &VAR_39.bayer.config_params;
 struct vpss_pg_frame_size VAR_42;
 struct vpss_sync_pol VAR_43;
 u32 VAR_44;

 FUNC_1(VAR_39.dev, "\nStarting isif_config_raw..\n");
 VAR_44 = VAR_34 | VAR_13 |
  VAR_15 | VAR_14 |
  VAR_12 | VAR_39.data_pack;

 FUNC_1(VAR_39.dev, "Writing 0x%x to ...CCDCFG \n", VAR_44);
 FUNC_11(VAR_44, VAR_0);
 VAR_44 = VAR_32 | (VAR_40->vd_pol << VAR_33) |
  (VAR_40->hd_pol << VAR_27) |
  (VAR_40->fid_pol << VAR_24) |
  (VAR_16 << VAR_17) |
  (VAR_22 << VAR_23) |
  (VAR_40->frm_fmt << VAR_25) |
  (VAR_40->pix_fmt << VAR_29) |
  (VAR_40->config_params.data_shift << VAR_18);

 FUNC_11(VAR_44, VAR_36);
 FUNC_1(VAR_39.dev, "Writing 0x%x to MODESET...\n", VAR_44);





 VAR_44 = VAR_40->cfa_pat << VAR_26;


 if (VAR_41->compress.alg == VAR_9)
  VAR_44 |= VAR_10;

 VAR_44 |= (VAR_40->data_msb << VAR_11);
 FUNC_11(VAR_44, VAR_4);


 if (VAR_41->compress.alg == VAR_19) {
  VAR_44 = FUNC_0(VAR_20) |
         (VAR_41->compress.pred <<
         VAR_21);
 }

 FUNC_11(VAR_44, VAR_35);


 FUNC_8();


 VAR_44 = (VAR_40->config_params.col_pat_field0.olop) |
       (VAR_40->config_params.col_pat_field0.olep << 2) |
       (VAR_40->config_params.col_pat_field0.elop << 4) |
       (VAR_40->config_params.col_pat_field0.elep << 6) |
       (VAR_40->config_params.col_pat_field1.olop << 8) |
       (VAR_40->config_params.col_pat_field1.olep << 10) |
       (VAR_40->config_params.col_pat_field1.elop << 12) |
       (VAR_40->config_params.col_pat_field1.elep << 14);
 FUNC_11(VAR_44, VAR_3);
 FUNC_1(VAR_39.dev, "Writing %x to CCOLP ...\n", VAR_44);


 VAR_44 = (!!VAR_40->horz_flip_en) << VAR_28;


 if (VAR_39.data_pack == VAR_31)
  VAR_44 |= ((VAR_40->win.width + 31) >> 5);
 else if (VAR_39.data_pack == VAR_30)
  VAR_44 |= (((VAR_40->win.width +
         (VAR_40->win.width >> 2)) + 31) >> 5);
 else
  VAR_44 |= (((VAR_40->win.width * 2) + 31) >> 5);
 FUNC_11(VAR_44, VAR_8);


 if (VAR_40->frm_fmt == VAR_1) {
  if (VAR_40->image_invert_en) {

   FUNC_11(0x4B6D, VAR_37);
   FUNC_1(VAR_39.dev, "Writing 0x4B6D to SDOFST...\n");
  } else {

   FUNC_11(0x0B6D, VAR_37);
   FUNC_1(VAR_39.dev, "Writing 0x0B6D to SDOFST...\n");
  }
 } else if (VAR_40->frm_fmt == VAR_2) {
  if (VAR_40->image_invert_en) {

   FUNC_11(0x4000, VAR_37);
   FUNC_1(VAR_39.dev, "Writing 0x4000 to SDOFST...\n");
  } else {

   FUNC_11(0x0000, VAR_37);
   FUNC_1(VAR_39.dev, "Writing 0x0000 to SDOFST...\n");
  }
 }


 FUNC_10(&VAR_40->win, VAR_40->frm_fmt, 1);


 FUNC_4(&VAR_41->bclamp);


 if (FUNC_7(&VAR_41->dfc) < 0)
  return -VAR_7;

 if (!VAR_41->df_csc.df_or_csc)

  FUNC_5(&VAR_41->df_csc);

 FUNC_9(&VAR_41->linearize);


 FUNC_6(&VAR_41->culling);


 FUNC_11(VAR_41->horz_offset, VAR_5);
 FUNC_11(VAR_41->vert_offset, VAR_6);


 if (VAR_40->config_params.test_pat_gen) {

  VAR_43.ccdpg_hdpol = VAR_40->hd_pol;
  VAR_43.ccdpg_vdpol = VAR_40->vd_pol;
  FUNC_3(VAR_43);
  VAR_42.hlpfr = VAR_39.bayer.win.width;
  VAR_42.pplen = VAR_39.bayer.win.height;
  FUNC_2(VAR_42);
  FUNC_12(VAR_38);
 }

 FUNC_1(VAR_39.dev, "\nEnd of isif_config_ycbcr...\n");
 return 0;
}
