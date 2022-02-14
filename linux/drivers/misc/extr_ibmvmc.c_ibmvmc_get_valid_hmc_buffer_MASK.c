
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct ibmvmc_buffer {scalar_t__ owner; scalar_t__ free; scalar_t__ valid; } ;
struct TYPE_4__ {struct ibmvmc_buffer* buffer; } ;
struct TYPE_3__ {size_t max_hmc_index; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__* VAR_1 ;
 TYPE_1__ VAR_2 ;
 unsigned long VAR_3 ;

__attribute__((used)) static struct ibmvmc_buffer *FUNC_0(u8 VAR_4)
{
 struct ibmvmc_buffer *VAR_5;
 struct ibmvmc_buffer *VAR_6 = ((void*)0);
 unsigned long VAR_7;

 if (VAR_4 > VAR_2.max_hmc_index)
  return ((void*)0);

 VAR_5 = VAR_1[VAR_4].buffer;

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  if (VAR_5[VAR_7].valid && VAR_5[VAR_7].free &&
      VAR_5[VAR_7].owner == VAR_0) {
   VAR_5[VAR_7].free = 0;
   VAR_6 = &VAR_5[VAR_7];
   break;
  }
 }

 return VAR_6;
}
