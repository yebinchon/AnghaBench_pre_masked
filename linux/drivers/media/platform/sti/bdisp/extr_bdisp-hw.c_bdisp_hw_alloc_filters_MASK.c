
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct device {int dummy; } ;
typedef unsigned int dma_addr_t ;
struct TYPE_8__ {unsigned int paddr; void* virt; int max; int min; } ;
struct TYPE_7__ {int coef; int max; int min; } ;
struct TYPE_6__ {unsigned int paddr; void* virt; int max; int min; } ;
struct TYPE_5__ {int coef; int max; int min; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 TYPE_4__* VAR_7 ;
 TYPE_3__* VAR_8 ;
 TYPE_2__* VAR_9 ;
 TYPE_1__* VAR_10 ;
 void* FUNC_0 (struct device*,unsigned int,unsigned int*,int ,int ) ;
 int FUNC_1 (void*,int ,unsigned int) ;

int FUNC_2(struct device *VAR_11)
{
 unsigned int VAR_12, VAR_13;
 void *VAR_14;
 dma_addr_t VAR_15;


 VAR_13 = (VAR_0 * VAR_5) + (VAR_1 * VAR_6);
 VAR_14 = FUNC_0(VAR_11, VAR_13, &VAR_15, VAR_4,
          VAR_2);
 if (!VAR_14)
  return -VAR_3;


 for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++) {
  VAR_7[VAR_12].min = VAR_8[VAR_12].min;
  VAR_7[VAR_12].max = VAR_8[VAR_12].max;
  FUNC_1(VAR_14, VAR_8[VAR_12].coef, VAR_0);
  VAR_7[VAR_12].virt = VAR_14;
  VAR_7[VAR_12].paddr = VAR_15;
  VAR_14 += VAR_0;
  VAR_15 += VAR_0;
 }

 for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++) {
  VAR_9[VAR_12].min = VAR_10[VAR_12].min;
  VAR_9[VAR_12].max = VAR_10[VAR_12].max;
  FUNC_1(VAR_14, VAR_10[VAR_12].coef, VAR_1);
  VAR_9[VAR_12].virt = VAR_14;
  VAR_9[VAR_12].paddr = VAR_15;
  VAR_14 += VAR_1;
  VAR_15 += VAR_1;
 }

 return 0;
}
