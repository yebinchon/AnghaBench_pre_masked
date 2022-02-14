
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct nfp_ccm {scalar_t__ tag_alloc_last; scalar_t__ tag_alloc_next; int tag_allocator; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_3(struct nfp_ccm *VAR_0, u16 VAR_1)
{
 FUNC_0(!FUNC_1(VAR_1, VAR_0->tag_allocator));

 while (!FUNC_2(VAR_0->tag_alloc_last, VAR_0->tag_allocator) &&
        VAR_0->tag_alloc_last != VAR_0->tag_alloc_next)
  VAR_0->tag_alloc_last++;
}
