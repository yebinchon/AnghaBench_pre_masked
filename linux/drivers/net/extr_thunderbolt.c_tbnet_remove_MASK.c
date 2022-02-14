
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tbnet {int dev; int handler; } ;
struct tb_service {int dummy; } ;


 int FUNC_0 (int ) ;
 struct tbnet* FUNC_1 (struct tb_service*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct tb_service *VAR_0)
{
 struct tbnet *VAR_1 = FUNC_1(VAR_0);

 FUNC_3(VAR_1->dev);
 FUNC_2(&VAR_1->handler);
 FUNC_0(VAR_1->dev);
}
