
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvpp2_cls_flow_entry {int index; void** data; } ;
struct mvpp2 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (struct mvpp2*,int ) ;
 int FUNC_1 (struct mvpp2*,int ,int) ;

void FUNC_2(struct mvpp2 *VAR_4, int VAR_5,
    struct mvpp2_cls_flow_entry *VAR_6)
{
 VAR_6->index = VAR_5;
 FUNC_1(VAR_4, VAR_0, VAR_5);
 VAR_6->data[0] = FUNC_0(VAR_4, VAR_1);
 VAR_6->data[1] = FUNC_0(VAR_4, VAR_2);
 VAR_6->data[2] = FUNC_0(VAR_4, VAR_3);
}
