
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mtd_info {int dummy; } ;
struct davinci_nand_info {int core_chipsel; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct davinci_nand_info*,scalar_t__) ;
 struct davinci_nand_info* FUNC_1 (struct mtd_info*) ;

__attribute__((used)) static inline uint32_t FUNC_2(struct mtd_info *VAR_1)
{
 struct davinci_nand_info *VAR_2 = FUNC_1(VAR_1);

 return FUNC_0(VAR_2, VAR_0
   + 4 * VAR_2->core_chipsel);
}
