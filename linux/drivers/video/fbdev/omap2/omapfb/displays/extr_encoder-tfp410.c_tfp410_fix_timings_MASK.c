
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_video_timings {int de_level; void* sync_pclk_edge; void* data_pclk_edge; } ;


 void* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct omap_video_timings *VAR_2)
{
 VAR_2->data_pclk_edge = VAR_0;
 VAR_2->sync_pclk_edge = VAR_0;
 VAR_2->de_level = VAR_1;
}
