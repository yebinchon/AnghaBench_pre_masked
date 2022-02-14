
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct mmc_test_mem {size_t cnt; TYPE_1__* arr; } ;
typedef int gfp_t ;
struct TYPE_2__ {unsigned int order; struct page* page; } ;


 unsigned long FUNC_0 (unsigned int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct page* FUNC_1 (int,unsigned int) ;
 unsigned int FUNC_2 (unsigned long) ;
 TYPE_1__* FUNC_3 (unsigned int,int,int) ;
 struct mmc_test_mem* FUNC_4 (int,int) ;
 int FUNC_5 (struct mmc_test_mem*) ;
 int FUNC_6 () ;

__attribute__((used)) static struct mmc_test_mem *FUNC_7(unsigned long VAR_6,
            unsigned long VAR_7,
            unsigned int VAR_8,
            unsigned int VAR_9)
{
 unsigned long VAR_10 = FUNC_0(VAR_7, VAR_3);
 unsigned long VAR_11 = FUNC_0(VAR_6, VAR_3);
 unsigned long VAR_12 = FUNC_0(VAR_9, VAR_3);
 unsigned long VAR_13 = 0;
 unsigned long VAR_14 = FUNC_6() >> 4;
 struct mmc_test_mem *VAR_15;

 if (VAR_10 > VAR_14)
  VAR_10 = VAR_14;
 if (VAR_11 > VAR_10)
  VAR_11 = VAR_10;

 if (VAR_12 > VAR_10)
  VAR_12 = VAR_10;

 if (VAR_8 > VAR_10)
  VAR_8 = VAR_10;

 VAR_15 = FUNC_4(sizeof(*VAR_15), VAR_1);
 if (!VAR_15)
  return ((void*)0);

 VAR_15->arr = FUNC_3(VAR_8, sizeof(*VAR_15->arr), VAR_1);
 if (!VAR_15->arr)
  goto out_free;

 while (VAR_10) {
  struct page *VAR_16;
  unsigned int VAR_17;
  gfp_t VAR_18 = VAR_1 | VAR_0 | VAR_5 |
    VAR_4;

  VAR_17 = FUNC_2(VAR_12 << VAR_2);
  while (1) {
   VAR_16 = FUNC_1(VAR_18, VAR_17);
   if (VAR_16 || !VAR_17)
    break;
   VAR_17 -= 1;
  }
  if (!VAR_16) {
   if (VAR_13 < VAR_11)
    goto out_free;
   break;
  }
  VAR_15->arr[VAR_15->cnt].page = VAR_16;
  VAR_15->arr[VAR_15->cnt].order = VAR_17;
  VAR_15->cnt += 1;
  if (VAR_10 <= (1UL << VAR_17))
   break;
  VAR_10 -= 1UL << VAR_17;
  VAR_13 += 1UL << VAR_17;
  if (VAR_15->cnt >= VAR_8) {
   if (VAR_13 < VAR_11)
    goto out_free;
   break;
  }
 }

 return VAR_15;

out_free:
 FUNC_5(VAR_15);
 return ((void*)0);
}
