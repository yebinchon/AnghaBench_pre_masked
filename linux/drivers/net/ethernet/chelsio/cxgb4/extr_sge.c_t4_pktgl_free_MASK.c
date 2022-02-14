
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pkt_gl {int nfrags; struct page_frag* frags; } ;
struct page_frag {int page; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(const struct pkt_gl *VAR_0)
{
 int VAR_1;
 const struct page_frag *VAR_2;

 for (VAR_2 = VAR_0->frags, VAR_1 = VAR_0->nfrags - 1; VAR_1--; VAR_2++)
  FUNC_0(VAR_2->page);
}
