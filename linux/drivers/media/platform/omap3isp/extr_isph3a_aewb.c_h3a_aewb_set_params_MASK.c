
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap3isp_h3a_aewb_config {scalar_t__ saturation_limit; scalar_t__ alaw_enable; scalar_t__ win_height; scalar_t__ win_width; scalar_t__ ver_win_count; scalar_t__ hor_win_count; scalar_t__ ver_win_start; scalar_t__ hor_win_start; scalar_t__ blk_ver_win_start; scalar_t__ blk_win_height; scalar_t__ subsample_ver_inc; scalar_t__ subsample_hor_inc; int buf_size; } ;
struct ispstat {int update; int inc_config; int configured; struct omap3isp_h3a_aewb_config* priv; } ;


 int FUNC_0 (struct omap3isp_h3a_aewb_config*) ;

__attribute__((used)) static void FUNC_1(struct ispstat *VAR_0, void *VAR_1)
{
 struct omap3isp_h3a_aewb_config *VAR_2 = VAR_1;
 struct omap3isp_h3a_aewb_config *VAR_3 = VAR_0->priv;
 int VAR_4 = 0;

 if (VAR_3->saturation_limit != VAR_2->saturation_limit) {
  VAR_3->saturation_limit = VAR_2->saturation_limit;
  VAR_4 = 1;
 }
 if (VAR_3->alaw_enable != VAR_2->alaw_enable) {
  VAR_3->alaw_enable = VAR_2->alaw_enable;
  VAR_4 = 1;
 }
 if (VAR_3->win_height != VAR_2->win_height) {
  VAR_3->win_height = VAR_2->win_height;
  VAR_4 = 1;
 }
 if (VAR_3->win_width != VAR_2->win_width) {
  VAR_3->win_width = VAR_2->win_width;
  VAR_4 = 1;
 }
 if (VAR_3->ver_win_count != VAR_2->ver_win_count) {
  VAR_3->ver_win_count = VAR_2->ver_win_count;
  VAR_4 = 1;
 }
 if (VAR_3->hor_win_count != VAR_2->hor_win_count) {
  VAR_3->hor_win_count = VAR_2->hor_win_count;
  VAR_4 = 1;
 }
 if (VAR_3->ver_win_start != VAR_2->ver_win_start) {
  VAR_3->ver_win_start = VAR_2->ver_win_start;
  VAR_4 = 1;
 }
 if (VAR_3->hor_win_start != VAR_2->hor_win_start) {
  VAR_3->hor_win_start = VAR_2->hor_win_start;
  VAR_4 = 1;
 }
 if (VAR_3->blk_ver_win_start != VAR_2->blk_ver_win_start) {
  VAR_3->blk_ver_win_start = VAR_2->blk_ver_win_start;
  VAR_4 = 1;
 }
 if (VAR_3->blk_win_height != VAR_2->blk_win_height) {
  VAR_3->blk_win_height = VAR_2->blk_win_height;
  VAR_4 = 1;
 }
 if (VAR_3->subsample_ver_inc != VAR_2->subsample_ver_inc) {
  VAR_3->subsample_ver_inc = VAR_2->subsample_ver_inc;
  VAR_4 = 1;
 }
 if (VAR_3->subsample_hor_inc != VAR_2->subsample_hor_inc) {
  VAR_3->subsample_hor_inc = VAR_2->subsample_hor_inc;
  VAR_4 = 1;
 }

 if (VAR_4 || !VAR_0->configured) {
  VAR_0->inc_config++;
  VAR_0->update = 1;
  VAR_3->buf_size = FUNC_0(VAR_3);
 }
}
