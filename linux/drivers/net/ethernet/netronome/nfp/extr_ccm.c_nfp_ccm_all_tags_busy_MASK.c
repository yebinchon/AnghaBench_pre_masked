
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct nfp_ccm {scalar_t__ tag_alloc_next; scalar_t__ tag_alloc_last; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct nfp_ccm *VAR_1)
{
 u16 VAR_2;

 VAR_2 = VAR_1->tag_alloc_next - VAR_1->tag_alloc_last;

 return VAR_2 > VAR_0;
}
