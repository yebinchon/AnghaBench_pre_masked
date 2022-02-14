
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct isp1760_hcd {TYPE_1__* memory_pool; } ;
struct TYPE_2__ {scalar_t__ start; scalar_t__ size; int free; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct isp1760_hcd *VAR_8)
{
 int VAR_9, VAR_10;
 u32 VAR_11;

 VAR_11 = VAR_7;
 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  VAR_8->memory_pool[VAR_9].start = VAR_11;
  VAR_8->memory_pool[VAR_9].size = VAR_1;
  VAR_8->memory_pool[VAR_9].free = 1;
  VAR_11 += VAR_8->memory_pool[VAR_9].size;
 }

 VAR_10 = VAR_9;
 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
  VAR_8->memory_pool[VAR_10 + VAR_9].start = VAR_11;
  VAR_8->memory_pool[VAR_10 + VAR_9].size = VAR_3;
  VAR_8->memory_pool[VAR_10 + VAR_9].free = 1;
  VAR_11 += VAR_8->memory_pool[VAR_10 + VAR_9].size;
 }

 VAR_10 = VAR_9;
 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
  VAR_8->memory_pool[VAR_10 + VAR_9].start = VAR_11;
  VAR_8->memory_pool[VAR_10 + VAR_9].size = VAR_5;
  VAR_8->memory_pool[VAR_10 + VAR_9].free = 1;
  VAR_11 += VAR_8->memory_pool[VAR_10 + VAR_9].size;
 }

 FUNC_0(VAR_11 - VAR_8->memory_pool[0].start > VAR_6);
}
