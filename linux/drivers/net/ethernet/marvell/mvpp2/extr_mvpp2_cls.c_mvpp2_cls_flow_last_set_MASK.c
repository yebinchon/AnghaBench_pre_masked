
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvpp2_cls_flow_entry {int* data; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct mvpp2_cls_flow_entry *VAR_1,
        bool VAR_2)
{
 VAR_1->data[0] &= ~VAR_0;
 VAR_1->data[0] |= !!VAR_2;
}
