
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct htc_target {struct htc_endpoint* endpoint; } ;
struct htc_packet {size_t endpoint; int list; } ;
struct htc_endpoint {int dummy; } ;


 int FUNC_0 (struct list_head*) ;
 int FUNC_1 (struct htc_endpoint*,struct list_head*) ;
 int FUNC_2 (int *,struct list_head*) ;
 int FUNC_3 (struct htc_packet*) ;

__attribute__((used)) static void FUNC_4(struct htc_target *VAR_0,
       struct htc_packet *VAR_1)
{
 struct htc_endpoint *VAR_2 = &VAR_0->endpoint[VAR_1->endpoint];
 struct list_head VAR_3;

 FUNC_3(VAR_1);
 FUNC_0(&VAR_3);
 FUNC_2(&VAR_1->list, &VAR_3);


 FUNC_1(VAR_2, &VAR_3);
}
