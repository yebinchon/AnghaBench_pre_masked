
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct sm_ftl {scalar_t__ cis_block; int readonly; scalar_t__ unstable; int block_size; TYPE_1__* trans; struct ftl_zone* zones; } ;
struct mtd_info {int dummy; } ;
struct ftl_zone {int free_sectors; } ;
struct erase_info {int len; int addr; } ;
typedef int block ;
struct TYPE_2__ {struct mtd_info* mtd; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,unsigned char const*,int) ;
 scalar_t__ FUNC_2 (struct mtd_info*,struct erase_info*) ;
 int FUNC_3 (struct sm_ftl*,int,scalar_t__) ;
 int FUNC_4 (struct sm_ftl*,int,scalar_t__,int ) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static int FUNC_6(struct sm_ftl *VAR_1, int VAR_2, uint16_t VAR_3,
     int VAR_4)
{
 struct ftl_zone *VAR_5 = &VAR_1->zones[VAR_2];
 struct mtd_info *VAR_6 = VAR_1->trans->mtd;
 struct erase_info VAR_7;

 VAR_7.addr = FUNC_4(VAR_1, VAR_2, VAR_3, 0);
 VAR_7.len = VAR_1->block_size;

 if (VAR_1->unstable)
  return -VAR_0;

 FUNC_0(VAR_1->readonly);

 if (VAR_2 == 0 && (VAR_3 == VAR_1->cis_block || VAR_3 == 0)) {
  FUNC_5("attempted to erase the CIS!");
  return -VAR_0;
 }

 if (FUNC_2(VAR_6, &VAR_7)) {
  FUNC_5("erase of block %d in zone %d failed",
       VAR_3, VAR_2);
  goto error;
 }

 if (VAR_4)
  FUNC_1(&VAR_5->free_sectors,
   (const unsigned char *)&VAR_3, sizeof(VAR_3));

 return 0;
error:
 FUNC_3(VAR_1, VAR_2, VAR_3);
 return -VAR_0;
}
