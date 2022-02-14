
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swap_eb {int active_count; } ;
struct mtdswap_dev {unsigned int pages_per_eblk; void** revmap; int curr_write_pos; int dev; int * curr_write; struct swap_eb* eb_data; struct mtd_info* mtd; } ;
struct mtd_info {int dummy; } ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (int ,char*,size_t,...) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct mtd_info*,int,size_t,size_t*,char*) ;
 int FUNC_3 (struct mtdswap_dev*) ;
 scalar_t__ FUNC_4 (struct mtdswap_dev*,int ) ;
 int FUNC_5 (struct mtdswap_dev*,struct swap_eb*) ;
 int FUNC_6 (struct mtdswap_dev*,unsigned int,unsigned int*) ;

__attribute__((used)) static int FUNC_7(struct mtdswap_dev *VAR_5, char *VAR_6,
   unsigned int VAR_7, unsigned int *VAR_8, int VAR_9)
{
 struct mtd_info *VAR_10 = VAR_5->mtd;
 struct swap_eb *VAR_11;
 size_t VAR_12;
 loff_t VAR_13;
 int VAR_14;

retry:
 if (!VAR_9)
  while (!FUNC_3(VAR_5))
   if (FUNC_4(VAR_5, 0) > 0)
    return -VAR_1;

 VAR_14 = FUNC_6(VAR_5, VAR_7, VAR_8);
 VAR_11 = VAR_5->eb_data + (*VAR_8 / VAR_5->pages_per_eblk);

 if (VAR_14 == -VAR_0 || FUNC_1(VAR_14)) {
  VAR_5->curr_write = ((void*)0);
  VAR_11->active_count--;
  VAR_5->revmap[*VAR_8] = VAR_4;
  goto retry;
 }

 if (VAR_14 < 0)
  return VAR_14;

 VAR_13 = (loff_t)*VAR_8 << VAR_2;
 VAR_14 = FUNC_2(VAR_10, VAR_13, VAR_3, &VAR_12, VAR_6);
 if (VAR_14 == -VAR_0 || FUNC_1(VAR_14)) {
  VAR_5->curr_write_pos--;
  VAR_11->active_count--;
  VAR_5->revmap[*VAR_8] = VAR_4;
  FUNC_5(VAR_5, VAR_11);
  goto retry;
 }

 if (VAR_14 < 0) {
  FUNC_0(VAR_5->dev, "Write to MTD device failed: %d (%zd written)",
   VAR_14, VAR_12);
  goto err;
 }

 if (VAR_12 != VAR_3) {
  FUNC_0(VAR_5->dev, "Short write to MTD device: %zd written",
   VAR_12);
  VAR_14 = -VAR_0;
  goto err;
 }

 return VAR_14;

err:
 VAR_5->curr_write_pos--;
 VAR_11->active_count--;
 VAR_5->revmap[*VAR_8] = VAR_4;

 return VAR_14;
}
