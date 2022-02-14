
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct mmc_test_mem {unsigned int cnt; TYPE_1__* arr; } ;
struct TYPE_2__ {unsigned long order; int page; } ;


 unsigned long FUNC_0 (unsigned long,int) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_1 (struct scatterlist*,unsigned int) ;
 int FUNC_2 (struct scatterlist*) ;
 struct scatterlist* FUNC_3 (struct scatterlist*) ;
 int FUNC_4 (struct scatterlist*,int ,unsigned long,int ) ;

__attribute__((used)) static int FUNC_5(struct mmc_test_mem *VAR_2, unsigned long VAR_3,
      struct scatterlist *VAR_4, int VAR_5,
      unsigned int VAR_6, unsigned int VAR_7,
      unsigned int *VAR_8, int VAR_9)
{
 struct scatterlist *VAR_10 = ((void*)0);
 unsigned int VAR_11;
 unsigned long VAR_12 = VAR_3;

 FUNC_1(VAR_4, VAR_6);
 if (VAR_9 > VAR_6)
  VAR_9 = VAR_6;

 *VAR_8 = 0;
 do {
  for (VAR_11 = 0; VAR_11 < VAR_2->cnt; VAR_11++) {
   unsigned long VAR_13 = VAR_1 << VAR_2->arr[VAR_11].order;

   if (VAR_9 && (VAR_3 / VAR_9 < VAR_13))
    VAR_13 = FUNC_0(VAR_3 / VAR_9, 512);
   if (VAR_13 > VAR_12)
    VAR_13 = VAR_12;
   if (VAR_13 > VAR_7)
    VAR_13 = VAR_7;
   if (VAR_10)
    VAR_10 = FUNC_3(VAR_10);
   else
    VAR_10 = VAR_4;
   if (!VAR_10)
    return -VAR_0;
   FUNC_4(VAR_10, VAR_2->arr[VAR_11].page, VAR_13, 0);
   VAR_12 -= VAR_13;
   *VAR_8 += 1;
   if (!VAR_12)
    break;
  }
 } while (VAR_12 && VAR_5);

 if (VAR_12)
  return -VAR_0;

 if (VAR_10)
  FUNC_2(VAR_10);

 return 0;
}
