
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct super_block {int dummy; } ;
struct hfsplus_extent {scalar_t__ block_count; scalar_t__ start_block; } ;
struct TYPE_4__ {TYPE_1__* ext_tree; } ;
struct TYPE_3__ {int tree_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_5 (struct super_block*,scalar_t__,scalar_t__) ;
 int FUNC_6 (struct hfsplus_extent*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static int FUNC_9(struct super_block *VAR_2,
    struct hfsplus_extent *VAR_3,
    u32 VAR_4, u32 VAR_5)
{
 u32 VAR_6, VAR_7;
 int VAR_8;
 int VAR_9 = 0;


 FUNC_1(FUNC_7(&FUNC_0(VAR_2)->ext_tree->tree_lock));

 FUNC_6(VAR_3);
 for (VAR_8 = 0; VAR_8 < 8; VAR_3++, VAR_8++) {
  VAR_6 = FUNC_2(VAR_3->block_count);
  if (VAR_4 == VAR_6)
   goto found;
  else if (VAR_4 < VAR_6)
   break;
  VAR_4 -= VAR_6;
 }

 return -VAR_0;
found:
 for (;;) {
  VAR_7 = FUNC_2(VAR_3->start_block);
  if (VAR_6 <= VAR_5) {
   VAR_9 = FUNC_5(VAR_2, VAR_7, VAR_6);
   if (VAR_9) {
    FUNC_8("can't free extent\n");
    FUNC_4(VAR_1, " start: %u count: %u\n",
     VAR_7, VAR_6);
   }
   VAR_3->block_count = 0;
   VAR_3->start_block = 0;
   VAR_5 -= VAR_6;
  } else {
   VAR_6 -= VAR_5;
   VAR_9 = FUNC_5(VAR_2, VAR_7 + VAR_6, VAR_5);
   if (VAR_9) {
    FUNC_8("can't free extent\n");
    FUNC_4(VAR_1, " start: %u count: %u\n",
     VAR_7, VAR_6);
   }
   VAR_3->block_count = FUNC_3(VAR_6);
   VAR_5 = 0;
  }
  if (!VAR_5 || !VAR_8) {




   return VAR_9;
  }
  VAR_8--;
  VAR_3--;
  VAR_6 = FUNC_2(VAR_3->block_count);
 }
}
