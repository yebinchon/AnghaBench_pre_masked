
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct quad_buffer_head {int dummy; } ;
typedef int secno ;
typedef int __le32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct quad_buffer_head*) ;
 int FUNC_2 (struct super_block*,int) ;
 int * FUNC_3 (struct super_block*,int,struct quad_buffer_head*,char*) ;
 int FUNC_4 (struct quad_buffer_head*) ;
 int FUNC_5 (int ) ;

int FUNC_6(struct super_block *VAR_0, secno VAR_1)
{
 struct quad_buffer_head VAR_2;
 __le32 *VAR_3;
 if (!(VAR_3 = FUNC_3(VAR_0, VAR_1 >> 14, &VAR_2, "aip"))) goto end;
 if (FUNC_5(VAR_3[(VAR_1 & 0x3fff) >> 5]) & (1 << (VAR_1 & 0x1f))) {
  VAR_3[(VAR_1 & 0x3fff) >> 5] &= FUNC_0(~(1 << (VAR_1 & 0x1f)));
  FUNC_4(&VAR_2);
  FUNC_1(&VAR_2);
  FUNC_2(VAR_0, VAR_1);
  return 1;
 }
 FUNC_1(&VAR_2);
 end:
 return 0;
}
