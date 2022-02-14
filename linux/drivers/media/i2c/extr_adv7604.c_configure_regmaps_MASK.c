
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adv76xx_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct adv76xx_state*,int) ;

__attribute__((used)) static int FUNC_1(struct adv76xx_state *VAR_3)
{
 int VAR_4, VAR_5;

 for (VAR_4 = VAR_0 ; VAR_4 < VAR_1; VAR_4++) {
  VAR_5 = FUNC_0(VAR_3, VAR_4);
  if (VAR_5 && (VAR_5 != -VAR_2))
   return VAR_5;
 }
 return 0;
}
