
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7134_dev {size_t nr; } ;


 int FUNC_0 (int *) ;
 int ** VAR_0 ;

__attribute__((used)) static int FUNC_1(struct saa7134_dev *VAR_1)
{
 if (!VAR_0[VAR_1->nr])
  return 1;

 FUNC_0(VAR_0[VAR_1->nr]);
 VAR_0[VAR_1->nr] = ((void*)0);
 return 1;
}
