
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int gamma_wd; } ;
struct TYPE_12__ {TYPE_4__ alaw; int data_sz; } ;
struct TYPE_10__ {int width; int height; scalar_t__ top; scalar_t__ left; } ;
struct TYPE_13__ {TYPE_5__ config_params; TYPE_3__ win; void* hd_pol; void* vd_pol; void* fid_pol; int frm_fmt; int pix_fmt; } ;
struct TYPE_8__ {int width; int height; scalar_t__ top; scalar_t__ left; } ;
struct TYPE_9__ {int bt656_enable; TYPE_1__ win; int buf_type; int pix_order; void* hd_pol; void* vd_pol; void* fid_pol; int frm_fmt; int pix_fmt; } ;
struct TYPE_14__ {TYPE_6__ bayer; TYPE_2__ ycbcr; int if_type; } ;
struct vpfe_ccdc {TYPE_7__ ccdc_cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_0(struct vpfe_ccdc *VAR_10)
{
 VAR_10->ccdc_cfg.if_type = VAR_9;

 VAR_10->ccdc_cfg.ycbcr.pix_fmt = VAR_4;
 VAR_10->ccdc_cfg.ycbcr.frm_fmt = VAR_1;
 VAR_10->ccdc_cfg.ycbcr.fid_pol = VAR_8;
 VAR_10->ccdc_cfg.ycbcr.vd_pol = VAR_8;
 VAR_10->ccdc_cfg.ycbcr.hd_pol = VAR_8;
 VAR_10->ccdc_cfg.ycbcr.pix_order = VAR_5;
 VAR_10->ccdc_cfg.ycbcr.buf_type = VAR_0;

 VAR_10->ccdc_cfg.ycbcr.win.left = 0;
 VAR_10->ccdc_cfg.ycbcr.win.top = 0;
 VAR_10->ccdc_cfg.ycbcr.win.width = 720;
 VAR_10->ccdc_cfg.ycbcr.win.height = 576;
 VAR_10->ccdc_cfg.ycbcr.bt656_enable = 1;

 VAR_10->ccdc_cfg.bayer.pix_fmt = VAR_3;
 VAR_10->ccdc_cfg.bayer.frm_fmt = VAR_2;
 VAR_10->ccdc_cfg.bayer.fid_pol = VAR_8;
 VAR_10->ccdc_cfg.bayer.vd_pol = VAR_8;
 VAR_10->ccdc_cfg.bayer.hd_pol = VAR_8;

 VAR_10->ccdc_cfg.bayer.win.left = 0;
 VAR_10->ccdc_cfg.bayer.win.top = 0;
 VAR_10->ccdc_cfg.bayer.win.width = 800;
 VAR_10->ccdc_cfg.bayer.win.height = 600;
 VAR_10->ccdc_cfg.bayer.config_params.data_sz = VAR_6;
 VAR_10->ccdc_cfg.bayer.config_params.alaw.gamma_wd =
      VAR_7;
}
