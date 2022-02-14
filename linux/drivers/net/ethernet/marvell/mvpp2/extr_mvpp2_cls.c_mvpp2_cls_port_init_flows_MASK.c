
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvpp2_cls_flow {int dummy; } ;
struct mvpp2 {int dummy; } ;


 int VAR_0 ;
 struct mvpp2_cls_flow* FUNC_0 (int) ;
 int FUNC_1 (struct mvpp2*,struct mvpp2_cls_flow const*) ;
 int FUNC_2 (struct mvpp2*,struct mvpp2_cls_flow const*) ;
 int FUNC_3 (struct mvpp2*,struct mvpp2_cls_flow const*) ;

__attribute__((used)) static void FUNC_4(struct mvpp2 *VAR_1)
{
 const struct mvpp2_cls_flow *VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_2 = FUNC_0(VAR_3);
  if (!VAR_2)
   break;

  FUNC_3(VAR_1, VAR_2);
  FUNC_2(VAR_1, VAR_2);
  FUNC_1(VAR_1, VAR_2);
 }
}
