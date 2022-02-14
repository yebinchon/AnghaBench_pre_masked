
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct td {int node; } ;
struct ed {struct td* td_head; int td_list; } ;


 int FUNC_0 (int *,int *) ;

void FUNC_1(struct ed *VAR_0, struct td **VAR_1, int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  struct td *VAR_4 = VAR_1[VAR_3];
  FUNC_0(&VAR_4->node, &VAR_0->td_list);
 }
 if (VAR_0->td_head == ((void*)0))
  VAR_0->td_head = VAR_1[0];
}
