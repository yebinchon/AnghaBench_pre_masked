
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct item_head {int dummy; } ;
struct buffer_head {int dummy; } ;


 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct buffer_head*,struct item_head*) ;
 struct item_head* FUNC_3 (struct buffer_head*,int ) ;
 int FUNC_4 (struct item_head*,int ) ;

void FUNC_5(struct buffer_head *VAR_0)
{
 int VAR_1;
 struct item_head *VAR_2;

 if (!VAR_0)
  return;
 FUNC_1(VAR_0);
 for (VAR_1 = 0, VAR_2 = FUNC_3(VAR_0, 0); VAR_1 < FUNC_0(VAR_0); VAR_1++, VAR_2++)
  FUNC_4(VAR_2, FUNC_2(VAR_0, VAR_2));
}
