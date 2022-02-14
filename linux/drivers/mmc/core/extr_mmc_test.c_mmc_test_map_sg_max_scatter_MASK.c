
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct mmc_test_mem {unsigned int cnt; TYPE_1__* arr; } ;
struct TYPE_2__ {int order; int page; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct scatterlist*,unsigned int) ;
 int FUNC_2 (struct scatterlist*) ;
 struct scatterlist* FUNC_3 (struct scatterlist*) ;
 int FUNC_4 (struct scatterlist*,int ,unsigned long,int ) ;
 int FUNC_5 (void*) ;

__attribute__((used)) static int FUNC_6(struct mmc_test_mem *VAR_2,
           unsigned long VAR_3,
           struct scatterlist *VAR_4,
           unsigned int VAR_5,
           unsigned int VAR_6,
           unsigned int *VAR_7)
{
 struct scatterlist *VAR_8 = ((void*)0);
 unsigned int VAR_9 = VAR_2->cnt, VAR_10;
 unsigned long VAR_11;
 void *VAR_12, *VAR_13, *VAR_14 = ((void*)0);

 FUNC_1(VAR_4, VAR_5);

 *VAR_7 = 0;
 while (VAR_3) {
  VAR_12 = FUNC_0(VAR_2->arr[--VAR_9].page);
  VAR_10 = 1 << VAR_2->arr[VAR_9].order;
  while (VAR_3 && VAR_10) {
   VAR_13 = VAR_12 + VAR_1 * --VAR_10;
   if (VAR_14 && VAR_14 + VAR_1 == VAR_13)
    continue;
   VAR_14 = VAR_13;
   VAR_11 = VAR_1;
   if (VAR_11 > VAR_6)
    VAR_11 = VAR_6;
   if (VAR_11 > VAR_3)
    VAR_11 = VAR_3;
   if (VAR_8)
    VAR_8 = FUNC_3(VAR_8);
   else
    VAR_8 = VAR_4;
   if (!VAR_8)
    return -VAR_0;
   FUNC_4(VAR_8, FUNC_5(VAR_13), VAR_11, 0);
   VAR_3 -= VAR_11;
   *VAR_7 += 1;
  }
  if (VAR_9 == 0)
   VAR_9 = VAR_2->cnt;
 }

 if (VAR_8)
  FUNC_2(VAR_8);

 return 0;
}
