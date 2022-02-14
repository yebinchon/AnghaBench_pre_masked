
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int of_node; } ;
typedef int __be32 ;


 unsigned long FUNC_0 (unsigned int) ;
 int * FUNC_1 (int ,int ,int *,int *) ;
 unsigned int FUNC_2 (int const*,int) ;

unsigned int FUNC_3(struct device *VAR_0)
{
 const __be32 *VAR_1;
 unsigned int VAR_2, VAR_3 = 0;
 unsigned long VAR_4 = 0;
 int VAR_5 = 0;

 while ((VAR_1 = FUNC_1(VAR_0->of_node, VAR_5++, ((void*)0), ((void*)0)))) {
  VAR_2 = FUNC_2(VAR_1, 1);
  if (!(VAR_4 & FUNC_0(VAR_2))) {
   VAR_4 |= FUNC_0(VAR_2);
   VAR_3++;
  }
 }

 return VAR_3;
}
