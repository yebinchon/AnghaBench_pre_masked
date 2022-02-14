
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct buffer_head {int dummy; } ;
struct btrfs_device {scalar_t__ commit_total_bytes; int devid; int fs_info; int bdev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct buffer_head* FUNC_0 (int ,int,scalar_t__) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct buffer_head*) ;

__attribute__((used)) static int FUNC_6(struct btrfs_device *VAR_3, int VAR_4)
{
 struct buffer_head *VAR_5;
 int VAR_6;
 int VAR_7 = 0;
 bool VAR_8 = 0;
 u64 VAR_9;

 if (VAR_4 == 0)
  VAR_4 = VAR_2;

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  VAR_9 = FUNC_3(VAR_6);
  if (VAR_9 + VAR_1 >=
      VAR_3->commit_total_bytes)
   break;

  VAR_5 = FUNC_0(VAR_3->bdev,
          VAR_9 / VAR_0,
          VAR_1);
  if (!VAR_5) {
   VAR_7++;
   if (VAR_6 == 0)
    VAR_8 = 1;
   continue;
  }
  FUNC_5(VAR_5);
  if (!FUNC_4(VAR_5)) {
   VAR_7++;
   if (VAR_6 == 0)
    VAR_8 = 1;
  }


  FUNC_1(VAR_5);


  FUNC_1(VAR_5);
 }


 if (VAR_8) {
  FUNC_2(VAR_3->fs_info, "error writing primary super block to device %llu",
     VAR_3->devid);
  return -1;
 }

 return VAR_7 < VAR_6 ? 0 : -1;
}
