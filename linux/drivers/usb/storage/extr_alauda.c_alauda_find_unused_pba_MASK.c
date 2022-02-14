
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct alauda_media_info {unsigned int zonesize; unsigned int zoneshift; scalar_t__** pba_to_lba; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static u16 FUNC_0(struct alauda_media_info *VAR_1,
 unsigned int VAR_2)
{
 u16 *VAR_3 = VAR_1->pba_to_lba[VAR_2];
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1->zonesize; VAR_4++)
  if (VAR_3[VAR_4] == VAR_0)
   return (VAR_2 << VAR_1->zoneshift) + VAR_4;

 return 0;
}
