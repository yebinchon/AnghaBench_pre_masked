
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct channel_program {int dummy; } ;
struct ccwchain {struct ccw1* ch_ccw; } ;
struct ccw1 {int dummy; } ;


 scalar_t__ FUNC_0 (struct ccw1*) ;
 int FUNC_1 (struct ccwchain*,int,struct channel_program*) ;
 int FUNC_2 (struct ccwchain*,int,struct channel_program*) ;

__attribute__((used)) static int FUNC_3(struct ccwchain *VAR_0,
         int VAR_1,
         struct channel_program *VAR_2)
{
 struct ccw1 *VAR_3 = VAR_0->ch_ccw + VAR_1;

 if (FUNC_0(VAR_3))
  return FUNC_2(VAR_0, VAR_1, VAR_2);

 return FUNC_1(VAR_0, VAR_1, VAR_2);
}
