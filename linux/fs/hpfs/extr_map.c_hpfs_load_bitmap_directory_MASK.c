
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef scalar_t__ secno ;
typedef int __le32 ;
struct TYPE_2__ {int sb_fs_size; } ;


 int VAR_0 ;
 int FUNC_0 (struct buffer_head*) ;
 int * FUNC_1 (struct super_block*,scalar_t__,struct buffer_head**,int) ;
 TYPE_1__* FUNC_2 (struct super_block*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int,int,int ) ;
 int FUNC_5 (char*,int *,int) ;
 int FUNC_6 (char*) ;

__le32 *FUNC_7(struct super_block *VAR_1, secno VAR_2)
{
 struct buffer_head *VAR_3;
 int VAR_4 = (FUNC_2(VAR_1)->sb_fs_size + 0x200000 - 1) >> 21;
 int VAR_5;
 __le32 *VAR_6;
 if (!(VAR_6 = FUNC_4(VAR_4, 512, VAR_0))) {
  FUNC_6("can't allocate memory for bitmap directory\n");
  return ((void*)0);
 }
 for (VAR_5=0;VAR_5<VAR_4;VAR_5++) {
  __le32 *VAR_7 = FUNC_1(VAR_1, VAR_2+VAR_5, &VAR_3, VAR_4 - VAR_5 - 1);
  if (!VAR_7) {
   FUNC_3(VAR_6);
   return ((void*)0);
  }
  FUNC_5((char *)VAR_6 + 512 * VAR_5, VAR_7, 512);
  FUNC_0(VAR_3);
 }
 return VAR_6;
}
