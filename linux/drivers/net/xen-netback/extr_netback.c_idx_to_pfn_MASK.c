
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct xenvif_queue {int * mmap_pages; } ;


 unsigned long FUNC_0 (int ) ;

__attribute__((used)) static inline unsigned long FUNC_1(struct xenvif_queue *VAR_0,
           u16 VAR_1)
{
 return FUNC_0(VAR_0->mmap_pages[VAR_1]);
}
