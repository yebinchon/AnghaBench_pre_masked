
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct f2fs_sb_info {int s_ndevs; int devs; } ;
struct TYPE_2__ {int blkz_seq; int bdev; } ;


 TYPE_1__ FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct f2fs_sb_info *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->s_ndevs; VAR_2++) {
  FUNC_1(FUNC_0(VAR_2).bdev, VAR_0);



 }
 FUNC_2(VAR_1->devs);
}
