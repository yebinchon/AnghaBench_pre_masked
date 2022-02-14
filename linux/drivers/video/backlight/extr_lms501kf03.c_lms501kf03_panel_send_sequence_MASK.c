
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lms501kf03 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct lms501kf03*,int ,unsigned char const) ;

__attribute__((used)) static int FUNC_1(struct lms501kf03 *VAR_2,
     const unsigned char *VAR_3,
     unsigned int VAR_4)
{
 int VAR_5 = 0, VAR_6 = 0;

 while (VAR_6 < VAR_4) {
  if (VAR_6 == 0)
   VAR_5 = FUNC_0(VAR_2, VAR_0, VAR_3[VAR_6]);
  else
   VAR_5 = FUNC_0(VAR_2, VAR_1, VAR_3[VAR_6]);
  if (VAR_5)
   break;
  VAR_6 += 1;
 }

 return VAR_5;
}
