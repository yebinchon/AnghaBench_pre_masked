
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct mtd_partition {int size; char* name; } ;
struct intel_spi {int nregions; int writeable; scalar_t__ base; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct intel_spi*,int,int) ;
 int FUNC_2 (struct mtd_partition*,int ,int) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct intel_spi *VAR_3,
         struct mtd_partition *VAR_4)
{
 u64 VAR_5;
 int VAR_6;

 FUNC_2(VAR_4, 0, sizeof(*VAR_4));


 VAR_4->size = 4096;
 VAR_4->name = "BIOS";





 for (VAR_6 = 1; VAR_6 < VAR_3->nregions; VAR_6++) {
  u32 VAR_7, VAR_8, VAR_9;

  VAR_7 = FUNC_3(VAR_3->base + FUNC_0(VAR_6));
  VAR_8 = VAR_7 & VAR_0;
  VAR_9 = (VAR_7 & VAR_1) >> VAR_2;

  if (VAR_8 >= VAR_9 || VAR_9 == 0)
   continue;





  if (FUNC_1(VAR_3, VAR_8, VAR_9))
   VAR_3->writeable = 0;

  VAR_5 = (VAR_9 << 12) + 4096;
  if (VAR_5 > VAR_4->size)
   VAR_4->size = VAR_5;
 }
}
