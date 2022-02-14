
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adv7180_state {unsigned int input; } ;


 int VAR_0 ;
 int FUNC_0 (struct adv7180_state*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct adv7180_state *VAR_1, unsigned int VAR_2)
{
 return FUNC_0(VAR_1, VAR_0,
  (VAR_2 << 4) | VAR_1->input);
}
