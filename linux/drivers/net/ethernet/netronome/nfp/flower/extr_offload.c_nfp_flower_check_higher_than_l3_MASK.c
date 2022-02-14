
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flow_rule {int dummy; } ;
struct flow_cls_offload {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct flow_rule* FUNC_0 (struct flow_cls_offload*) ;
 scalar_t__ FUNC_1 (struct flow_rule*,int ) ;

__attribute__((used)) static bool FUNC_2(struct flow_cls_offload *VAR_2)
{
 struct flow_rule *VAR_3 = FUNC_0(VAR_2);

 return FUNC_1(VAR_3, VAR_1) ||
        FUNC_1(VAR_3, VAR_0);
}
