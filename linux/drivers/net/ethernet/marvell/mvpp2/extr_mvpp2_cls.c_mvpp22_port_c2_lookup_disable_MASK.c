
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvpp2_port {int priv; int id; } ;
struct mvpp2_cls_c2_entry {int * tcam; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int,struct mvpp2_cls_c2_entry*) ;
 int FUNC_3 (int ,struct mvpp2_cls_c2_entry*) ;

__attribute__((used)) static void FUNC_4(struct mvpp2_port *VAR_0, int VAR_1)
{
 struct mvpp2_cls_c2_entry VAR_2;

 FUNC_2(VAR_0->priv, VAR_1, &VAR_2);


 VAR_2[4] &= ~(FUNC_1(FUNC_0(VAR_0->id)));

 FUNC_3(VAR_0->priv, &VAR_2);
}
