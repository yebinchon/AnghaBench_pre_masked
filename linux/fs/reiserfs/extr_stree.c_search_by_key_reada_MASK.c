
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef int b_blocknr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (int ,int ,int,struct buffer_head**) ;
 int FUNC_3 (struct super_block*) ;
 struct buffer_head* FUNC_4 (struct super_block*,int ) ;

__attribute__((used)) static int FUNC_5(struct super_block *VAR_2,
    struct buffer_head **VAR_3,
    b_blocknr_t *VAR_4, int VAR_5)
{
 int VAR_6, VAR_7;
 int VAR_8 = -1;

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  VAR_3[VAR_6] = FUNC_4(VAR_2, VAR_4[VAR_6]);
 }







 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {





  if (!FUNC_1(VAR_3[VAR_7])) {
   if (VAR_8 == -1)
    VAR_8 = FUNC_3(VAR_2);
   FUNC_2(VAR_0, VAR_1, 1, VAR_3 + VAR_7);
  }
  FUNC_0(VAR_3[VAR_7]);
 }
 return VAR_8;
}
