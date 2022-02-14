
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pclk_khz; int mclk_khz; int nvclk_khz; int mem_page_miss; int mem_latency; int memory_width; int enable_video; int gr_during_vid; int pix_bpp; int mem_aligned; int enable_mp; } ;
typedef TYPE_1__ nv4_sim_state ;
struct TYPE_6__ {int valid; int graphics_lwm; int graphics_burst_size; int video_lwm; int video_burst_size; } ;
typedef TYPE_2__ nv4_fifo_info ;



__attribute__((used)) static void FUNC_0
(
    nv4_fifo_info *VAR_0,
    nv4_sim_state *VAR_1
)
{
    int VAR_2, VAR_3, VAR_4,VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
    int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
    int VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;
    int VAR_22, VAR_23, VAR_24, VAR_25;
    int VAR_26, VAR_27, VAR_28, VAR_29, VAR_30;
    int VAR_31, VAR_32, VAR_33, VAR_34, VAR_35, VAR_36,VAR_37;
    int VAR_38, VAR_39;

    VAR_0->valid = 1;
    VAR_23 = VAR_1->pclk_khz;
    VAR_22 = VAR_1->mclk_khz;
    VAR_24 = VAR_1->nvclk_khz;
    VAR_3 = VAR_1->mem_page_miss;
    VAR_4 = VAR_1->mem_latency;
    VAR_5 = VAR_1->memory_width >> 6;
    VAR_6 = VAR_1->enable_video;
    VAR_7 = VAR_1->gr_during_vid;
    VAR_8 = VAR_1->pix_bpp;
    VAR_9 = VAR_1->mem_aligned;
    VAR_25 = VAR_1->enable_mp;
    VAR_37 = 0;
    VAR_33 = 0;
    VAR_19 = 128;
    VAR_12 = 2;
    VAR_10 = 2;
    VAR_10 += 2;
    VAR_10 += 1;
    VAR_11 = 5;
    VAR_11 += 3;
    VAR_11 += 1;
    VAR_11 += VAR_4;
    VAR_11 += 1;
    VAR_11 += 1;
    VAR_11 += 1;
    VAR_11 += 1;
    VAR_17 = 3;
    VAR_10 += 2;
    VAR_10 += 1;
    VAR_10 += 1;
    VAR_10 += 1;
    if (VAR_25)
        VAR_11+=4;
    VAR_10 += 0;
    VAR_12 += 0;
    VAR_16 = 0;
    VAR_15 = 0;
    while (VAR_16 != 1)
    {
        VAR_0->valid = 1;
        VAR_16 = 1;
        VAR_18 = VAR_11+VAR_17;
        VAR_26 = VAR_18 *1000*1000 / VAR_22;
        VAR_27 = VAR_10*1000*1000 / VAR_24;
        VAR_28 = VAR_10*1000*1000 / VAR_23;
        if (VAR_6)
        {
            VAR_29 = VAR_23 * 2;
            VAR_30 = VAR_23 * VAR_8/8;
            VAR_13 = 2;
            VAR_13 += 1;
            VAR_14 = 2;
            VAR_31 = (VAR_13 * VAR_3)*1000*1000/VAR_22;
            if (VAR_24 * 2 > VAR_22 * VAR_5)
                VAR_34 = VAR_19*1000*1000 / 16 / VAR_24 ;
            else
                VAR_34 = VAR_19*1000*1000 / (8 * VAR_5) / VAR_22;
            VAR_32 = VAR_31 + VAR_26 + VAR_27 + VAR_28 + VAR_34;
            VAR_33 = VAR_32 * VAR_29/(1000*1000);
            VAR_33++;
            VAR_15 = 128;
            if (VAR_33 > 128) VAR_15 = 64;
            if (VAR_33 > (256-64)) VAR_15 = 32;
            if (VAR_24 * 2 > VAR_22 * VAR_5)
                VAR_34 = VAR_15 *1000*1000/ 16 / VAR_24 ;
            else
                VAR_34 = VAR_15*1000*1000 / (8 * VAR_5) / VAR_22;
            VAR_35 = VAR_14 * VAR_3 *1000*1000/ VAR_22;
            VAR_36 =
            VAR_32
            +VAR_34
            +VAR_35
            +VAR_26 + VAR_27 +VAR_28
            ;
            VAR_37 = VAR_36 * VAR_30/(1000*1000);
            VAR_37++;
        }
        else
        {
            VAR_30 = VAR_23 * VAR_8/8;
            VAR_14 = 2;
            VAR_14 += 1;
            VAR_35 = VAR_14 * VAR_3 *1000*1000/ VAR_22;
            VAR_36 = VAR_35 + VAR_26 + VAR_27 + VAR_28 ;
            VAR_37 = VAR_36 * VAR_30/(1000*1000);
            VAR_37++;
        }
        VAR_20 = VAR_37 + VAR_19 - 512;
        VAR_21 = VAR_20 * VAR_23 / VAR_22;
        VAR_21 = VAR_21 * VAR_8 / 8;
        if ((VAR_21 < VAR_20) && (VAR_20 > 0))
        {
            VAR_0->valid = 0;
            VAR_16 = 0;
            if (VAR_17 ==0) VAR_16 = 1;
            VAR_17--;
        }
        else if (VAR_6)
        {
            if ((VAR_37 > 511) || (VAR_33 > 255))
            {
                VAR_0->valid = 0;
                VAR_16 = 0;
                if (VAR_17 ==0) VAR_16 = 1;
                VAR_17--;
            }
        }
        else
        {
            if (VAR_37 > 519)
            {
                VAR_0->valid = 0;
                VAR_16 = 0;
                if (VAR_17 ==0) VAR_16 = 1;
                VAR_17--;
            }
        }
        VAR_38 = VAR_37;
        VAR_39 = VAR_33;
        if (VAR_37 < 384) VAR_37 = 384;
        if (VAR_33 < 128) VAR_33 = 128;
        VAR_2 = (int)(VAR_37);
        VAR_0->graphics_lwm = VAR_2;
        VAR_0->graphics_burst_size = 128;
        VAR_2 = (int)((VAR_33+15));
        VAR_0->video_lwm = VAR_2;
        VAR_0->video_burst_size = VAR_15;
    }
}
