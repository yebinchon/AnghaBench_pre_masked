
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swap_eb {int active_count; int flags; } ;
struct mtdswap_dev {unsigned int* revmap; unsigned int pages_per_eblk; unsigned int* page_data; struct swap_eb* eb_data; int dev; int page_buf; struct mtd_info* mtd; } ;
struct mtd_info {int dummy; } ;
typedef int loff_t ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 void* VAR_6 ;
 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct mtd_info*,int,size_t,size_t*,int ) ;
 int FUNC_3 (struct mtdswap_dev*,int ,unsigned int,unsigned int*,int) ;

__attribute__((used)) static int FUNC_4(struct mtdswap_dev *VAR_7, unsigned int VAR_8,
  unsigned int *VAR_9)
{
 struct mtd_info *VAR_10 = VAR_7->mtd;
 struct swap_eb *VAR_11, *VAR_12;
 int VAR_13;
 size_t VAR_14;
 unsigned int VAR_15, VAR_16;
 loff_t VAR_17;

 VAR_15 = VAR_7->revmap[VAR_8];
 VAR_17 = (loff_t) VAR_8 << VAR_4;
 VAR_16 = 0;

retry:
 VAR_13 = FUNC_2(VAR_10, VAR_17, VAR_5, &VAR_14, VAR_7->page_buf);

 if (VAR_13 < 0 && !FUNC_1(VAR_13)) {
  VAR_12 = VAR_7->eb_data + VAR_8 / VAR_7->pages_per_eblk;
  VAR_12->flags |= VAR_1;

  FUNC_0(VAR_7->dev, "Read Error: %d (block %u)\n", VAR_13,
   VAR_8);
  VAR_16++;
  if (VAR_16 < VAR_3)
   goto retry;

  goto read_error;
 }

 if (VAR_14 != VAR_5) {
  FUNC_0(VAR_7->dev, "Short read: %zd (block %u)\n", VAR_14,
         VAR_8);
  VAR_13 = -VAR_2;
  goto read_error;
 }

 VAR_13 = FUNC_3(VAR_7, VAR_7->page_buf, VAR_15, VAR_9, 1);
 if (VAR_13 < 0) {
  VAR_7->page_data[VAR_15] = VAR_0;
  FUNC_0(VAR_7->dev, "Write error: %d\n", VAR_13);
  return VAR_13;
 }

 VAR_11 = VAR_7->eb_data + *VAR_9 / VAR_7->pages_per_eblk;
 VAR_7->page_data[VAR_15] = *VAR_9;
 VAR_7->revmap[VAR_8] = VAR_6;
 VAR_11 = VAR_7->eb_data + VAR_8 / VAR_7->pages_per_eblk;
 VAR_11->active_count--;

 return 0;

read_error:
 VAR_7->page_data[VAR_15] = VAR_0;
 VAR_7->revmap[VAR_8] = VAR_6;
 return VAR_13;
}
