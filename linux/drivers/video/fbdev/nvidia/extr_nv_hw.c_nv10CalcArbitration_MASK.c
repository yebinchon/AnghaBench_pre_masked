
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pclk_khz; int mclk_khz; int nvclk_khz; int mem_page_miss; int memory_width; int enable_video; int pix_bpp; int enable_mp; scalar_t__ memory_type; } ;
typedef TYPE_1__ nv10_sim_state ;
struct TYPE_6__ {int valid; int graphics_lwm; int graphics_burst_size; int video_lwm; int video_burst_size; } ;
typedef TYPE_2__ nv10_fifo_info ;



__attribute__((used)) static void FUNC_0(nv10_fifo_info * VAR_0, nv10_sim_state * VAR_1)
{
 int VAR_2, VAR_3, VAR_4, VAR_5, VAR_6;
 int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
 int VAR_12;
 int VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
 int VAR_18, VAR_19, VAR_20, VAR_21;
 int VAR_22, VAR_23, VAR_24, VAR_25, VAR_26;
 int VAR_27;
 int VAR_28, VAR_29, VAR_30, VAR_31, VAR_32;
 int VAR_33;
 int VAR_34, VAR_35, VAR_36, VAR_37;
 int VAR_38;
 int VAR_39;

 VAR_0->valid = 1;
 VAR_19 = VAR_1->pclk_khz;
 VAR_18 = VAR_1->mclk_khz;
 VAR_20 = VAR_1->nvclk_khz;
 VAR_3 = VAR_1->mem_page_miss;
 VAR_4 = VAR_1->memory_width / 64;
 VAR_5 = VAR_1->enable_video;
 VAR_6 = VAR_1->pix_bpp;
 VAR_21 = VAR_1->enable_mp;
 VAR_32 = 0;

 VAR_16 = 512;

 VAR_9 = 4;

 VAR_7 = 3;
 VAR_7 += 2;

 VAR_8 = 1;
 VAR_8 += 1;
 VAR_8 += 5;

 VAR_8 += 2;
 VAR_8 += 2;
 VAR_8 += 7;


 if (VAR_1->memory_type == 0)
  if (VAR_1->memory_width == 64)
   VAR_8 += 4;
  else
   VAR_8 += 2;
 else if (VAR_1->memory_width == 64)
  VAR_8 += 2;
 else
  VAR_8 += 1;

 if ((!VAR_5) && (VAR_1->memory_width == 128)) {
  VAR_14 = (VAR_6 == 32) ? 31 : 42;
  VAR_38 = 17;
 } else {
  VAR_14 = (VAR_6 == 32) ? 8 : 4;

  VAR_38 = 18;
 }


 VAR_7 += 1;
 VAR_7 += 1;
 VAR_7 += 1;
 VAR_7 += 1;

 if (VAR_21)
  VAR_8 += 4;


 VAR_7 += 0;
 VAR_9 += 0;
 VAR_13 = 0;
 while (VAR_13 != 1) {
  VAR_0->valid = 1;
  VAR_13 = 1;
  VAR_15 = VAR_8 + VAR_14;

  VAR_22 = VAR_15 * 1000 * 1000 / VAR_18;

  VAR_23 = VAR_8 * 1000 * 1000 / VAR_18;
  VAR_39 = VAR_38 * 1000 * 1000 / VAR_18;

  VAR_24 = VAR_7 * 1000 * 1000 / VAR_20;

  VAR_25 = VAR_9 * 1000 * 1000 / VAR_19;
  VAR_35 = VAR_23 + VAR_24 + VAR_25;


  VAR_27 = VAR_15 * 1000 * 1000 / VAR_18;

  if (VAR_5) {
   VAR_26 = VAR_19 * VAR_6 / 8;

   VAR_10 = 1;
   VAR_10 += 1;

   VAR_11 = 2;
   if (VAR_21)
    VAR_11 += 1;

   VAR_28 =
       (VAR_10 * VAR_3) * 1000 * 1000 / VAR_18;


   VAR_29 = VAR_28 + VAR_27;

   VAR_30 =
       VAR_11 * VAR_3 * 1000 * 1000 / VAR_18;

   VAR_31 = VAR_29
       + VAR_30
       + VAR_22 + VAR_24 + VAR_25
       ;

   VAR_32 = VAR_31 * VAR_26 / (1000 * 1000);

   VAR_32++;
  } else {

   VAR_26 = VAR_19 * VAR_6 / 8;

   VAR_11 = 1;
   VAR_11 += 1;
   if (VAR_21)
    VAR_11 += 1;
   VAR_30 =
       VAR_11 * VAR_3 * 1000 * 1000 / VAR_18;
   VAR_31 = VAR_30 + VAR_22 + VAR_24 + VAR_25;
   VAR_32 = VAR_31 * VAR_26 / (1000 * 1000);

   VAR_32++;


   if (VAR_4 == 1) {
    VAR_12 = VAR_20 * 8;
    if (VAR_26 * 100 >= VAR_12 * 102)

     VAR_32 = 0xfff;

    else if (VAR_26 * 100 >=
      VAR_12 * 98) {
     VAR_32 = 1024;
     VAR_16 = 512;
    }
   }
  }





  VAR_33 = ((int)VAR_32 / 8) * 8;
  if (VAR_33 < VAR_32)
   VAR_32 += 8;

  VAR_17 = VAR_32 + VAR_16 - 1024;
  VAR_34 = VAR_35 + VAR_39;


  VAR_36 = VAR_34 * VAR_19 / (1000 * 1000);
  VAR_37 = VAR_36 * VAR_6 / 8;

  if ((VAR_37 < VAR_17) && (VAR_17 > 0)) {
   VAR_0->valid = 0;
   VAR_13 = 0;
   if (VAR_38 == 0) {
    if (VAR_16 <= 32) {

     VAR_13 = 1;
    } else {

     VAR_16 = VAR_16 / 2;
    }
   } else {
    VAR_38--;
   }
  } else {
   if (VAR_32 > 1023) {
    VAR_0->valid = 0;
    VAR_13 = 0;
    if (VAR_38 == 0)

     VAR_13 = 1;
    else
     VAR_38--;
   }
  }

  if (VAR_32 < (1024 - VAR_16 + 8))
   VAR_32 = 1024 - VAR_16 + 8;
  VAR_2 = (int)(VAR_32);


  VAR_0->graphics_lwm = VAR_2;
  VAR_0->graphics_burst_size = VAR_16;

  VAR_0->video_lwm = 1024;
  VAR_0->video_burst_size = 512;
 }
}
