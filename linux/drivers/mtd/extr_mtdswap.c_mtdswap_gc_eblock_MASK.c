
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swap_eb {int dummy; } ;
struct mtdswap_dev {int pages_per_eblk; scalar_t__ spare_eblks; scalar_t__* revmap; struct swap_eb* eb_data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct mtdswap_dev*,unsigned int,unsigned int*) ;

__attribute__((used)) static int FUNC_1(struct mtdswap_dev *VAR_3, struct swap_eb *VAR_4)
{
 unsigned int VAR_5, VAR_6, VAR_7, VAR_8;
 int VAR_9, VAR_10;

 VAR_10 = 0;
 VAR_7 = (VAR_4 - VAR_3->eb_data) * VAR_3->pages_per_eblk;

 for (VAR_5 = 0; VAR_5 < VAR_3->pages_per_eblk; VAR_5++) {
  if (VAR_3->spare_eblks < VAR_1)
   return -VAR_0;

  VAR_6 = VAR_7 + VAR_5;
  if (VAR_3->revmap[VAR_6] == VAR_2)
   continue;

  VAR_9 = FUNC_0(VAR_3, VAR_6, &VAR_8);
  if (VAR_9 < 0 && !VAR_10)
   VAR_10 = VAR_9;
 }

 return VAR_10;
}
