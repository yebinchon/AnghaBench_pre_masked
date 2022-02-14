
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec64 {int dummy; } ;
struct msdos_sb_info {int dummy; } ;
struct msdos_dir_entry {scalar_t__ size; void* date; void* time; scalar_t__ ctime_cs; scalar_t__ ctime; scalar_t__ adate; scalar_t__ cdate; scalar_t__ lcase; int attr; int name; } ;
struct inode {int i_sb; } ;
struct fat_slot_info {int dummy; } ;
typedef void* __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int VAR_3 ;
 struct msdos_sb_info* FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct inode*,struct msdos_dir_entry*,int,struct fat_slot_info*) ;
 int FUNC_3 (struct msdos_dir_entry*,int) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct msdos_sb_info*,struct timespec64*,void**,void**,int *) ;
 int FUNC_6 (struct inode*,struct timespec64*,int) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (int ,unsigned char const*,int ) ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_6, const unsigned char *VAR_7,
      int VAR_8, int VAR_9, int VAR_10,
      struct timespec64 *VAR_11, struct fat_slot_info *VAR_12)
{
 struct msdos_sb_info *VAR_13 = FUNC_1(VAR_6->i_sb);
 struct msdos_dir_entry VAR_14;
 __le16 VAR_15, VAR_16;
 int VAR_17;

 FUNC_8(VAR_14.name, VAR_7, VAR_3);
 VAR_14.attr = VAR_8 ? VAR_1 : VAR_0;
 if (VAR_9)
  VAR_14.attr |= VAR_2;
 VAR_14.lcase = 0;
 FUNC_5(VAR_13, VAR_11, &VAR_15, &VAR_16, ((void*)0));
 VAR_14.cdate = VAR_14.adate = 0;
 VAR_14.ctime = 0;
 VAR_14.ctime_cs = 0;
 VAR_14.time = VAR_15;
 VAR_14.date = VAR_16;
 FUNC_3(&VAR_14, VAR_10);
 VAR_14.size = 0;

 VAR_17 = FUNC_2(VAR_6, &VAR_14, 1, VAR_12);
 if (VAR_17)
  return VAR_17;

 FUNC_6(VAR_6, VAR_11, VAR_4|VAR_5);
 if (FUNC_0(VAR_6))
  (void)FUNC_4(VAR_6);
 else
  FUNC_7(VAR_6);

 return 0;
}
