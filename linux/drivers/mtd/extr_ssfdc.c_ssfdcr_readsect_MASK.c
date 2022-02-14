
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mtd; } ;
struct ssfdcr_record {int erase_size; int map_len; int* logic_block_map; TYPE_1__ mbd; } ;
struct mtd_blktrans_dev {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int,int ) ;
 int FUNC_2 (char*,unsigned long,...) ;
 scalar_t__ FUNC_3 (int ,char*,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct mtd_blktrans_dev *VAR_3,
    unsigned long VAR_4, char *VAR_5)
{
 struct ssfdcr_record *VAR_6 = (struct ssfdcr_record *)VAR_3;
 int VAR_7, VAR_8, VAR_9;

 VAR_7 = VAR_6->erase_size >> VAR_1;
 VAR_8 = (int)(VAR_4 % VAR_7);
 VAR_9 = (int)(VAR_4 / VAR_7);

 FUNC_2("SSFDC_RO: ssfdcr_readsect(%lu) sec_per_blk=%d, ofst=%d,"
  " block_addr=%d\n", VAR_4, VAR_7, VAR_8,
  VAR_9);

 FUNC_0(VAR_9 >= VAR_6->map_len);

 VAR_9 = VAR_6->logic_block_map[VAR_9];

 FUNC_2("SSFDC_RO: ssfdcr_readsect() phys_block_addr=%d\n",
  VAR_9);

 if (VAR_9 < 0xffff) {
  unsigned long VAR_10;

  VAR_10 = (unsigned long)VAR_9 * VAR_7 +
    VAR_8;

  FUNC_2("SSFDC_RO: ssfdcr_readsect() phys_sect_no=%lu\n",
   VAR_10);

  if (FUNC_3(VAR_6->mbd.mtd, VAR_5, VAR_10) < 0)
   return -VAR_0;
 } else {
  FUNC_1(VAR_5, 0xff, VAR_2);
 }

 return 0;
}
