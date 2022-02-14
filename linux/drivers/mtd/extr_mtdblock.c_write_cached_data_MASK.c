
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct mtd_info* mtd; } ;
struct mtdblk_dev {scalar_t__ cache_state; int cache_data; int cache_size; int cache_offset; TYPE_1__ mbd; } ;
struct mtd_info {int name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct mtd_info*,int ,int ,int ) ;
 int FUNC_1 (char*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2 (struct mtdblk_dev *VAR_2)
{
 struct mtd_info *VAR_3 = VAR_2->mbd.mtd;
 int VAR_4;

 if (VAR_2->cache_state != VAR_0)
  return 0;

 FUNC_1("mtdblock: writing cached data for \"%s\" "
   "at 0x%lx, size 0x%x\n", VAR_3->name,
   VAR_2->cache_offset, VAR_2->cache_size);

 VAR_4 = FUNC_0 (VAR_3, VAR_2->cache_offset,
      VAR_2->cache_size, VAR_2->cache_data);
 if (VAR_4)
  return VAR_4;
 VAR_2->cache_state = VAR_1;
 return 0;
}
