
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef int handle_t ;
typedef unsigned long ext4_group_t ;
typedef scalar_t__ ext4_fsblk_t ;
struct TYPE_2__ {int s_gdb_count; struct buffer_head** s_group_desc; } ;


 int FUNC_0 (struct buffer_head*,char*) ;
 int VAR_0 ;
 unsigned long FUNC_1 (struct super_block*) ;
 TYPE_1__* FUNC_2 (struct super_block*) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct buffer_head*) ;
 scalar_t__ FUNC_6 (struct super_block*,unsigned long) ;
 int FUNC_7 (int *,struct buffer_head*) ;
 struct buffer_head** FUNC_8 (unsigned long,int ) ;
 scalar_t__ FUNC_9 (struct super_block*,unsigned long) ;
 struct buffer_head* FUNC_10 (struct super_block*,scalar_t__,int ) ;
 int FUNC_11 (struct super_block*,char*,unsigned long) ;
 int FUNC_12 (struct buffer_head**) ;
 int FUNC_13 (struct buffer_head**,struct buffer_head**,int) ;

__attribute__((used)) static int FUNC_14(struct super_block *VAR_2,
          handle_t *VAR_3, ext4_group_t VAR_4) {
 ext4_fsblk_t VAR_5;
 struct buffer_head *VAR_6;
 struct buffer_head **VAR_7, **VAR_8;
 unsigned long VAR_9 = VAR_4 / FUNC_1(VAR_2);
 int VAR_10;

 VAR_5 = FUNC_9(VAR_2, VAR_4) +
     FUNC_6(VAR_2, VAR_4);
 VAR_6 = FUNC_10(VAR_2, VAR_5, 0);
 if (FUNC_3(VAR_6))
  return FUNC_4(VAR_6);
 VAR_8 = FUNC_8((VAR_9 + 1) *
         sizeof(struct buffer_head *),
         VAR_1);
 if (!VAR_8) {
  FUNC_5(VAR_6);
  VAR_10 = -VAR_0;
  FUNC_11(VAR_2, "not enough memory for %lu groups",
        VAR_9 + 1);
  return VAR_10;
 }

 VAR_7 = FUNC_2(VAR_2)->s_group_desc;
 FUNC_13(VAR_8, VAR_7,
        FUNC_2(VAR_2)->s_gdb_count * sizeof(struct buffer_head *));
 VAR_8[VAR_9] = VAR_6;

 FUNC_0(VAR_6, "get_write_access");
 VAR_10 = FUNC_7(VAR_3, VAR_6);
 if (VAR_10) {
  FUNC_12(VAR_8);
  FUNC_5(VAR_6);
  return VAR_10;
 }

 FUNC_2(VAR_2)->s_group_desc = VAR_8;
 FUNC_2(VAR_2)->s_gdb_count++;
 FUNC_12(VAR_7);
 return VAR_10;
}
