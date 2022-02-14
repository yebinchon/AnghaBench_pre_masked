
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rx_agg {int page; int urb; int info_list; } ;
struct r8152 {int rx_count; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct rx_agg*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct r8152 *VAR_0, struct rx_agg *VAR_1)
{
 FUNC_2(&VAR_1->info_list);

 FUNC_4(VAR_1->urb);
 FUNC_3(VAR_1->page);
 FUNC_1(VAR_1);

 FUNC_0(&VAR_0->rx_count);
}
