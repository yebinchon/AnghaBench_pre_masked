
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccw1 {scalar_t__ count; } ;


 scalar_t__ FUNC_0 (struct ccw1*) ;
 scalar_t__ FUNC_1 (struct ccw1*) ;
 scalar_t__ FUNC_2 (struct ccw1*) ;
 scalar_t__ FUNC_3 (struct ccw1*) ;
 int FUNC_4 (struct ccw1*) ;

__attribute__((used)) static inline int FUNC_5(struct ccw1 *VAR_0)
{

 if (VAR_0->count == 0)
  return 0;


 if (FUNC_0(VAR_0))
  return 0;


 if (!FUNC_4(VAR_0))
  return 1;






 if (FUNC_1(VAR_0) || FUNC_2(VAR_0))
  return 0;

 if (FUNC_3(VAR_0))
  return 0;


 return 1;
}
