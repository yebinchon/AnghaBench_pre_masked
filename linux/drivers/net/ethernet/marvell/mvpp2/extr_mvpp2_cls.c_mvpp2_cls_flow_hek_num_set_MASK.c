
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvpp2_cls_flow_entry {int * data; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct mvpp2_cls_flow_entry *VAR_1,
           int VAR_2)
{
 VAR_1->data[1] &= ~VAR_0;
 VAR_1->data[1] |= FUNC_0(VAR_2);
}
