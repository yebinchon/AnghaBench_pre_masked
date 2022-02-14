
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ispstat {scalar_t__ state; int buf_err; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (struct ispstat*) ;
 int FUNC_2 (struct ispstat*) ;

__attribute__((used)) static int FUNC_3(struct ispstat *VAR_3, int VAR_4)
{
 int VAR_5 = VAR_2;

 if (!FUNC_0(&VAR_3->buf_err, -1, 0) &&
     VAR_4 == VAR_1 && VAR_3->state == VAR_0) {
  VAR_5 = FUNC_2(VAR_3);
  FUNC_1(VAR_3);
 }

 return VAR_5;
}
