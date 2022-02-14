
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt1_table {int dummy; } ;
struct pt1 {struct pt1_table* tables; } ;


 int FUNC_0 (struct pt1*,struct pt1_table*) ;
 int VAR_0 ;
 int FUNC_1 (struct pt1*) ;
 int FUNC_2 (struct pt1_table*) ;

__attribute__((used)) static void FUNC_3(struct pt1 *VAR_1)
{
 struct pt1_table *VAR_2;
 int VAR_3;

 VAR_2 = VAR_1->tables;
 FUNC_1(VAR_1);

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_0(VAR_1, &VAR_2[VAR_3]);

 FUNC_2(VAR_2);
}
