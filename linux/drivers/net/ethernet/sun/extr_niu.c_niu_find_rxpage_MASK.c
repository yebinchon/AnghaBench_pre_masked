
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct rx_ring_info {struct page** rxhash; } ;
struct page {int index; int mapping; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 unsigned int FUNC_1 (struct rx_ring_info*,int ) ;

__attribute__((used)) static struct page *FUNC_2(struct rx_ring_info *VAR_1, u64 VAR_2,
        struct page ***VAR_3)
{
 unsigned int VAR_4 = FUNC_1(VAR_1, VAR_2);
 struct page *VAR_5, **VAR_6;

 VAR_2 &= VAR_0;
 VAR_6 = &VAR_1->rxhash[VAR_4];
 for (; (VAR_5 = *VAR_6) != ((void*)0); VAR_6 = (struct page **) &VAR_5->mapping) {
  if (VAR_5->index == VAR_2) {
   *VAR_3 = VAR_6;
   goto found;
  }
 }
 FUNC_0();

found:
 return VAR_5;
}
