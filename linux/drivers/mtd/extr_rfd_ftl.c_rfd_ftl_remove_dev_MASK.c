
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* mtd; } ;
struct partition {int total_blocks; TYPE_3__* blocks; TYPE_3__* header_cache; int sector_map; TYPE_2__ mbd; } ;
struct mtd_blktrans_dev {int dummy; } ;
struct TYPE_6__ {int erases; } ;
struct TYPE_4__ {int name; } ;


 int FUNC_0 (struct mtd_blktrans_dev*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (char*,int ,int,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct mtd_blktrans_dev *VAR_0)
{
 struct partition *VAR_1 = (struct partition*)VAR_0;
 int VAR_2;

 for (VAR_2=0; VAR_2<VAR_1->total_blocks; VAR_2++) {
  FUNC_2("rfd_ftl_remove_dev:'%s': erase unit #%02d: %d erases\n",
   VAR_1->mbd.mtd->name, VAR_2, VAR_1->blocks[VAR_2].erases);
 }

 FUNC_0(VAR_0);
 FUNC_3(VAR_1->sector_map);
 FUNC_1(VAR_1->header_cache);
 FUNC_1(VAR_1->blocks);
}
