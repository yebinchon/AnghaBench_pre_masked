
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvpp2_cls_lookup_entry {int data; int lkpid; scalar_t__ way; } ;
struct mvpp2_cls_flow {int flow_id; } ;
struct mvpp2 {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct mvpp2*,struct mvpp2_cls_lookup_entry*) ;

__attribute__((used)) static void FUNC_3(struct mvpp2 *VAR_1,
        const struct mvpp2_cls_flow *VAR_2)
{
 struct mvpp2_cls_lookup_entry VAR_3;

 VAR_3.way = 0;
 VAR_3.lkpid = VAR_2->flow_id;


 VAR_3.data = 0;




 VAR_3.data |= FUNC_1(FUNC_0(VAR_2->flow_id));


 VAR_3.data |= VAR_0;

 FUNC_2(VAR_1, &VAR_3);
}
