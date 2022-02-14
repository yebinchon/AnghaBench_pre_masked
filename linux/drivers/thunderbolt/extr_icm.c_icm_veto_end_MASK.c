
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tb {int dev; } ;
struct icm {int veto; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct icm* FUNC_2 (struct tb*) ;

__attribute__((used)) static void FUNC_3(struct tb *VAR_0)
{
 struct icm *VAR_1 = FUNC_2(VAR_0);

 if (VAR_1->veto) {
  VAR_1->veto = 0;

  FUNC_0(&VAR_0->dev);
  FUNC_1(&VAR_0->dev);
 }
}
