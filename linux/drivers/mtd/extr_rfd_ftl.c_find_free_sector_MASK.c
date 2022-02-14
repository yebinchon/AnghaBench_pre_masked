
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct partition {int data_sectors_per_block; int * header_cache; } ;
struct block {int free_sectors; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(const struct partition *VAR_2, const struct block *VAR_3)
{
 int VAR_4, VAR_5;

 VAR_4 = VAR_5 = VAR_2->data_sectors_per_block - VAR_3->free_sectors;

 do {
  if (FUNC_0(VAR_2->header_cache[VAR_0 + VAR_4])
    == VAR_1)
   return VAR_4;

  if (++VAR_4 == VAR_2->data_sectors_per_block)
   VAR_4 = 0;
 }
 while(VAR_4 != VAR_5);

 return -1;
}
