
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phylink {unsigned long phylink_disable_state; int resolve; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int,unsigned long*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(struct phylink *VAR_1, int VAR_2)
{
 unsigned long VAR_3 = VAR_1->phylink_disable_state;

 FUNC_2(VAR_2, &VAR_1->phylink_disable_state);
 if (VAR_3 == 0) {
  FUNC_1(VAR_0, &VAR_1->resolve);
  FUNC_0(&VAR_1->resolve);
 }
}
