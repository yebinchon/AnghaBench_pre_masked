
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenvif_queue {scalar_t__ dealloc_cons; scalar_t__ dealloc_prod; } ;



__attribute__((used)) static inline bool FUNC_0(struct xenvif_queue *VAR_0)
{
 return VAR_0->dealloc_cons != VAR_0->dealloc_prod;
}
