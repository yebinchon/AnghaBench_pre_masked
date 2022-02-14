
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swap_eb {int active_count; } ;
struct mtdswap_dev {unsigned int* page_data; unsigned int pages_per_eblk; int discard_page_count; int * revmap; struct swap_eb* eb_data; int discard_count; } ;
struct mtd_blktrans_dev {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 void* VAR_2 ;
 struct mtdswap_dev* FUNC_0 (struct mtd_blktrans_dev*) ;
 int VAR_3 ;
 int FUNC_1 (struct mtdswap_dev*,struct swap_eb*) ;

__attribute__((used)) static int FUNC_2(struct mtd_blktrans_dev *VAR_4, unsigned long VAR_5,
   unsigned VAR_6)
{
 struct mtdswap_dev *VAR_7 = FUNC_0(VAR_4);
 unsigned long VAR_8;
 struct swap_eb *VAR_9;
 unsigned int VAR_10;

 VAR_7->discard_count++;

 for (VAR_8 = VAR_5; VAR_8 < VAR_5 + VAR_6; VAR_8++) {
  VAR_10 = VAR_7->page_data[VAR_8];
  if (VAR_10 <= VAR_1) {
   VAR_9 = VAR_7->eb_data + (VAR_10 / VAR_7->pages_per_eblk);
   VAR_9->active_count--;
   FUNC_1(VAR_7, VAR_9);
   VAR_7->page_data[VAR_8] = VAR_2;
   VAR_7->revmap[VAR_10] = VAR_3;
   VAR_7->discard_page_count++;
  } else if (VAR_10 == VAR_0) {
   VAR_7->page_data[VAR_8] = VAR_2;
   VAR_7->discard_page_count++;
  }
 }

 return 0;
}
