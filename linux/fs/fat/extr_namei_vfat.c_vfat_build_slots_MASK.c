
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int u8 ;
struct timespec64 {int dummy; } ;
struct fat_mount_options {int utf8; int unicode_xlate; } ;
struct msdos_sb_info {int nls_disk; int nls_io; struct fat_mount_options options; } ;
struct msdos_dir_slot {int id; unsigned char alias_checksum; int name11_12; int name5_10; int name0_4; scalar_t__ start; scalar_t__ reserved; int attr; } ;
struct msdos_dir_entry {unsigned char lcase; scalar_t__ size; int ctime_cs; void* adate; void* cdate; void* date; void* ctime; void* time; int attr; int name; } ;
struct inode {int i_sb; } ;
typedef int loff_t ;
typedef void* __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct msdos_sb_info* FUNC_0 (int ) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 unsigned char FUNC_3 (unsigned char*) ;
 int FUNC_4 (struct msdos_dir_entry*,int) ;
 int FUNC_5 (struct msdos_sb_info*,struct timespec64*,void**,void**,int *) ;
 int FUNC_6 (int ,int *,int) ;
 int FUNC_7 (int ,unsigned char*,int) ;
 int FUNC_8 (struct inode*,int ,int *,int,unsigned char*,unsigned char*) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (unsigned char const*,int,unsigned char*,int*,int*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_11(struct inode *VAR_5, const unsigned char *VAR_6,
       int VAR_7, int VAR_8, int VAR_9,
       struct timespec64 *VAR_10,
       struct msdos_dir_slot *VAR_11, int *VAR_12)
{
 struct msdos_sb_info *VAR_13 = FUNC_0(VAR_5->i_sb);
 struct fat_mount_options *VAR_14 = &VAR_13->options;
 struct msdos_dir_slot *VAR_15;
 struct msdos_dir_entry *VAR_16;
 unsigned char VAR_17, VAR_18;
 unsigned char VAR_19[VAR_4];
 wchar_t *VAR_20;
 __le16 VAR_21, VAR_22;
 u8 VAR_23;
 int VAR_24, VAR_25, VAR_26, VAR_27;
 loff_t VAR_28;

 *VAR_12 = 0;

 VAR_20 = FUNC_1();
 if (!VAR_20)
  return -VAR_3;

 VAR_24 = FUNC_10(VAR_6, VAR_7, (unsigned char *)VAR_20, &VAR_25, &VAR_26,
      VAR_14->unicode_xlate, VAR_14->utf8, VAR_13->nls_io);
 if (VAR_24)
  goto out_free;

 VAR_24 = FUNC_9(VAR_20, VAR_25);
 if (VAR_24)
  goto out_free;

 VAR_24 = FUNC_8(VAR_5, VAR_13->nls_disk, VAR_20, VAR_25,
        VAR_19, &VAR_18);
 if (VAR_24 < 0)
  goto out_free;
 else if (VAR_24 == 1) {
  VAR_16 = (struct msdos_dir_entry *)VAR_11;
  VAR_24 = 0;
  goto shortname;
 }


 VAR_17 = FUNC_3(VAR_19);

 *VAR_12 = VAR_26 / 13;
 for (VAR_15 = VAR_11, VAR_27 = *VAR_12; VAR_27 > 0; VAR_27--, VAR_15++) {
  VAR_15->id = VAR_27;
  VAR_15->attr = VAR_2;
  VAR_15->reserved = 0;
  VAR_15->alias_checksum = VAR_17;
  VAR_15->start = 0;
  VAR_28 = (VAR_27 - 1) * 13;
  FUNC_6(VAR_15->name0_4, VAR_20 + VAR_28, 5);
  FUNC_6(VAR_15->name5_10, VAR_20 + VAR_28 + 5, 6);
  FUNC_6(VAR_15->name11_12, VAR_20 + VAR_28 + 11, 2);
 }
 VAR_11[0].id |= 0x40;
 VAR_16 = (struct msdos_dir_entry *)VAR_15;

shortname:

 (*VAR_12)++;
 FUNC_7(VAR_16->name, VAR_19, VAR_4);
 VAR_16->attr = VAR_8 ? VAR_1 : VAR_0;
 VAR_16->lcase = VAR_18;
 FUNC_5(VAR_13, VAR_10, &VAR_21, &VAR_22, &VAR_23);
 VAR_16->time = VAR_16->ctime = VAR_21;
 VAR_16->date = VAR_16->cdate = VAR_16->adate = VAR_22;
 VAR_16->ctime_cs = VAR_23;
 FUNC_4(VAR_16, VAR_9);
 VAR_16->size = 0;
out_free:
 FUNC_2(VAR_20);
 return VAR_24;
}
