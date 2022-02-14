
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct yuv_playback_info {int h_filter; int reg_2890; int reg_2870; int reg_2874; int reg_2864; int reg_285c; int reg_2854; int reg_2848; int reg_2840; int reg_2844; int reg_283c; int reg_2838; int reg_2834; } ;
struct yuv_frame_info {int src_w; int dst_w; int src_x; int dst_x; int vis_w; int tru_x; int pan_x; int tru_w; } ;
struct ivtv {struct yuv_playback_info yuv_info; } ;


 int FUNC_0 (char*,int ,int,int,int,int) ;
 int FUNC_1 (char*,int ,int,...) ;
 int FUNC_2 (struct ivtv*,int,int,int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static void FUNC_4(struct ivtv *VAR_0, struct yuv_frame_info *VAR_1)
{
 struct yuv_playback_info *VAR_2 = &VAR_0->yuv_info;
 u32 VAR_3, VAR_4, VAR_5;
 u32 VAR_6, VAR_7, VAR_8;
 u32 VAR_9, VAR_10, VAR_11;
 u32 VAR_12, VAR_13, VAR_14;
 int VAR_15;
 int VAR_16;
 u32 VAR_17;

 FUNC_0
     ("Adjust to width %d src_w %d dst_w %d src_x %d dst_x %d\n",
      VAR_1->tru_w, VAR_1->src_w, VAR_1->dst_w, VAR_1->src_x, VAR_1->dst_x);


 VAR_15 = VAR_1->src_w + VAR_1->src_x;


 VAR_3 = VAR_1->dst_w;
 VAR_4 = VAR_3;


 VAR_11 = VAR_1->dst_x;


 VAR_12 = 0;







 if (VAR_1->vis_w == 720) {
  if ((VAR_1->tru_x - VAR_1->pan_x > -1) && (VAR_1->tru_x - VAR_1->pan_x <= 40) && (VAR_1->dst_w >= 680))
   VAR_12 = 10 - (VAR_1->tru_x - VAR_1->pan_x) / 4;
  else if ((VAR_1->tru_x - VAR_1->pan_x < 0) && (VAR_1->tru_x - VAR_1->pan_x >= -20) && (VAR_1->dst_w >= 660))
   VAR_12 = (10 + (VAR_1->tru_x - VAR_1->pan_x) / 2);

  if (VAR_1->dst_w >= VAR_1->src_w)
   VAR_12 = VAR_12 << 16 | VAR_12;
  else
   VAR_12 = ((VAR_12 & ~1) << 15) | (VAR_12 & ~1);
 }

 if (VAR_1->dst_w < VAR_1->src_w)
  VAR_12 = 0x000d000e - VAR_12;
 else
  VAR_12 = 0x0012000e - VAR_12;


 VAR_14 = (VAR_1->src_x * ((VAR_1->dst_w << 21) / VAR_1->src_w)) >> 19;

 if (VAR_1->dst_w >= VAR_1->src_w) {
  VAR_15 &= ~1;
  VAR_17 = (VAR_1->src_w * 0x00200000) / (VAR_1->dst_w);
  if (VAR_17 * VAR_1->dst_w != VAR_1->src_w * 0x00200000)
   VAR_17++;
  VAR_3 = (VAR_3 << 16) | VAR_15;
  VAR_4 = (VAR_4 << 16) | VAR_15;
  VAR_5 = VAR_17 >> 2;
  VAR_6 = VAR_17 >> 2;
  VAR_7 = VAR_17;
  VAR_8 = VAR_17 >> 1;
  VAR_9 = VAR_17 >> 1;



  if (VAR_1->dst_w > VAR_1->src_w)
   VAR_13 = ((VAR_1->dst_w - VAR_1->src_w)<<16) / (VAR_1->src_w <<14);
  else
   VAR_13 = 0;

  VAR_12 += (((VAR_14 << 14) & 0xFFFF0000) | VAR_14 >> 2) + (VAR_13 << 17 | VAR_13);
  VAR_10 = 0;
 } else if (VAR_1->dst_w < VAR_1->src_w / 2) {
  VAR_17 = (VAR_1->src_w * 0x00080000) / VAR_1->dst_w;
  if (VAR_17 * VAR_1->dst_w != VAR_1->src_w * 0x00080000)
   VAR_17++;
  VAR_3 = (VAR_3 << 16) | VAR_15;
  VAR_4 = (VAR_4 << 16) | VAR_15;
  VAR_5 = VAR_17 >> 2;
  VAR_6 = VAR_17 >> 1;
  VAR_7 = VAR_17;
  VAR_8 = VAR_17 >> 1;
  VAR_9 = VAR_17 >> 1;
  VAR_12 += ((VAR_14 << 15) & 0xFFFF0000) | VAR_14;
  VAR_12 += (5 - (((VAR_1->src_w + VAR_1->src_w / 2) - 1) / VAR_1->dst_w)) << 16;
  VAR_10 = 0x00000012;
 } else {
  VAR_17 = (VAR_1->src_w * 0x00100000) / VAR_1->dst_w;
  if (VAR_17 * VAR_1->dst_w != VAR_1->src_w * 0x00100000)
   VAR_17++;
  VAR_3 = (VAR_3 << 16) | VAR_15;
  VAR_4 = (VAR_4 << 16) | VAR_15;
  VAR_5 = VAR_17 >> 2;
  VAR_6 = VAR_17 >> 1;
  VAR_7 = VAR_17;
  VAR_8 = VAR_17 >> 1;
  VAR_9 = VAR_17 >> 1;
  VAR_12 += ((VAR_14 << 14) & 0xFFFF0000) | VAR_14 >> 1;
  VAR_12 += (5 - (((VAR_1->src_w * 3) - 1) / VAR_1->dst_w)) << 16;
  VAR_10 = 0x00000001;
 }


 if (VAR_1->src_w == VAR_1->dst_w) {

  VAR_16 = 0;
 } else {

  VAR_16 = ((VAR_1->src_w << 16) / VAR_1->dst_w) >> 15;
  VAR_16 = (VAR_16 >> 1) + (VAR_16 & 1);

  VAR_16 += !VAR_16;
 }

 FUNC_3(VAR_3, 0x02834);
 FUNC_3(VAR_4, 0x02838);
 FUNC_1("Update reg 0x2834 %08x->%08x 0x2838 %08x->%08x\n",
         VAR_2->reg_2834, VAR_3, VAR_2->reg_2838, VAR_4);

 FUNC_3(VAR_5, 0x0283c);
 FUNC_3(VAR_6, 0x02844);

 FUNC_1("Update reg 0x283c %08x->%08x 0x2844 %08x->%08x\n",
         VAR_2->reg_283c, VAR_5, VAR_2->reg_2844, VAR_6);

 FUNC_3(0x00080514, 0x02840);
 FUNC_3(0x00100514, 0x02848);
 FUNC_1("Update reg 0x2840 %08x->%08x 0x2848 %08x->%08x\n",
         VAR_2->reg_2840, 0x00080514, VAR_2->reg_2848, 0x00100514);

 FUNC_3(VAR_7, 0x02854);
 FUNC_1("Update reg 0x2854 %08x->%08x \n",
         VAR_2->reg_2854, VAR_7);

 FUNC_3(VAR_8, 0x0285c);
 FUNC_3(VAR_9, 0x02864);
 FUNC_1("Update reg 0x285c %08x->%08x 0x2864 %08x->%08x\n",
         VAR_2->reg_285c, VAR_8, VAR_2->reg_2864, VAR_9);

 FUNC_3(VAR_10, 0x02874);
 FUNC_1("Update reg 0x2874 %08x->%08x\n",
         VAR_2->reg_2874, VAR_10);

 FUNC_3(VAR_12, 0x02870);
 FUNC_1("Update reg 0x2870 %08x->%08x\n",
         VAR_2->reg_2870, VAR_12);

 FUNC_3(VAR_11, 0x02890);
 FUNC_1("Update reg 0x2890 %08x->%08x\n",
         VAR_2->reg_2890, VAR_11);


 if (VAR_16 != VAR_2->h_filter) {
  FUNC_2(VAR_0, VAR_16, -1, -1);
  VAR_2->h_filter = VAR_16;
 }
}
