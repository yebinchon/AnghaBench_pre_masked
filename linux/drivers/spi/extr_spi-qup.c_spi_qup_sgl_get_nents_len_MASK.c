
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct scatterlist {int dummy; } ;


 unsigned int FUNC_0 (struct scatterlist*) ;
 struct scatterlist* FUNC_1 (struct scatterlist*) ;

__attribute__((used)) static u32 FUNC_2(struct scatterlist *VAR_0, u32 VAR_1,
         u32 *VAR_2)
{
 struct scatterlist *VAR_3;
 u32 VAR_4 = 0;

 for (VAR_3 = VAR_0; VAR_3; VAR_3 = FUNC_1(VAR_3)) {
  unsigned int VAR_5 = FUNC_0(VAR_3);


  if (((VAR_4 + VAR_5) < VAR_4) || ((VAR_4 + VAR_5) > VAR_1))
   break;

  VAR_4 += VAR_5;
  (*VAR_2)++;
 }

 return VAR_4;
}
