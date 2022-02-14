
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_balance {struct buffer_head** used; struct buffer_head** FEB; int tb_sb; } ;
struct buffer_info {int dummy; } ;
struct buffer_head {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct tree_balance*,struct buffer_info*,struct buffer_head*) ;
 int FUNC_1 (struct buffer_info*) ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (struct buffer_head*) ;

struct buffer_head *FUNC_4(struct tree_balance *VAR_1)
{
 int VAR_2;
 struct buffer_info VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  if (VAR_1->FEB[VAR_2] != ((void*)0))
   break;

 if (VAR_2 == VAR_0)
  FUNC_2(VAR_1->tb_sb, "vs-12300", "FEB list is empty");

 FUNC_0(VAR_1, &VAR_3, VAR_1->FEB[VAR_2]);
 FUNC_1(&VAR_3);
 FUNC_3(VAR_1->FEB[VAR_2]);
 VAR_1->used[VAR_2] = VAR_1->FEB[VAR_2];
 VAR_1->FEB[VAR_2] = ((void*)0);

 return VAR_1->used[VAR_2];
}
