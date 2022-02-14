
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_gpct {int dummy; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct ni_gpct*) ;
 unsigned int FUNC_1 (struct ni_gpct*) ;
 unsigned int FUNC_2 (struct ni_gpct*) ;
 unsigned int FUNC_3 (struct ni_gpct*) ;

__attribute__((used)) static int FUNC_4(struct ni_gpct *VAR_1,
       unsigned int VAR_2,
       unsigned int *VAR_3)
{
 switch (VAR_2) {
 case 0:
  *VAR_3 = FUNC_2(VAR_1)
        | FUNC_3(VAR_1);
  break;
 case 1:
  *VAR_3 = FUNC_0(VAR_1)
        | FUNC_1(VAR_1);
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
