
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct pci_dev {int bus; } ;
struct TYPE_7__ {char pix_bpp; unsigned int memory_type; int memory_width; int mem_latency; int mem_aligned; int mem_page_miss; unsigned int pclk_khz; unsigned int mclk_khz; unsigned int nvclk_khz; scalar_t__ gr_during_vid; scalar_t__ enable_mp; scalar_t__ enable_video; } ;
typedef TYPE_1__ nv10_sim_state ;
struct TYPE_8__ {int graphics_burst_size; int graphics_lwm; scalar_t__ valid; } ;
typedef TYPE_2__ nv10_fifo_info ;
struct TYPE_9__ {unsigned int CrystalFreqKHz; int * PRAMDAC0; } ;
typedef TYPE_3__ RIVA_HW_INST ;


 unsigned int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (int ) ;
 struct pci_dev* FUNC_4 (int,int ,int) ;
 int FUNC_5 (struct pci_dev*,int,unsigned int*) ;

__attribute__((used)) static void FUNC_6
(
    unsigned VAR_0,
    unsigned VAR_1,
    unsigned *VAR_2,
    unsigned *VAR_3,
    RIVA_HW_INST *VAR_4,
    struct pci_dev *VAR_5
)
{
    nv10_fifo_info VAR_6;
    nv10_sim_state VAR_7;
    unsigned int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
    unsigned int VAR_14;
    struct pci_dev *VAR_15;
    int VAR_16 = FUNC_3(VAR_5->bus);

    VAR_15 = FUNC_4(VAR_16, 0, 3);
    FUNC_5(VAR_15, 0x6C, &VAR_14);
    FUNC_2(VAR_15);
    VAR_14 = (VAR_14 >> 8) & 0xf;

    if(!VAR_14) VAR_14 = 4;
    VAR_12 = 400000 / VAR_14;

    VAR_11 = FUNC_0(&VAR_4->PRAMDAC0[0x00000500/4], 0);
    VAR_8 = (VAR_11 >> 0) & 0xFF; VAR_9 = (VAR_11 >> 8) & 0xFF; VAR_10 = (VAR_11 >> 16) & 0x0F;
    VAR_13 = (VAR_9 * VAR_4->CrystalFreqKHz / VAR_8) >> VAR_10;
    VAR_7.pix_bpp = (char)VAR_1;
    VAR_7.enable_video = 0;
    VAR_7.enable_mp = 0;

    VAR_15 = FUNC_4(VAR_16, 0, 1);
    FUNC_5(VAR_15, 0x7C, &VAR_7.memory_type);
    FUNC_2(VAR_15);
    VAR_7.memory_type = (VAR_7.memory_type >> 12) & 1;

    VAR_7.memory_width = 64;
    VAR_7.mem_latency = 3;
    VAR_7.mem_aligned = 1;
    VAR_7.mem_page_miss = 10;
    VAR_7.gr_during_vid = 0;
    VAR_7.pclk_khz = VAR_0;
    VAR_7.mclk_khz = VAR_12;
    VAR_7.nvclk_khz = VAR_13;
    FUNC_1(&VAR_6, &VAR_7);
    if (VAR_6.valid)
    {
        int VAR_17 = VAR_6.graphics_burst_size >> 4;
        *VAR_2 = 0;
        while (VAR_17 >>= 1)
     (*VAR_2)++;
        *VAR_3 = VAR_6.graphics_lwm >> 3;
    }
}
