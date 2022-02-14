
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct htc_target {int dummy; } ;
struct htc_packet {int list; } ;
struct htc_endpoint {int dummy; } ;


 int FUNC_0 (struct list_head*) ;
 int FUNC_1 (struct htc_endpoint*,struct list_head*) ;
 int FUNC_2 (int *,struct list_head*) ;

__attribute__((used)) static void FUNC_3(struct htc_target *VAR_0,
       struct htc_endpoint *VAR_1,
       struct htc_packet *VAR_2)
{
 struct list_head VAR_3;
 FUNC_0(&VAR_3);
 FUNC_2(&VAR_2->list, &VAR_3);


 FUNC_1(VAR_1, &VAR_3);
}
