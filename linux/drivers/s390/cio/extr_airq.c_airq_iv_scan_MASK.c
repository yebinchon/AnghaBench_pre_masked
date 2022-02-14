
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct airq_iv {int vector; } ;


 int FUNC_0 (unsigned long,int ) ;
 unsigned long FUNC_1 (int ,unsigned long,unsigned long) ;

unsigned long FUNC_2(struct airq_iv *VAR_0, unsigned long VAR_1,
      unsigned long VAR_2)
{
 unsigned long VAR_3;


 VAR_3 = FUNC_1(VAR_0->vector, VAR_2, VAR_1);
 if (VAR_3 >= VAR_2)
  return -1UL;
 FUNC_0(VAR_3, VAR_0->vector);
 return VAR_3;
}
