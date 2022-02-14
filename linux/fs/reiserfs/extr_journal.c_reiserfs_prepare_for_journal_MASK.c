
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct buffer_head {int dummy; } ;
struct TYPE_2__ {int prepare; } ;


 int FUNC_0 (struct super_block*,int ) ;
 scalar_t__ FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct buffer_head*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct buffer_head*) ;
 scalar_t__ FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (struct buffer_head*) ;
 int FUNC_8 (struct buffer_head*) ;

int FUNC_9(struct super_block *VAR_1,
     struct buffer_head *VAR_2, int VAR_3)
{
 FUNC_0(VAR_1, VAR_0.prepare);

 if (!FUNC_7(VAR_2)) {
  if (!VAR_3)
   return 0;
  FUNC_3(VAR_2);
 }
 FUNC_4(VAR_2);
 if (FUNC_6(VAR_2) && FUNC_1(VAR_2)) {
  FUNC_2(VAR_2);
  FUNC_5(VAR_2);
 }
 FUNC_8(VAR_2);
 return 1;
}
