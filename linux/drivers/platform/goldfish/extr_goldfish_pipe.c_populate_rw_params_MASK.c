
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u64 ;
struct page {int dummy; } ;
struct TYPE_2__ {int* sizes; int buffers_count; void** ptrs; } ;
struct goldfish_pipe_command {TYPE_1__ rw_params; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (struct page*) ;

__attribute__((used)) static void FUNC_1(struct page **VAR_2,
          int VAR_3,
          unsigned long VAR_4,
          unsigned long VAR_5,
          unsigned long VAR_6,
          unsigned long VAR_7,
          unsigned int VAR_8,
          int VAR_9,
          struct goldfish_pipe_command *VAR_10)
{




 unsigned long VAR_11 = FUNC_0(VAR_2[0]);
 unsigned long VAR_12 = VAR_11;
 int VAR_13 = 0;
 int VAR_14 = 1;
 int VAR_15 = VAR_6 == VAR_7
   ? (int)(VAR_5 - VAR_4)
   : (VAR_1 - (VAR_4 & ~VAR_0));
 VAR_10->rw_params.ptrs[0] = (u64)(VAR_11 | (VAR_4 & ~VAR_0));
 VAR_10->rw_params.sizes[0] = VAR_15;
 for (; VAR_14 < VAR_3; ++VAR_14) {
  VAR_11 = FUNC_0(VAR_2[VAR_14]);
  VAR_15 = (VAR_14 == VAR_3 - 1) ?
   VAR_8 : VAR_1;
  if (VAR_11 == VAR_12 + VAR_1) {
   VAR_10->rw_params.sizes[VAR_13] += VAR_15;
  } else {
   ++VAR_13;
   VAR_10->rw_params.ptrs[VAR_13] = (u64)VAR_11;
   VAR_10->rw_params.sizes[VAR_13] = VAR_15;
  }
  VAR_12 = VAR_11;
 }
 VAR_10->rw_params.buffers_count = VAR_13 + 1;
}
