
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int mclk_khz; int pclk_khz; int memory_width; int mem_page_miss; int mem_latency; scalar_t__ enable_mp; scalar_t__ mem_aligned; } ;
typedef TYPE_1__ nv3_sim_state ;
struct TYPE_11__ {int graphics_lwm; int video_lwm; long graphics_burst_size; long video_burst_size; int graphics_hi_priority; int media_hi_priority; } ;
typedef TYPE_2__ nv3_fifo_info ;
struct TYPE_12__ {long by_gfacc; long gdrain_rate; int engine_en; int converged; int mocc; long mdrain_rate; long vocc; long vdrain_rate; long gocc; int first_vacc; int first_gacc; int first_macc; int gburst_size; int vburst_size; scalar_t__ priority; scalar_t__ wcvlwm; scalar_t__ wcglwm; scalar_t__ cur; scalar_t__ gr_en; scalar_t__ vid_en; scalar_t__ wcvocc; scalar_t__ wcgocc; scalar_t__ wcmocc; } ;
typedef TYPE_3__ nv3_arb_info ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*,TYPE_3__*) ;

__attribute__((used)) static char FUNC_2(nv3_fifo_info * VAR_4, nv3_sim_state * VAR_5, nv3_arb_info *VAR_6)
{
    long VAR_7, VAR_8, VAR_9, VAR_10;
    int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
    int VAR_16;

    VAR_16 = 2*(VAR_5->mclk_khz/VAR_5->pclk_khz) + 5;
    VAR_11 = 2;
    if (VAR_5->mem_aligned) VAR_12 = 2;
    else VAR_12 = 3;
    VAR_13 = 2;
    VAR_14 = VAR_5->memory_width * 1;
    VAR_15 = 32;
    VAR_10 = 1000000 * (VAR_12*VAR_5->mem_page_miss + VAR_5->mem_latency)/VAR_5->mclk_khz;
    VAR_6->by_gfacc = VAR_10*VAR_6->gdrain_rate/1000000;
    VAR_6->wcmocc = 0;
    VAR_6->wcgocc = 0;
    VAR_6->wcvocc = 0;
    VAR_6->wcvlwm = 0;
    VAR_6->wcglwm = 0;
    VAR_6->engine_en = 1;
    VAR_6->converged = 1;
    if (VAR_6->engine_en)
    {
        VAR_7 = 1000000*(VAR_5->mem_page_miss + VAR_14/(VAR_5->memory_width/8) +VAR_16)/VAR_5->mclk_khz;
        VAR_6->mocc = VAR_5->enable_mp ? 0-VAR_7*VAR_6->mdrain_rate/1000000 : 0;
        VAR_6->vocc = VAR_6->vid_en ? 0-VAR_7*VAR_6->vdrain_rate/1000000 : 0;
        VAR_6->gocc = VAR_6->gr_en ? 0-VAR_7*VAR_6->gdrain_rate/1000000 : 0;
        VAR_6->cur = VAR_0;
        VAR_6->first_vacc = 1;
        VAR_6->first_gacc = 1;
        VAR_6->first_macc = 1;
        FUNC_1(VAR_4, VAR_5,VAR_6);
    }
    if (VAR_5->enable_mp)
    {
        VAR_9 = 1000000 * (VAR_11*VAR_5->mem_page_miss + VAR_15/(VAR_5->memory_width/8) + VAR_16)/VAR_5->mclk_khz;
        VAR_6->mocc = VAR_5->enable_mp ? 0 : VAR_15 - VAR_9*VAR_6->mdrain_rate/1000000;
        VAR_6->vocc = VAR_6->vid_en ? 0 : 0- VAR_9*VAR_6->vdrain_rate/1000000;
        VAR_6->gocc = VAR_6->gr_en ? 0: 0- VAR_9*VAR_6->gdrain_rate/1000000;
        VAR_6->cur = VAR_2;
        VAR_6->first_vacc = 1;
        VAR_6->first_gacc = 1;
        VAR_6->first_macc = 0;
        FUNC_1(VAR_4, VAR_5,VAR_6);
    }
    if (VAR_6->gr_en)
    {
        VAR_6->first_vacc = 1;
        VAR_6->first_gacc = 0;
        VAR_6->first_macc = 1;
        VAR_10 = 1000000*(VAR_12*VAR_5->mem_page_miss + VAR_6->gburst_size/(VAR_5->memory_width/8) + VAR_16)/VAR_5->mclk_khz;
        VAR_6->gocc = VAR_6->gburst_size - VAR_10*VAR_6->gdrain_rate/1000000;
        VAR_6->vocc = VAR_6->vid_en? 0-VAR_10*VAR_6->vdrain_rate/1000000 : 0;
        VAR_6->mocc = VAR_5->enable_mp ? 0-VAR_10*VAR_6->mdrain_rate/1000000: 0;
        VAR_6->cur = VAR_1;
        FUNC_1(VAR_4, VAR_5,VAR_6);
    }
    if (VAR_6->vid_en)
    {
        VAR_6->first_vacc = 0;
        VAR_6->first_gacc = 1;
        VAR_6->first_macc = 1;
        VAR_8 = 1000000*(VAR_13*VAR_5->mem_page_miss + VAR_6->vburst_size/(VAR_5->memory_width/8) + VAR_16)/VAR_5->mclk_khz;
        VAR_6->vocc = VAR_6->vburst_size - VAR_8*VAR_6->vdrain_rate/1000000;
        VAR_6->gocc = VAR_6->gr_en? (0-VAR_8*VAR_6->gdrain_rate/1000000) : 0;
        VAR_6->mocc = VAR_5->enable_mp? 0-VAR_8*VAR_6->mdrain_rate/1000000 :0 ;
        VAR_6->cur = VAR_3;
        FUNC_1(VAR_4, VAR_5, VAR_6);
    }
    if (VAR_6->converged)
    {
        VAR_4->graphics_lwm = (int)FUNC_0(VAR_6->wcglwm) + 16;
        VAR_4->video_lwm = (int)FUNC_0(VAR_6->wcvlwm) + 32;
        VAR_4->graphics_burst_size = VAR_6->gburst_size;
        VAR_4->video_burst_size = VAR_6->vburst_size;
        VAR_4->graphics_hi_priority = (VAR_6->priority == VAR_1);
        VAR_4->media_hi_priority = (VAR_6->priority == VAR_2);
        if (VAR_4->video_lwm > 160)
        {
            VAR_4->graphics_lwm = 256;
            VAR_4->video_lwm = 128;
            VAR_4->graphics_burst_size = 64;
            VAR_4->video_burst_size = 64;
            VAR_4->graphics_hi_priority = 0;
            VAR_4->media_hi_priority = 0;
            VAR_6->converged = 0;
            return (0);
        }
        if (VAR_4->video_lwm > 128)
        {
            VAR_4->video_lwm = 128;
        }
        return (1);
    }
    else
    {
        VAR_4->graphics_lwm = 256;
        VAR_4->video_lwm = 128;
        VAR_4->graphics_burst_size = 64;
        VAR_4->video_burst_size = 64;
        VAR_4->graphics_hi_priority = 0;
        VAR_4->media_hi_priority = 0;
        return (0);
    }
}
