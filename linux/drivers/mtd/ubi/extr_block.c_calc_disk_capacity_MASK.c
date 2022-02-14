
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ubi_volume_info {int used_bytes; } ;
typedef int sector_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static int FUNC_1(struct ubi_volume_info *VAR_1, u64 *VAR_2)
{
 u64 VAR_3 = VAR_1->used_bytes >> 9;

 if (VAR_1->used_bytes % 512) {
  FUNC_0("UBI: block: volume size is not a multiple of 512, "
   "last %llu bytes are ignored!\n",
   VAR_1->used_bytes - (VAR_3 << 9));
 }

 if ((sector_t)VAR_3 != VAR_3)
  return -VAR_0;

 *VAR_2 = VAR_3;

 return 0;
}
