
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
struct buffer_head {struct btrfs_device* b_private; int b_end_io; int b_data; } ;
struct btrfs_super_block {int csum; } ;
struct btrfs_fs_info {int csum_shash; } ;
struct btrfs_device {scalar_t__ commit_total_bytes; struct btrfs_fs_info* fs_info; int bdev; } ;
struct TYPE_6__ {int tfm; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 struct buffer_head* FUNC_1 (int ,int,scalar_t__) ;
 int VAR_10 ;
 int FUNC_2 (struct btrfs_fs_info*,char*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct btrfs_super_block*,int) ;
 int FUNC_5 (struct btrfs_fs_info*,int ) ;
 int FUNC_6 (int ,int,struct buffer_head*) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,char const*,scalar_t__) ;
 int FUNC_10 (struct buffer_head*) ;
 int FUNC_11 (struct buffer_head*) ;
 int FUNC_12 (int ,struct btrfs_super_block*,scalar_t__) ;
 int FUNC_13 (struct buffer_head*) ;
 TYPE_1__* VAR_11 ;

__attribute__((used)) static int FUNC_14(struct btrfs_device *VAR_12,
       struct btrfs_super_block *VAR_13, int VAR_14)
{
 struct btrfs_fs_info *VAR_15 = VAR_12->fs_info;
 FUNC_0(VAR_11, VAR_15->csum_shash);
 struct buffer_head *VAR_16;
 int VAR_17;
 int VAR_18;
 int VAR_19 = 0;
 u64 VAR_20;
 int VAR_21;

 if (VAR_14 == 0)
  VAR_14 = VAR_3;

 VAR_11->tfm = VAR_15->csum_shash;

 for (VAR_17 = 0; VAR_17 < VAR_14; VAR_17++) {
  VAR_20 = FUNC_3(VAR_17);
  if (VAR_20 + VAR_2 >=
      VAR_12->commit_total_bytes)
   break;

  FUNC_4(VAR_13, VAR_20);

  FUNC_8(VAR_11);
  FUNC_9(VAR_11, (const char *)VAR_13 + VAR_1,
        VAR_2 - VAR_1);
  FUNC_7(VAR_11, VAR_13->csum);


  VAR_16 = FUNC_1(VAR_12->bdev, VAR_20 / VAR_0,
         VAR_2);
  if (!VAR_16) {
   FUNC_2(VAR_12->fs_info,
       "couldn't get super buffer head for bytenr %llu",
       VAR_20);
   VAR_19++;
   continue;
  }

  FUNC_12(VAR_16->b_data, VAR_13, VAR_2);


  FUNC_10(VAR_16);

  FUNC_13(VAR_16);
  FUNC_11(VAR_16);
  VAR_16->b_end_io = VAR_10;
  VAR_16->b_private = VAR_12;





  VAR_21 = VAR_9 | VAR_6 | VAR_8;
  if (VAR_17 == 0 && !FUNC_5(VAR_12->fs_info, VAR_4))
   VAR_21 |= VAR_5;
  VAR_18 = FUNC_6(VAR_7, VAR_21, VAR_16);
  if (VAR_18)
   VAR_19++;
 }
 return VAR_19 < VAR_17 ? 0 : -1;
}
