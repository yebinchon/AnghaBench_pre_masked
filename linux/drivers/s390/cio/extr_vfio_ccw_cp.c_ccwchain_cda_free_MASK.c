
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct ccwchain {struct ccw1* ch_ccw; } ;
struct ccw1 {scalar_t__ cda; } ;


 scalar_t__ FUNC_0 (struct ccw1*) ;
 int FUNC_1 (void*) ;

__attribute__((used)) static void FUNC_2(struct ccwchain *VAR_0, int VAR_1)
{
 struct ccw1 *VAR_2 = VAR_0->ch_ccw + VAR_1;

 if (FUNC_0(VAR_2))
  return;

 FUNC_1((void *)(u64)VAR_2->cda);
}
