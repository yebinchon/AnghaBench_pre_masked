
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct journal_head {int b_triggers; int b_frozen_triggers; int b_frozen_data; } ;
struct buffer_head {int b_size; int b_data; struct page* b_page; } ;


 int FUNC_0 (struct journal_head*,int ,char*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct journal_head*,char*,int ) ;
 struct buffer_head* FUNC_3 (struct journal_head*) ;
 char* FUNC_4 (struct page*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct journal_head *VAR_0)
{
 struct page *VAR_1;
 int VAR_2;
 char *VAR_3;
 struct buffer_head *VAR_4 = FUNC_3(VAR_0);

 FUNC_0(VAR_0, FUNC_1(VAR_4), "Possible IO failure.\n");
 VAR_1 = VAR_4->b_page;
 VAR_2 = FUNC_7(VAR_4->b_data);
 VAR_3 = FUNC_4(VAR_1);

 FUNC_2(VAR_0, VAR_3 + VAR_2, VAR_0->b_triggers);
 FUNC_6(VAR_0->b_frozen_data, VAR_3 + VAR_2, VAR_4->b_size);
 FUNC_5(VAR_3);





 VAR_0->b_frozen_triggers = VAR_0->b_triggers;
}
