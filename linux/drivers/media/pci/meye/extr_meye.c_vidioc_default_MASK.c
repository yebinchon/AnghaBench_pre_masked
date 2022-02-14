
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meye_params {int dummy; } ;
struct file {int dummy; } ;


 long VAR_0 ;






 long FUNC_0 (struct meye_params*) ;
 long FUNC_1 (int*) ;
 long FUNC_2 (struct meye_params*) ;
 long FUNC_3 () ;
 long FUNC_4 (int*) ;
 long FUNC_5 (struct file*,void*,int*) ;

__attribute__((used)) static long FUNC_6(struct file *VAR_1, void *VAR_2, bool VAR_3,
      unsigned int VAR_4, void *VAR_5)
{
 switch (VAR_4) {
 case 133:
  return FUNC_0((struct meye_params *) VAR_5);

 case 128:
  return FUNC_2((struct meye_params *) VAR_5);

 case 132:
  return FUNC_1((int *) VAR_5);

 case 129:
  return FUNC_5(VAR_1, VAR_2, (int *) VAR_5);

 case 131:
  return FUNC_3();

 case 130:
  return FUNC_4((int *) VAR_5);

 default:
  return -VAR_0;
 }

}
