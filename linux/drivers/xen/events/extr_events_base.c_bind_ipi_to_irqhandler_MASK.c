
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int irq_handler_t ;
typedef enum ipi_vector { ____Placeholder_ipi_vector } ipi_vector ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (int,unsigned int) ;
 int FUNC_1 (int,int ,unsigned long,char const*,void*) ;
 int FUNC_2 (int) ;

int FUNC_3(enum ipi_vector VAR_3,
      unsigned int VAR_4,
      irq_handler_t VAR_5,
      unsigned long VAR_6,
      const char *VAR_7,
      void *VAR_8)
{
 int VAR_9, VAR_10;

 VAR_9 = FUNC_0(VAR_3, VAR_4);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_6 |= VAR_2 | VAR_1 | VAR_0;
 VAR_10 = FUNC_1(VAR_9, VAR_5, VAR_6, VAR_7, VAR_8);
 if (VAR_10 != 0) {
  FUNC_2(VAR_9);
  return VAR_10;
 }

 return VAR_9;
}
