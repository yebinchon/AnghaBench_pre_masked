
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct swap_info_struct {scalar_t__ highest_bit; scalar_t__ pages; scalar_t__ max; } ;
struct TYPE_2__ {scalar_t__ length; } ;
struct iomap_swapfile_info {int nr_extents; scalar_t__ nr_pages; scalar_t__ lowest_ppage; scalar_t__ highest_ppage; TYPE_1__ iomap; struct swap_info_struct* sis; } ;
struct iomap_ops {int dummy; } ;
struct inode {int dummy; } ;
struct file {struct address_space* f_mapping; } ;
struct address_space {struct inode* host; } ;
typedef scalar_t__ sector_t ;
typedef int loff_t ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*,int,int,int ,struct iomap_ops const*,struct iomap_swapfile_info*,int ) ;
 int VAR_2 ;
 int FUNC_3 (struct iomap_swapfile_info*) ;
 int FUNC_4 (struct file*,int) ;

int FUNC_5(struct swap_info_struct *VAR_3,
  struct file *VAR_4, sector_t *VAR_5,
  const struct iomap_ops *VAR_6)
{
 struct iomap_swapfile_info VAR_7 = {
  .sis = VAR_3,
  .lowest_ppage = (sector_t)-1ULL,
 };
 struct address_space *VAR_8 = VAR_4->f_mapping;
 struct inode *VAR_9 = VAR_8->host;
 loff_t VAR_10 = 0;
 loff_t VAR_11 = FUNC_0(FUNC_1(VAR_9), VAR_1);
 loff_t VAR_12;





 VAR_12 = FUNC_4(VAR_4, 1);
 if (VAR_12)
  return VAR_12;

 while (VAR_11 > 0) {
  VAR_12 = FUNC_2(VAR_9, VAR_10, VAR_11, VAR_0,
    VAR_6, &VAR_7, VAR_2);
  if (VAR_12 <= 0)
   return VAR_12;

  VAR_10 += VAR_12;
  VAR_11 -= VAR_12;
 }

 if (VAR_7.iomap.length) {
  VAR_12 = FUNC_3(&VAR_7);
  if (VAR_12)
   return VAR_12;
 }

 *VAR_5 = 1 + VAR_7.highest_ppage - VAR_7.lowest_ppage;
 VAR_3->max = VAR_7.nr_pages;
 VAR_3->pages = VAR_7.nr_pages - 1;
 VAR_3->highest_bit = VAR_7.nr_pages - 1;
 return VAR_7.nr_extents;
}
