
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iov_iter {int nr_segs; TYPE_1__* iov; } ;
struct btrfs_fs_info {int sectorsize; } ;
typedef scalar_t__ ssize_t ;
typedef unsigned int loff_t ;
struct TYPE_2__ {scalar_t__ iov_base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_0 (struct iov_iter const*) ;
 scalar_t__ FUNC_1 (struct iov_iter const*) ;
 int FUNC_2 (struct iov_iter const*) ;

__attribute__((used)) static ssize_t FUNC_3(struct btrfs_fs_info *VAR_2,
          const struct iov_iter *VAR_3, loff_t VAR_4)
{
 int VAR_5;
 int VAR_6;
 unsigned int VAR_7 = VAR_2->sectorsize - 1;
 ssize_t VAR_8 = -VAR_0;

 if (VAR_4 & VAR_7)
  goto out;

 if (FUNC_0(VAR_3) & VAR_7)
  goto out;


 if (FUNC_1(VAR_3) != VAR_1 || !FUNC_2(VAR_3))
  return 0;





 for (VAR_5 = 0; VAR_5 < VAR_3->nr_segs; VAR_5++) {
  for (VAR_6 = VAR_5 + 1; VAR_6 < VAR_3->nr_segs; VAR_6++) {
   if (VAR_3->iov[VAR_5].iov_base == VAR_3->iov[VAR_6].iov_base)
    goto out;
  }
 }
 VAR_8 = 0;
out:
 return VAR_8;
}
