
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ltc294x_info {int charge; int supply; } ;


 int VAR_0 ;
 int FUNC_0 (struct ltc294x_info*,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct ltc294x_info *VAR_1)
{
 int VAR_2 = FUNC_0(VAR_1, VAR_0);

 if (VAR_2 != VAR_1->charge) {
  VAR_1->charge = VAR_2;
  FUNC_1(VAR_1->supply);
 }
}
