
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvpp2_cls_flow_entry {int * data; int index; } ;
struct mvpp2 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mvpp2*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct mvpp2 *VAR_4,
     struct mvpp2_cls_flow_entry *VAR_5)
{
 FUNC_0(VAR_4, VAR_0, VAR_5->index);
 FUNC_0(VAR_4, VAR_1, VAR_5->data[0]);
 FUNC_0(VAR_4, VAR_2, VAR_5->data[1]);
 FUNC_0(VAR_4, VAR_3, VAR_5->data[2]);
}
