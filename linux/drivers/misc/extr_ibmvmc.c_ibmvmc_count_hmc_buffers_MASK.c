
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct ibmvmc_buffer {scalar_t__ free; scalar_t__ valid; } ;
struct TYPE_4__ {int lock; struct ibmvmc_buffer* buffer; } ;
struct TYPE_3__ {size_t max_hmc_index; } ;


 TYPE_2__* VAR_0 ;
 TYPE_1__ VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_2(u8 VAR_3, unsigned int *VAR_4,
         unsigned int *VAR_5)
{
 struct ibmvmc_buffer *VAR_6;
 unsigned long VAR_7;
 unsigned long VAR_8;

 if (VAR_3 > VAR_1.max_hmc_index)
  return;

 if (!VAR_4 || !VAR_5)
  return;

 *VAR_4 = 0; *VAR_5 = 0;

 VAR_6 = VAR_0[VAR_3].buffer;
 FUNC_0(&VAR_0[VAR_3].lock, VAR_8);

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  if (VAR_6[VAR_7].valid) {
   *VAR_4 = *VAR_4 + 1;
   if (VAR_6[VAR_7].free)
    *VAR_5 = *VAR_5 + 1;
  }
 }

 FUNC_1(&VAR_0[VAR_3].lock, VAR_8);
}
