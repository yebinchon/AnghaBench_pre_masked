
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;


 int FUNC_0 (unsigned long) ;
 struct scatterlist* FUNC_1 (struct scatterlist*) ;
 scalar_t__ FUNC_2 (struct scatterlist*) ;

__attribute__((used)) static void FUNC_3(struct scatterlist *VAR_0, int VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++, VAR_0 = FUNC_1(VAR_0))
  if (VAR_0)
   FUNC_0((unsigned long) FUNC_2(VAR_0));
  else
   break;
}
