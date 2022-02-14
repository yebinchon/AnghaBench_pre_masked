
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct channel_program {int dummy; } ;
struct ccwchain {int ch_len; struct ccw1* ch_ccw; } ;
struct ccw1 {int cda; } ;


 int FUNC_0 (struct ccw1*) ;
 int FUNC_1 (int ,struct channel_program*) ;
 scalar_t__ FUNC_2 (struct ccw1*,struct channel_program*) ;

__attribute__((used)) static int FUNC_3(struct ccwchain *VAR_0, struct channel_program *VAR_1)
{
 struct ccw1 *VAR_2;
 int VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_0->ch_len; VAR_3++) {
  VAR_2 = VAR_0->ch_ccw + VAR_3;

  if (!FUNC_0(VAR_2))
   continue;


  if (FUNC_2(VAR_2, VAR_1))
   continue;


  VAR_4 = FUNC_1(VAR_2->cda, VAR_1);
  if (VAR_4)
   return VAR_4;
 }

 return 0;
}
