
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swap_eb {int active_count; } ;
struct mtdswap_dev {scalar_t__ spare_eblks; unsigned int* page_data; unsigned int pages_per_eblk; struct swap_eb* eb_data; int mtd_write_count; int * revmap; int sect_write_count; } ;
struct mtd_blktrans_dev {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct mtdswap_dev* FUNC_0 (struct mtd_blktrans_dev*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct mtdswap_dev*,struct swap_eb*) ;
 int FUNC_2 (struct mtdswap_dev*,char*,unsigned long,unsigned int*,int ) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct mtd_blktrans_dev *VAR_6,
   unsigned long VAR_7, char *VAR_8)
{
 struct mtdswap_dev *VAR_9 = FUNC_0(VAR_6);
 unsigned int VAR_10, VAR_11;
 struct swap_eb *VAR_12;
 int VAR_13;

 VAR_9->sect_write_count++;

 if (VAR_9->spare_eblks < VAR_3)
  return -VAR_2;

 if (VAR_5) {

  if (FUNC_3(VAR_7 == 0))
   return 0;

  VAR_7--;
 }

 VAR_11 = VAR_9->page_data[VAR_7];
 if (VAR_11 <= VAR_0) {
  VAR_12 = VAR_9->eb_data + (VAR_11 / VAR_9->pages_per_eblk);
  VAR_12->active_count--;
  FUNC_1(VAR_9, VAR_12);
  VAR_9->page_data[VAR_7] = VAR_1;
  VAR_9->revmap[VAR_11] = VAR_4;
 }

 VAR_13 = FUNC_2(VAR_9, VAR_8, VAR_7, &VAR_10, 0);
 VAR_9->mtd_write_count++;

 if (VAR_13 < 0)
  return VAR_13;

 VAR_12 = VAR_9->eb_data + (VAR_10 / VAR_9->pages_per_eblk);
 VAR_9->page_data[VAR_7] = VAR_10;

 return 0;
}
