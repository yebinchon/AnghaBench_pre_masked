
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct metapath {int mp_aheight; int* mp_list; int mp_fheight; } ;
typedef enum walker_status { ____Placeholder_walker_status } walker_status ;
typedef scalar_t__ __be64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__* FUNC_0 (unsigned int,struct metapath*) ;

__attribute__((used)) static enum walker_status FUNC_1(struct metapath *VAR_3,
        unsigned int VAR_4)
{
 const __be64 *VAR_5, *VAR_6, *VAR_7;
 unsigned int VAR_8;

 VAR_8 = VAR_3->mp_aheight - 1;
 VAR_5 = FUNC_0(VAR_8, VAR_3);
 VAR_7 = VAR_5 + VAR_4;

 for (VAR_6 = VAR_5; VAR_6 < VAR_7; VAR_6++) {
  if (*VAR_6) {
   VAR_3->mp_list[VAR_8] += VAR_6 - VAR_5;
   if (VAR_3->mp_aheight == VAR_3->mp_fheight)
    return VAR_2;
   return VAR_1;
  }
 }
 return VAR_0;
}
