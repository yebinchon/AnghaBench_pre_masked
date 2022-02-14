
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wil_ring {int swhead; int swtail; int size; } ;



__attribute__((used)) static inline int FUNC_0(struct wil_ring *VAR_0)
{
 u32 VAR_1 = VAR_0->swhead;
 u32 VAR_2 = VAR_0->swtail;

 return (VAR_0->size + VAR_1 - VAR_2) % VAR_0->size;
}
