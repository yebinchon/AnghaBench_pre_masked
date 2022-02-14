
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct delta_ipc_ctx {TYPE_1__* ipc_buf; } ;
struct TYPE_2__ {void* vaddr; int size; } ;



__attribute__((used)) static inline bool FUNC_0(struct delta_ipc_ctx *VAR_0,
     void *VAR_1, u32 VAR_2)
{
 return ((VAR_1 >= VAR_0->ipc_buf->vaddr) &&
  ((VAR_1 + VAR_2) <= (VAR_0->ipc_buf->vaddr + VAR_0->ipc_buf->size)));
}
