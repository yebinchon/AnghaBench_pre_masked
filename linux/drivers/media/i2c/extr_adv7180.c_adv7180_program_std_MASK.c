
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adv7180_state {int curr_norm; } ;


 int FUNC_0 (struct adv7180_state*,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct adv7180_state *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(VAR_0->curr_norm);
 if (VAR_1 < 0)
  return VAR_1;

 VAR_1 = FUNC_0(VAR_0, VAR_1);
 if (VAR_1 < 0)
  return VAR_1;
 return 0;
}
