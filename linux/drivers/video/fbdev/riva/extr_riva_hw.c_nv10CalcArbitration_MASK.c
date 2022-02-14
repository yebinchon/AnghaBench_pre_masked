
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pclk_khz; int mclk_khz; int nvclk_khz; int mem_page_miss; int mem_latency; int memory_width; int enable_video; int gr_during_vid; int pix_bpp; int mem_aligned; int enable_mp; scalar_t__ memory_type; } ;
typedef TYPE_1__ nv10_sim_state ;
struct TYPE_6__ {int valid; int graphics_lwm; int graphics_burst_size; int video_lwm; int video_burst_size; } ;
typedef TYPE_2__ nv10_fifo_info ;



__attribute__((used)) static void FUNC_0
(
    nv10_fifo_info *VAR_0,
    nv10_sim_state *VAR_1
)
{
    int VAR_2, VAR_3, VAR_4,VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
    int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
    int VAR_16, VAR_17;
    int VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;
    int VAR_23, VAR_24, VAR_25, VAR_26;
    int VAR_27, VAR_28, VAR_29, VAR_30, VAR_31, VAR_32;
    int VAR_33, VAR_34, VAR_35;
    int VAR_36, VAR_37, VAR_38, VAR_39, VAR_40,VAR_41;
    int VAR_42;
    int VAR_43, VAR_44, VAR_45, VAR_46, VAR_47, VAR_48, VAR_49;
    int VAR_50, VAR_51;
    int VAR_52;

    VAR_0->valid = 1;
    VAR_24 = VAR_1->pclk_khz;
    VAR_23 = VAR_1->mclk_khz;
    VAR_25 = VAR_1->nvclk_khz;
    VAR_3 = VAR_1->mem_page_miss;
    VAR_4 = VAR_1->mem_latency;
    VAR_5 = VAR_1->memory_width/64;
    VAR_6 = VAR_1->enable_video;
    VAR_7 = VAR_1->gr_during_vid;
    VAR_8 = VAR_1->pix_bpp;
    VAR_9 = VAR_1->mem_aligned;
    VAR_26 = VAR_1->enable_mp;
    VAR_41 = 0;
    VAR_38 = 1024;

    VAR_21 = 512;
    VAR_15 = 512;

    VAR_12 = 4;

    VAR_10 = 3;
    VAR_10 += 2;

    VAR_11 = 1;

    VAR_11 += 1;
    VAR_11 += 5;

    VAR_11 += 2;
    VAR_11 += 2;
    VAR_11 += 7;


    if (VAR_1->memory_type == 0)
      if (VAR_1->memory_width == 64)
        VAR_11 += 4;
      else
        VAR_11 += 2;
    else
      if (VAR_1->memory_width == 64)
        VAR_11 += 2;
      else
        VAR_11 += 1;

    if ((!VAR_6) && (VAR_1->memory_width == 128))
    {
      VAR_19 = (VAR_8 == 32) ? 31 : 42;
      VAR_51 = 17;
    }
    else
    {
      VAR_19 = (VAR_8 == 32) ? 8 : 4;

      VAR_51 = 18;
    }

    VAR_10 += 1;
    VAR_10 += 1;
    VAR_10 += 1;
    VAR_10 += 1;

    if(VAR_26)
      VAR_11+=4;


    VAR_10 += 0;
    VAR_12 += 0;
    VAR_18 = 0;
    while(VAR_18 != 1) {
      VAR_0->valid = 1;
      VAR_18 = 1;
      VAR_20 = VAR_11+VAR_19;
      VAR_27 = VAR_20 *1000*1000 / VAR_23;
      VAR_28 = VAR_11 * 1000*1000 / VAR_23;
      VAR_52 = VAR_51 *1000*1000 / VAR_23;
      VAR_29 = VAR_10*1000*1000 / VAR_25;
      VAR_30 = VAR_12*1000*1000 / VAR_24;
      VAR_45 = VAR_27 + VAR_29 + VAR_30;
      VAR_46 = VAR_28 + VAR_29 + VAR_30;
      VAR_17 = 0;

      VAR_33 = VAR_20 *1000*1000 / VAR_23;
      VAR_34 = (4)*1000*1000 / VAR_25;
      VAR_35 = 0*1000*1000 / VAR_24;
      VAR_47 = VAR_33 + VAR_34 + VAR_35;

      if(VAR_6) {
        VAR_31 = VAR_24 * 4;
        VAR_32 = VAR_24 * VAR_8/8;

        VAR_13 = 1;
        VAR_13 += 1;

        VAR_14 = 2;
        if(VAR_26)
            VAR_14 += 1;

        VAR_36 = (VAR_13 * VAR_3)*1000*1000/VAR_23;

        VAR_37 = VAR_36 + VAR_33;

        VAR_39 = VAR_14 * VAR_3 *1000*1000/ VAR_23;
        VAR_40 =
          VAR_37
          +VAR_39
          +VAR_27 + VAR_29 +VAR_30
          ;

        VAR_41 = VAR_40 * VAR_32/(1000*1000);
        VAR_41++;
      } else {
        VAR_32 = VAR_24 * VAR_8/8;

        VAR_14 = 1;
        VAR_14 += 1;
        if(VAR_26)
            VAR_14 += 1;
        VAR_39 = VAR_14 * VAR_3 *1000*1000/ VAR_23;
        VAR_40 = VAR_39 + VAR_27 + VAR_29 + VAR_30 ;
        VAR_41 = VAR_40 * VAR_32/(1000*1000);
        VAR_41++;
          if(VAR_5 == 1){
              VAR_16 = VAR_25 * 8;
              if(VAR_32 * 100 >= VAR_16 * 102)
                      VAR_41 = 0xfff;

              else if(VAR_32 * 100 >= VAR_16 * 98) {
                  VAR_41 = 1024;
                  VAR_21 = 512;
                  VAR_17 = (VAR_21 * 1000 * 1000)/ (8*VAR_5)/VAR_23 ;
              }
          }
      }







      VAR_42 = ((int)VAR_41/8)*8;
      if (VAR_42 < VAR_41)
          VAR_41 += 8;

      VAR_22 = VAR_41 + VAR_21 - 1024;
      VAR_44 = VAR_46 + VAR_52;
      VAR_50 = (1024-VAR_41)/(8*VAR_5);


      VAR_48 = VAR_44 * VAR_24/(1000*1000);
      VAR_49 = VAR_48 * VAR_8 / 8;

      if((VAR_49 < VAR_22) && (VAR_22 > 0)) {
          VAR_0->valid = 0;
          VAR_18 = 0;
          if(VAR_51 == 0) {
            if(VAR_21 <= 32) {
              VAR_18 = 1;
            } else {
              VAR_21 = VAR_21/2;
            }
          } else {
            VAR_51--;
          }
      } else {
        if (VAR_41 > 1023){
          VAR_0->valid = 0;
          VAR_18 = 0;
          if(VAR_51 == 0)
              VAR_18 = 1;
          else
              VAR_51--;
        }
      }
      VAR_43 = VAR_41;

      if(VAR_41 < (1024-VAR_21+8)) VAR_41 = 1024-VAR_21+8;
      VAR_2 = (int)(VAR_41);

      VAR_0->graphics_lwm = VAR_2; VAR_0->graphics_burst_size = VAR_21;


      VAR_0->video_lwm = 1024; VAR_0->video_burst_size = 512;
    }
}
