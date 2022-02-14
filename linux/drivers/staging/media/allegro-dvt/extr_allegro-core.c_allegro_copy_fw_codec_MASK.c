
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int paddr; int vaddr; } ;
struct allegro_dev {int regmap; int v4l2_dev; TYPE_1__ firmware; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct allegro_dev*,TYPE_1__*,size_t) ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int const* const,size_t) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int ,int *,char*,size_t,int*) ;
 int FUNC_6 (int *,char*,size_t) ;

__attribute__((used)) static void FUNC_7(struct allegro_dev *VAR_7,
      const u8 * const VAR_8, size_t VAR_9)
{
 int VAR_10;
 dma_addr_t VAR_11, VAR_12;







 VAR_10 = FUNC_0(VAR_7, &VAR_7->firmware, VAR_9);
 if (VAR_10) {
  FUNC_6(&VAR_7->v4l2_dev,
    "failed to allocate %zu bytes for firmware\n", VAR_9);
  return;
 }

 FUNC_5(1, VAR_6, &VAR_7->v4l2_dev,
   "copy codec firmware (%zd B) to phys %pad\n",
   VAR_9, &VAR_7->firmware.paddr);
 FUNC_2(VAR_7->firmware.vaddr, VAR_8, VAR_9);

 FUNC_3(VAR_7->regmap, VAR_4,
       FUNC_4(VAR_7->firmware.paddr));

 VAR_11 = VAR_7->firmware.paddr - VAR_5;
 FUNC_5(2, VAR_6, &VAR_7->v4l2_dev,
   "icache_offset: msb = 0x%x, lsb = 0x%x\n",
   FUNC_4(VAR_11), FUNC_1(VAR_11));
 FUNC_3(VAR_7->regmap, VAR_3,
       FUNC_4(VAR_11));
 FUNC_3(VAR_7->regmap, VAR_2,
       FUNC_1(VAR_11));

 VAR_12 =
     (VAR_7->firmware.paddr & 0xffffffff00000000ULL) - VAR_5;
 FUNC_5(2, VAR_6, &VAR_7->v4l2_dev,
   "dcache_offset: msb = 0x%x, lsb = 0x%x\n",
   FUNC_4(VAR_12), FUNC_1(VAR_12));
 FUNC_3(VAR_7->regmap, VAR_1,
       FUNC_4(VAR_12));
 FUNC_3(VAR_7->regmap, VAR_0,
       FUNC_1(VAR_12));
}
