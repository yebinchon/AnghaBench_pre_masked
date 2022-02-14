
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct mvpp2_bm_pool {int id; } ;
struct mvpp2 {scalar_t__ hw_version; } ;
struct device {int dummy; } ;
typedef int phys_addr_t ;
typedef int dma_addr_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 () ;
 unsigned int FUNC_2 (struct mvpp2*,int ) ;
 void* FUNC_3 (struct mvpp2*,unsigned int,int ) ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct device *VAR_6, struct mvpp2 *VAR_7,
        struct mvpp2_bm_pool *VAR_8,
        dma_addr_t *VAR_9,
        phys_addr_t *VAR_10)
{
 unsigned int VAR_11 = FUNC_2(VAR_7, FUNC_1());

 *VAR_9 = FUNC_3(VAR_7, VAR_11,
          FUNC_0(VAR_8->id));
 *VAR_10 = FUNC_3(VAR_7, VAR_11, VAR_5);

 if (VAR_7->hw_version == VAR_0) {
  u32 VAR_12;
  u32 VAR_13, VAR_14;

  VAR_12 = FUNC_3(VAR_7, VAR_11, VAR_1);
  VAR_13 = (VAR_12 & VAR_2);
  VAR_14 = (VAR_12 & VAR_3) >>
   VAR_4;

  if (sizeof(dma_addr_t) == 8)
   *VAR_9 |= (u64)VAR_13 << 32;

  if (sizeof(phys_addr_t) == 8)
   *VAR_10 |= (u64)VAR_14 << 32;
 }

 FUNC_4();
}
