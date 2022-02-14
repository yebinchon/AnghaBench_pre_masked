
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_gpct_device {struct ni_gpct* counters; } ;
struct ni_gpct {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int) ;
 unsigned int FUNC_2 (int) ;
 unsigned int FUNC_3 (int) ;
 unsigned int VAR_2 ;
 int FUNC_4 (struct ni_gpct*,int,unsigned int*) ;
 int FUNC_5 (struct ni_gpct*,unsigned int,unsigned int*) ;

int FUNC_6(struct ni_gpct_device *VAR_3, unsigned int VAR_4)
{

 int VAR_5 = (VAR_4 - VAR_1) % VAR_2;
 struct ni_gpct *VAR_6 = &VAR_3->counters[VAR_5];
 int VAR_7 = 1;
 unsigned int VAR_8;

 if (VAR_4 >= FUNC_0(0) && VAR_4 <= FUNC_3(-1)) {
  VAR_7 = FUNC_5(VAR_6, VAR_4, &VAR_8);
 } else if (VAR_4 >= FUNC_2(0) && VAR_4 <= FUNC_2(-1)) {
  VAR_7 = FUNC_4(VAR_6, 0, &VAR_8);
 } else if (VAR_4 >= FUNC_1(0) && VAR_4 <= FUNC_1(-1)) {
  VAR_7 = FUNC_4(VAR_6, 1, &VAR_8);






 }

 if (VAR_7)
  return -VAR_0;

 return VAR_8;
}
