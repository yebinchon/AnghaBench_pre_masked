
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {struct mtd_info* mtd; } ;
struct ssfdcr_record {int map_len; unsigned long erase_size; int cis_block; unsigned short* logic_block_map; TYPE_1__ mbd; } ;
struct mtd_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct mtd_info*,unsigned long) ;
 int FUNC_2 (char*,int,...) ;
 int FUNC_3 (struct mtd_info*,unsigned long,int *) ;

__attribute__((used)) static int FUNC_4(struct ssfdcr_record *VAR_3)
{
 unsigned long VAR_4;
 uint8_t VAR_5[VAR_2];
 int VAR_6, VAR_7, VAR_8;
 struct mtd_info *VAR_9 = VAR_3->mbd.mtd;

 FUNC_2("SSFDC_RO: build_block_map() nblks=%d (%luK)\n",
       VAR_3->map_len,
       (unsigned long)VAR_3->map_len * VAR_3->erase_size / 1024);


 for (VAR_8 = VAR_3->cis_block + 1; VAR_8 < VAR_3->map_len;
   VAR_8++) {
  VAR_4 = (unsigned long)VAR_8 * VAR_3->erase_size;
  if (FUNC_1(VAR_9, VAR_4))
   continue;

  VAR_6 = FUNC_3(VAR_9, VAR_4, VAR_5);
  if (VAR_6 < 0) {
   FUNC_2("SSFDC_RO: mtd read_oob() failed at %lu\n",
    VAR_4);
   return -1;
  }
  VAR_7 = FUNC_0(VAR_5);


  if (VAR_7 >= 0 &&
    VAR_7 < VAR_0) {
   int VAR_10;

   VAR_10 = VAR_8 / VAR_1;
   VAR_7 += VAR_10 * VAR_0;
   VAR_3->logic_block_map[VAR_7] =
    (unsigned short)VAR_8;

   FUNC_2("SSFDC_RO: build_block_map() phys_block=%d,"
    "logic_block_addr=%d, zone=%d\n",
    VAR_8, VAR_7, VAR_10);
  }
 }
 return 0;
}
