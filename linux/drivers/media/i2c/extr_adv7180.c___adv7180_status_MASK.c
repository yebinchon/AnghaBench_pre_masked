
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
typedef int u32 ;
struct adv7180_state {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct adv7180_state*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct adv7180_state *VAR_1, u32 *VAR_2,
       v4l2_std_id *VAR_3)
{
 int VAR_4 = FUNC_0(VAR_1, VAR_0);

 if (VAR_4 < 0)
  return VAR_4;

 if (VAR_2)
  *VAR_2 = FUNC_1(VAR_4);
 if (VAR_3)
  *VAR_3 = FUNC_2(VAR_4);

 return 0;
}
