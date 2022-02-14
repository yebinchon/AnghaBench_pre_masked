
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int irq_handler_t ;


 unsigned long VAR_0 ;
 int FUNC_0 (unsigned int,unsigned int,unsigned long) ;
 int FUNC_1 (int,int ,unsigned long,char const*,void*) ;
 int FUNC_2 (int) ;

int FUNC_3(unsigned int VAR_1, unsigned int VAR_2,
       irq_handler_t VAR_3,
       unsigned long VAR_4, const char *VAR_5, void *VAR_6)
{
 int VAR_7, VAR_8;

 VAR_7 = FUNC_0(VAR_1, VAR_2, VAR_4 & VAR_0);
 if (VAR_7 < 0)
  return VAR_7;
 VAR_8 = FUNC_1(VAR_7, VAR_3, VAR_4, VAR_5, VAR_6);
 if (VAR_8 != 0) {
  FUNC_2(VAR_7);
  return VAR_8;
 }

 return VAR_7;
}
