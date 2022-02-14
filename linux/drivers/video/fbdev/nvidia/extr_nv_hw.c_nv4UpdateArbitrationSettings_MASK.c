
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nvidia_par {int PEXTDEV; int PFB; } ;
struct TYPE_5__ {char pix_bpp; int memory_width; char mem_latency; int mem_aligned; char mem_page_miss; unsigned int pclk_khz; unsigned int mclk_khz; unsigned int nvclk_khz; scalar_t__ gr_during_vid; scalar_t__ enable_mp; scalar_t__ enable_video; } ;
typedef TYPE_1__ nv4_sim_state ;
struct TYPE_6__ {int graphics_burst_size; int graphics_lwm; scalar_t__ valid; } ;
typedef TYPE_2__ nv4_fifo_info ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_2 (struct nvidia_par*,unsigned int*,unsigned int*) ;

__attribute__((used)) static void FUNC_3(unsigned VAR_0,
      unsigned VAR_1,
      unsigned *VAR_2,
      unsigned *VAR_3, struct nvidia_par *VAR_4)
{
 nv4_fifo_info VAR_5;
 nv4_sim_state VAR_6;
 unsigned int VAR_7, VAR_8, VAR_9;

 FUNC_2(VAR_4, &VAR_7, &VAR_8);

 VAR_9 = FUNC_0(VAR_4->PFB, 0x00000204);
 VAR_6.pix_bpp = (char)VAR_1;
 VAR_6.enable_video = 0;
 VAR_6.enable_mp = 0;
 VAR_6.memory_width = (FUNC_0(VAR_4->PEXTDEV, 0x0000) & 0x10) ?
     128 : 64;
 VAR_6.mem_latency = (char)VAR_9 & 0x0F;
 VAR_6.mem_aligned = 1;
 VAR_6.mem_page_miss =
     (char)(((VAR_9 >> 4) & 0x0F) + ((VAR_9 >> 31) & 0x01));
 VAR_6.gr_during_vid = 0;
 VAR_6.pclk_khz = VAR_0;
 VAR_6.mclk_khz = VAR_7;
 VAR_6.nvclk_khz = VAR_8;
 FUNC_1(&VAR_5, &VAR_6);
 if (VAR_5.valid) {
  int VAR_10 = VAR_5.graphics_burst_size >> 4;
  *VAR_2 = 0;
  while (VAR_10 >>= 1)
   (*VAR_2)++;
  *VAR_3 = VAR_5.graphics_lwm >> 3;
 }
}
