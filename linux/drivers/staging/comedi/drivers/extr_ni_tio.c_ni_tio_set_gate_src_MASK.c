
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_gpct_device {int variant; } ;
struct ni_gpct {struct ni_gpct_device* counter_dev; } ;


 unsigned int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (struct ni_gpct*,int) ;
 int FUNC_2 (struct ni_gpct*,int) ;



 int FUNC_3 (struct ni_gpct*,int) ;
 int FUNC_4 (struct ni_gpct*,int) ;
 int FUNC_5 (struct ni_gpct_device*) ;
 int FUNC_6 (struct ni_gpct*,unsigned int) ;
 int FUNC_7 (struct ni_gpct*,unsigned int) ;

int FUNC_8(struct ni_gpct *VAR_2,
   unsigned int VAR_3, unsigned int VAR_4)
{
 struct ni_gpct_device *VAR_5 = VAR_2->counter_dev;





 int VAR_6 = FUNC_0(VAR_4) & (~VAR_1);
 int VAR_7;

 switch (VAR_3) {
 case 0:

  FUNC_7(VAR_2, VAR_1);

  switch (VAR_5->variant) {
  case 129:
  case 128:
   VAR_7 = FUNC_3(VAR_2, VAR_6);
   break;
  case 130:
   VAR_7 = FUNC_1(VAR_2, VAR_6);
   break;
  default:
   return -VAR_0;
  }
  if (VAR_7)
   return VAR_7;

  FUNC_7(VAR_2, VAR_4);
  break;
 case 1:
  if (!FUNC_5(VAR_5))
   return -VAR_0;


  FUNC_6(VAR_2, VAR_1);

  switch (VAR_5->variant) {
  case 128:
   VAR_7 = FUNC_4(VAR_2, VAR_6);
   break;
  case 130:
   VAR_7 = FUNC_2(VAR_2, VAR_6);
   break;
  default:
   return -VAR_0;
  }
  if (VAR_7)
   return VAR_7;

  FUNC_6(VAR_2, VAR_4);
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
