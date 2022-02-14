
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pt1_table {TYPE_1__* page; } ;
struct pt1 {struct pt1_table* tables; } ;
struct TYPE_2__ {void* next_pfn; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct pt1*,struct pt1_table*) ;
 int FUNC_3 (struct pt1*,struct pt1_table*,int *) ;
 int FUNC_4 (struct pt1*) ;
 int VAR_1 ;
 int FUNC_5 (struct pt1*,int ) ;
 int FUNC_6 (struct pt1_table*) ;
 struct pt1_table* FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct pt1 *VAR_2)
{
 struct pt1_table *VAR_3;
 int VAR_4, VAR_5;
 u32 VAR_6, VAR_7;

 if (!VAR_1)
  return 0;

 VAR_3 = FUNC_7(FUNC_0(VAR_1, sizeof(struct pt1_table)));
 if (VAR_3 == ((void*)0))
  return -VAR_0;

 FUNC_4(VAR_2);

 VAR_4 = 0;
 VAR_5 = FUNC_3(VAR_2, &VAR_3[0], &VAR_6);
 if (VAR_5)
  goto err;
 VAR_4++;

 while (VAR_4 < VAR_1) {
  VAR_5 = FUNC_3(VAR_2, &VAR_3[VAR_4], &VAR_7);
  if (VAR_5)
   goto err;
  VAR_3[VAR_4 - 1].page->next_pfn = FUNC_1(VAR_7);
  VAR_4++;
 }

 VAR_3[VAR_1 - 1].page->next_pfn = FUNC_1(VAR_6);

 FUNC_5(VAR_2, VAR_6);
 VAR_2->tables = VAR_3;
 return 0;

err:
 while (VAR_4--)
  FUNC_2(VAR_2, &VAR_3[VAR_4]);

 FUNC_6(VAR_3);
 return VAR_5;
}
