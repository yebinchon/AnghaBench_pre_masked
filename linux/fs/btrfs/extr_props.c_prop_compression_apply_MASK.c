
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct btrfs_fs_info {int dummy; } ;
struct TYPE_2__ {int prop_compress; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct btrfs_fs_info* FUNC_1 (int ) ;
 int FUNC_2 (struct btrfs_fs_info*,int ) ;
 int FUNC_3 (char*,char const*,int) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_9, const char *VAR_10,
      size_t VAR_11)
{
 struct btrfs_fs_info *VAR_12 = FUNC_1(VAR_9->i_sb);
 int VAR_13;

 if (VAR_11 == 0) {
  FUNC_0(VAR_9)->flags |= VAR_5;
  FUNC_0(VAR_9)->flags &= ~VAR_4;
  FUNC_0(VAR_9)->prop_compress = VAR_1;

  return 0;
 }

 if (!FUNC_3("lzo", VAR_10, 3)) {
  VAR_13 = VAR_0;
  FUNC_2(VAR_12, VAR_6);
 } else if (!FUNC_3("zlib", VAR_10, 4)) {
  VAR_13 = VAR_2;
 } else if (!FUNC_3("zstd", VAR_10, 4)) {
  VAR_13 = VAR_3;
  FUNC_2(VAR_12, VAR_7);
 } else {
  return -VAR_8;
 }

 FUNC_0(VAR_9)->flags &= ~VAR_5;
 FUNC_0(VAR_9)->flags |= VAR_4;
 FUNC_0(VAR_9)->prop_compress = VAR_13;

 return 0;
}
