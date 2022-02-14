
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct f2fs_sb_info {int dummy; } ;
typedef int block_t ;
struct TYPE_4__ {int sit_base_addr; } ;
struct TYPE_3__ {int ssa_blkaddr; } ;


 int FUNC_0 () ;



 int FUNC_1 (struct f2fs_sb_info*) ;
 int FUNC_2 (struct f2fs_sb_info*) ;






 int VAR_0 ;
 int FUNC_3 (struct f2fs_sb_info*) ;
 int FUNC_4 (struct f2fs_sb_info*) ;
 TYPE_2__* FUNC_5 (struct f2fs_sb_info*) ;
 TYPE_1__* FUNC_6 (struct f2fs_sb_info*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct f2fs_sb_info*,int ,int) ;
 int FUNC_9 (struct f2fs_sb_info*) ;
 int FUNC_10 (struct f2fs_sb_info*,char*,int ) ;
 int FUNC_11 (struct f2fs_sb_info*,int ) ;
 int FUNC_12 (int) ;

bool FUNC_13(struct f2fs_sb_info *VAR_1,
     block_t VAR_2, int VAR_3)
{
 switch (VAR_3) {
 case 131:
  break;
 case 129:
  if (FUNC_12(VAR_2 >= FUNC_4(VAR_1)))
   return 0;
  break;
 case 128:
  if (FUNC_12(VAR_2 >= FUNC_1(VAR_1) ||
   VAR_2 < FUNC_6(VAR_1)->ssa_blkaddr))
   return 0;
  break;
 case 133:
  if (FUNC_12(VAR_2 >= FUNC_5(VAR_1)->sit_base_addr ||
   VAR_2 < FUNC_9(VAR_1)))
   return 0;
  break;
 case 130:
  if (FUNC_12(VAR_2 >= FUNC_2(VAR_1) ||
   VAR_2 < FUNC_1(VAR_1)))
   return 0;
  break;
 case 136:
 case 135:
 case 134:
  if (FUNC_12(VAR_2 >= FUNC_2(VAR_1) ||
    VAR_2 < FUNC_1(VAR_1))) {
   FUNC_10(VAR_1, "access invalid blkaddr:%u",
      VAR_2);
   FUNC_11(VAR_1, VAR_0);
   FUNC_7(1);
   return 0;
  } else {
   return FUNC_8(VAR_1, VAR_2, VAR_3);
  }
  break;
 case 132:
  if (FUNC_12(VAR_2 < FUNC_3(VAR_1) ||
   VAR_2 >= FUNC_1(VAR_1)))
   return 0;
  break;
 default:
  FUNC_0();
 }

 return 1;
}
