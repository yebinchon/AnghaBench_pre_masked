
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adv7180_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct adv7180_state*,int ) ;
 int FUNC_1 (struct adv7180_state*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct adv7180_state *VAR_2, unsigned int VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_1);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 &= ~VAR_0;
 VAR_4 |= VAR_3;
 return FUNC_1(VAR_2, VAR_1, VAR_4);
}
