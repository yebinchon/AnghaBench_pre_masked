
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swap_eb {int flags; } ;
struct mtdswap_dev {unsigned int* page_data; unsigned int pages_per_eblk; scalar_t__* revmap; int dev; int mtd_read_count; struct swap_eb* eb_data; int sect_read_count; struct mtd_info* mtd; } ;
struct mtd_info {int dummy; } ;
struct mtd_blktrans_dev {int dummy; } ;
typedef int loff_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 struct mtdswap_dev* FUNC_1 (struct mtd_blktrans_dev*) ;
 int VAR_8 ;
 size_t VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_2 (int ,char*,size_t) ;
 scalar_t__ VAR_11 ;
 int FUNC_3 (char*,int,size_t) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct mtd_info*,int,size_t,size_t*,char*) ;
 int FUNC_6 (struct mtdswap_dev*,char*) ;
 int FUNC_7 (struct mtdswap_dev*,struct swap_eb*,int ) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct mtd_blktrans_dev *VAR_12,
   unsigned long VAR_13, char *VAR_14)
{
 struct mtdswap_dev *VAR_15 = FUNC_1(VAR_12);
 struct mtd_info *VAR_16 = VAR_15->mtd;
 unsigned int VAR_17, VAR_18;
 loff_t VAR_19;
 struct swap_eb *VAR_20;
 size_t VAR_21;
 int VAR_22;

 VAR_15->sect_read_count++;

 if (VAR_11) {
  if (FUNC_8(VAR_13 == 0))
   return FUNC_6(VAR_15, VAR_14);

  VAR_13--;
 }

 VAR_17 = VAR_15->page_data[VAR_13];
 if (VAR_17 > VAR_0) {
  FUNC_3(VAR_14, 0x0, VAR_9);
  if (VAR_17 == VAR_1)
   return 0;
  else
   return -VAR_4;
 }

 VAR_20 = VAR_15->eb_data + (VAR_17 / VAR_15->pages_per_eblk);
 FUNC_0(VAR_15->revmap[VAR_17] == VAR_10);

 VAR_19 = (loff_t)VAR_17 << VAR_8;
 VAR_18 = 0;

retry:
 VAR_22 = FUNC_5(VAR_16, VAR_19, VAR_9, &VAR_21, VAR_14);

 VAR_15->mtd_read_count++;
 if (FUNC_4(VAR_22)) {
  VAR_20->flags |= VAR_2;
  FUNC_7(VAR_15, VAR_20, VAR_5);
  VAR_22 = 0;
 }

 if (VAR_22 < 0) {
  FUNC_2(VAR_15->dev, "Read error %d\n", VAR_22);
  VAR_20->flags |= VAR_3;
  FUNC_7(VAR_15, VAR_20, VAR_6);
  VAR_18++;
  if (VAR_18 < VAR_7)
   goto retry;

  return VAR_22;
 }

 if (VAR_21 != VAR_9) {
  FUNC_2(VAR_15->dev, "Short read %zd\n", VAR_21);
  return -VAR_4;
 }

 return 0;
}
