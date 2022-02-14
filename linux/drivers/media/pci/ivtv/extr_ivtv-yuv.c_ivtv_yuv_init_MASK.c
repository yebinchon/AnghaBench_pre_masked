
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct yuv_playback_info {int reg_2834; int reg_2838; int reg_283c; int reg_2840; int reg_2844; int reg_2848; int reg_2854; int reg_285c; int reg_2864; int reg_2870; int reg_2874; int reg_2898; int reg_2890; int reg_289c; int reg_2918; int reg_291c; int reg_2920; int reg_2924; int reg_2928; int reg_292c; int reg_2930; int reg_2934; int reg_2938; int reg_293c; int reg_2940; int reg_2944; int reg_2948; int reg_294c; int reg_2950; int reg_2954; int reg_2958; int reg_295c; int reg_2960; int reg_2964; int reg_2968; int reg_296c; int reg_2970; int v_filter_1; int v_filter_2; int h_filter; int osd_x_offset; int osd_y_offset; int decode_height; int osd_vis_w; int osd_vis_h; int next_dma_frame; scalar_t__ blanking_dmaptr; scalar_t__ blanking_ptr; } ;
struct ivtv {int i_flags; int pdev; int osd_info; struct yuv_playback_info yuv_info; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int,int) ;
 scalar_t__ FUNC_4 (int ,scalar_t__,int,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int,int ) ;

__attribute__((used)) static void FUNC_8(struct ivtv *VAR_5)
{
 struct yuv_playback_info *VAR_6 = &VAR_5->yuv_info;

 FUNC_1("ivtv_yuv_init\n");


 VAR_6->reg_2834 = FUNC_5(0x02834);
 VAR_6->reg_2838 = FUNC_5(0x02838);
 VAR_6->reg_283c = FUNC_5(0x0283c);
 VAR_6->reg_2840 = FUNC_5(0x02840);
 VAR_6->reg_2844 = FUNC_5(0x02844);
 VAR_6->reg_2848 = FUNC_5(0x02848);
 VAR_6->reg_2854 = FUNC_5(0x02854);
 VAR_6->reg_285c = FUNC_5(0x0285c);
 VAR_6->reg_2864 = FUNC_5(0x02864);
 VAR_6->reg_2870 = FUNC_5(0x02870);
 VAR_6->reg_2874 = FUNC_5(0x02874);
 VAR_6->reg_2898 = FUNC_5(0x02898);
 VAR_6->reg_2890 = FUNC_5(0x02890);

 VAR_6->reg_289c = FUNC_5(0x0289c);
 VAR_6->reg_2918 = FUNC_5(0x02918);
 VAR_6->reg_291c = FUNC_5(0x0291c);
 VAR_6->reg_2920 = FUNC_5(0x02920);
 VAR_6->reg_2924 = FUNC_5(0x02924);
 VAR_6->reg_2928 = FUNC_5(0x02928);
 VAR_6->reg_292c = FUNC_5(0x0292c);
 VAR_6->reg_2930 = FUNC_5(0x02930);
 VAR_6->reg_2934 = FUNC_5(0x02934);
 VAR_6->reg_2938 = FUNC_5(0x02938);
 VAR_6->reg_293c = FUNC_5(0x0293c);
 VAR_6->reg_2940 = FUNC_5(0x02940);
 VAR_6->reg_2944 = FUNC_5(0x02944);
 VAR_6->reg_2948 = FUNC_5(0x02948);
 VAR_6->reg_294c = FUNC_5(0x0294c);
 VAR_6->reg_2950 = FUNC_5(0x02950);
 VAR_6->reg_2954 = FUNC_5(0x02954);
 VAR_6->reg_2958 = FUNC_5(0x02958);
 VAR_6->reg_295c = FUNC_5(0x0295c);
 VAR_6->reg_2960 = FUNC_5(0x02960);
 VAR_6->reg_2964 = FUNC_5(0x02964);
 VAR_6->reg_2968 = FUNC_5(0x02968);
 VAR_6->reg_296c = FUNC_5(0x0296c);
 VAR_6->reg_2970 = FUNC_5(0x02970);

 VAR_6->v_filter_1 = -1;
 VAR_6->v_filter_2 = -1;
 VAR_6->h_filter = -1;


 VAR_6->osd_x_offset = FUNC_5(0x02a04) & 0x00000FFF;
 VAR_6->osd_y_offset = (FUNC_5(0x02a04) >> 16) & 0x00000FFF;



 if (FUNC_5(0x2878) & 4)
  VAR_6->decode_height = 576;
 else
  VAR_6->decode_height = 480;

 if (!VAR_5->osd_info) {
  VAR_6->osd_vis_w = 720 - VAR_6->osd_x_offset;
  VAR_6->osd_vis_h = VAR_6->decode_height - VAR_6->osd_y_offset;
 } else {

  if (!VAR_6->osd_vis_w)
   VAR_6->osd_vis_w = 720 - VAR_6->osd_x_offset;

  if (!VAR_6->osd_vis_h) {
   VAR_6->osd_vis_h = VAR_6->decode_height - VAR_6->osd_y_offset;
  } else if (VAR_6->osd_vis_h + VAR_6->osd_y_offset > VAR_6->decode_height) {


   FUNC_0("Clipping yuv output - fb size (%d) exceeds video standard limit (%d)\n",
     VAR_6->osd_vis_h + VAR_6->osd_y_offset,
     VAR_6->decode_height);
   VAR_6->osd_vis_h = VAR_6->decode_height - VAR_6->osd_y_offset;
  }
 }


 VAR_6->blanking_ptr = FUNC_3(720 * 16, VAR_0|VAR_4);
 if (VAR_6->blanking_ptr) {
  VAR_6->blanking_dmaptr = FUNC_4(VAR_5->pdev, VAR_6->blanking_ptr, 720*16, VAR_3);
 } else {
  VAR_6->blanking_dmaptr = 0;
  FUNC_0("Failed to allocate yuv blanking buffer\n");
 }


 FUNC_7(0x01, VAR_2);

 FUNC_6(VAR_1, &VAR_5->i_flags);
 FUNC_2(&VAR_6->next_dma_frame, 0);
}
