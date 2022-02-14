
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wil_ring {int swtail; int size; } ;



__attribute__((used)) static inline u32 FUNC_0(struct wil_ring *VAR_0)
{
 return (VAR_0->swtail + 1) % VAR_0->size;
}
