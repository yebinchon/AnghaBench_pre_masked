
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct htc_endpoint {int target; int eid; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (int ,struct list_head*) ;
 int FUNC_2 (struct list_head*) ;
 scalar_t__ FUNC_3 (struct list_head*) ;

__attribute__((used)) static void FUNC_4(struct htc_endpoint *VAR_1,
       struct list_head *VAR_2)
{
 if (FUNC_3(VAR_2))
  return;

 FUNC_0(VAR_0,
     "htc tx complete ep %d pkts %d\n",
     VAR_1->eid, FUNC_2(VAR_2));

 FUNC_1(VAR_1->target, VAR_2);
}
