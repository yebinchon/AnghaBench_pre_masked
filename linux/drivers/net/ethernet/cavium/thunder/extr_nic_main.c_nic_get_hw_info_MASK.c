
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct nicpf {int pdev; struct hw_info* hw; } ;
struct hw_info {int chans_per_lmac; int chans_per_bgx; int cpi_cnt; int rssi_cnt; int rss_ind_tbl_size; int tl3_cnt; int tl2_cnt; int tl1_cnt; int tl1_per_bgx; int chans_per_rgx; int chans_per_lbk; int tl4_cnt; int bgx_cnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int FUNC_0 (int ,int ,int*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct nicpf *VAR_6)
{
 u16 VAR_7;
 struct hw_info *VAR_8 = VAR_6->hw;

 FUNC_0(VAR_6->pdev, VAR_5, &VAR_7);

 switch (VAR_7) {
 case 128:
  VAR_8->bgx_cnt = VAR_2;
  VAR_8->chans_per_lmac = 16;
  VAR_8->chans_per_bgx = 128;
  VAR_8->cpi_cnt = 2048;
  VAR_8->rssi_cnt = 4096;
  VAR_8->rss_ind_tbl_size = VAR_4;
  VAR_8->tl3_cnt = 256;
  VAR_8->tl2_cnt = 64;
  VAR_8->tl1_cnt = 2;
  VAR_8->tl1_per_bgx = 1;
  break;
 case 130:
  VAR_8->bgx_cnt = VAR_0;
  VAR_8->chans_per_lmac = 8;
  VAR_8->chans_per_bgx = 32;
  VAR_8->chans_per_rgx = 8;
  VAR_8->chans_per_lbk = 24;
  VAR_8->cpi_cnt = 512;
  VAR_8->rssi_cnt = 256;
  VAR_8->rss_ind_tbl_size = 32;
  VAR_8->tl3_cnt = 64;
  VAR_8->tl2_cnt = 16;
  VAR_8->tl1_cnt = 10;
  VAR_8->tl1_per_bgx = 0;
  break;
 case 129:
  VAR_8->bgx_cnt = VAR_1;
  VAR_8->chans_per_lmac = 8;
  VAR_8->chans_per_bgx = 32;
  VAR_8->chans_per_lbk = 64;
  VAR_8->cpi_cnt = 2048;
  VAR_8->rssi_cnt = 1024;
  VAR_8->rss_ind_tbl_size = 64;
  VAR_8->tl3_cnt = 256;
  VAR_8->tl2_cnt = 64;
  VAR_8->tl1_cnt = 18;
  VAR_8->tl1_per_bgx = 0;
  break;
 }
 VAR_8->tl4_cnt = VAR_3 * FUNC_1(VAR_6->pdev);
}
