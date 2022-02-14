
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_subdev {int dummy; } ;
struct adv7842_state {int i2c_cp; } ;


 int FUNC_0 (int ,int ) ;
 struct adv7842_state* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static inline int FUNC_2(struct v4l2_subdev *VAR_0, u8 VAR_1)
{
 struct adv7842_state *VAR_2 = FUNC_1(VAR_0);

 return FUNC_0(VAR_2->i2c_cp, VAR_1);
}
