
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ sysv_zone_t ;
struct super_block {int dummy; } ;
struct inode {struct super_block* i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct buffer_head*) ;
 scalar_t__* FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (struct inode*,scalar_t__*,scalar_t__*) ;
 int FUNC_5 (struct inode*) ;
 struct buffer_head* FUNC_6 (struct super_block*,int) ;
 int FUNC_7 (struct super_block*,scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct inode *VAR_0, sysv_zone_t *VAR_1, sysv_zone_t *VAR_2, int VAR_3)
{
 struct buffer_head * VAR_4;
 struct super_block *VAR_5 = VAR_0->i_sb;

 if (VAR_3--) {
  for ( ; VAR_1 < VAR_2 ; VAR_1++) {
   int VAR_6;
   sysv_zone_t VAR_7 = *VAR_1;
   if (!VAR_7)
    continue;
   *VAR_1 = 0;
   VAR_6 = FUNC_3(FUNC_0(VAR_5), VAR_7);
   VAR_4 = FUNC_6(VAR_5, VAR_6);
   if (!VAR_4)
    continue;
   FUNC_8(VAR_0, (sysv_zone_t*)VAR_4->b_data,
     FUNC_2(VAR_4), VAR_3);
   FUNC_1(VAR_4);
   FUNC_7(VAR_5, VAR_7);
   FUNC_5(VAR_0);
  }
 } else
  FUNC_4(VAR_0, VAR_1, VAR_2);
}
