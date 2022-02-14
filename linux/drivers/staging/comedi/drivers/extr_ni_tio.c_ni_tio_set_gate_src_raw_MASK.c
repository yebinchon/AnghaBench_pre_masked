
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_gpct_device {int dummy; } ;
struct ni_gpct {struct ni_gpct_device* counter_dev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct ni_gpct_device*) ;
 int FUNC_1 (struct ni_gpct*,unsigned int) ;
 int FUNC_2 (struct ni_gpct*,unsigned int) ;
 int FUNC_3 (struct ni_gpct*,unsigned int) ;
 int FUNC_4 (struct ni_gpct*,unsigned int) ;

int FUNC_5(struct ni_gpct *VAR_2,
       unsigned int VAR_3, unsigned int VAR_4)
{
 struct ni_gpct_device *VAR_5 = VAR_2->counter_dev;

 switch (VAR_3) {
 case 0:

  FUNC_3(VAR_2, VAR_1);

  FUNC_4(VAR_2, VAR_4);

  FUNC_3(VAR_2, VAR_4);
  break;
 case 1:
  if (!FUNC_0(VAR_5))
   return -VAR_0;


  FUNC_1(VAR_2, VAR_1);

  FUNC_2(VAR_2, VAR_4);

  FUNC_1(VAR_2, VAR_4);
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
