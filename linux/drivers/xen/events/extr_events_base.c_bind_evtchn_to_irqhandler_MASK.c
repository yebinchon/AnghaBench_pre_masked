
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int irq_handler_t ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int,int ,unsigned long,char const*,void*) ;
 int FUNC_2 (int) ;

int FUNC_3(unsigned int VAR_0,
         irq_handler_t VAR_1,
         unsigned long VAR_2,
         const char *VAR_3, void *VAR_4)
{
 int VAR_5, VAR_6;

 VAR_5 = FUNC_0(VAR_0);
 if (VAR_5 < 0)
  return VAR_5;
 VAR_6 = FUNC_1(VAR_5, VAR_1, VAR_2, VAR_3, VAR_4);
 if (VAR_6 != 0) {
  FUNC_2(VAR_5);
  return VAR_6;
 }

 return VAR_5;
}
