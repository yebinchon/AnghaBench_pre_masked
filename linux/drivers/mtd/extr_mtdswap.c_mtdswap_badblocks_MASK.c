
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct mtd_info {scalar_t__ erasesize; } ;
typedef scalar_t__ loff_t ;


 scalar_t__ FUNC_0 (struct mtd_info*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct mtd_info*) ;

__attribute__((used)) static unsigned int FUNC_2(struct mtd_info *VAR_0, uint64_t VAR_1)
{
 loff_t VAR_2;
 unsigned int VAR_3;

 VAR_3 = 0;

 if (FUNC_1(VAR_0))
  for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2 += VAR_0->erasesize)
   if (FUNC_0(VAR_0, VAR_2))
    VAR_3++;

 return VAR_3;
}
