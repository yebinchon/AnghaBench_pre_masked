
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ni_gpct {TYPE_1__* counter_dev; } ;
struct TYPE_2__ {int variant; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,unsigned int*) ;
 int FUNC_1 (unsigned int,unsigned int*) ;



 int FUNC_2 (unsigned int,unsigned int*) ;
 int FUNC_3 (unsigned int,unsigned int*) ;
 unsigned int FUNC_4 (struct ni_gpct*) ;
 unsigned int FUNC_5 (struct ni_gpct*) ;
 unsigned int FUNC_6 (struct ni_gpct*) ;
 unsigned int FUNC_7 (struct ni_gpct*) ;

__attribute__((used)) static int FUNC_8(struct ni_gpct *VAR_1, unsigned int VAR_2,
          unsigned int *VAR_3)
{
 unsigned int VAR_4;
 int VAR_5;

 switch (VAR_2) {
 case 0:
  VAR_4 = FUNC_7(VAR_1);
  switch (VAR_1->counter_dev->variant) {
  case 129:
  case 128:
  default:
   VAR_5 = FUNC_3(VAR_4, VAR_3);
   break;
  case 130:
   VAR_5 = FUNC_1(VAR_4, VAR_3);
   break;
  }
  if (VAR_5)
   return VAR_5;
  *VAR_3 |= FUNC_6(VAR_1);
  break;
 case 1:
  VAR_4 = FUNC_5(VAR_1);
  switch (VAR_1->counter_dev->variant) {
  case 129:
  case 128:
  default:
   VAR_5 = FUNC_2(VAR_4, VAR_3);
   break;
  case 130:
   VAR_5 = FUNC_0(VAR_4, VAR_3);
   break;
  }
  if (VAR_5)
   return VAR_5;
  *VAR_3 |= FUNC_4(VAR_1);
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
