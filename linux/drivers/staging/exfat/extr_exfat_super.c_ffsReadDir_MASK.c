
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct uni_name_t {int* name; } ;
struct timestamp_t {int sec; int min; int hour; int day; int mon; int year; } ;
struct super_block {int dummy; } ;
struct inode {struct super_block* i_sb; } ;
struct fs_info_t {scalar_t__ root_dir; int cluster_size_bits; int dentries_in_root; int dentries_per_clu; scalar_t__ vol_type; int v_sem; scalar_t__ dev_ejected; struct fs_func* fs_func; } ;
struct fs_func {scalar_t__ (* get_entry_type ) (struct dentry_t*) ;int (* get_entry_size ) (struct dentry_t*) ;int (* get_uni_name_from_ext_entry ) (struct super_block*,struct chain_t*,int,int*) ;int (* get_entry_time ) (struct dentry_t*,struct timestamp_t*,int ) ;int (* get_entry_attr ) (struct dentry_t*) ;} ;
struct file_id_t {scalar_t__ type; int entry; scalar_t__ start_clu; int size; int flags; int hint_last_off; scalar_t__ hint_last_clu; void* rwoffset; } ;
struct dos_dentry_t {int dummy; } ;
struct TYPE_6__ {scalar_t__ MilliSecond; int Second; int Minute; int Hour; int Day; int Month; int Year; } ;
struct TYPE_5__ {scalar_t__ MilliSecond; int Second; int Minute; int Hour; int Day; int Month; int Year; } ;
struct dir_entry_t {char* Name; char* ShortName; int Size; int AccessTimestamp; TYPE_2__ ModifyTimestamp; TYPE_1__ CreateTimestamp; int Attr; } ;
struct dentry_t {int dummy; } ;
struct date_time_t {int dummy; } ;
struct chain_t {scalar_t__ dir; int flags; int size; } ;
typedef int sector_t ;
typedef void* s64 ;
typedef int s32 ;
struct TYPE_8__ {struct file_id_t fid; } ;
struct TYPE_7__ {struct fs_info_t fs_info; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 TYPE_4__* FUNC_1 (struct inode*) ;
 TYPE_3__* FUNC_2 (struct super_block*) ;
 int FUNC_3 (struct super_block*,scalar_t__,scalar_t__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_4 (struct super_block*,int ) ;
 int FUNC_5 (struct super_block*,int ) ;
 int FUNC_6 (int *) ;
 struct dentry_t* FUNC_7 (struct super_block*,struct chain_t*,int,int *) ;
 int FUNC_8 (struct super_block*,struct dos_dentry_t*,struct uni_name_t*,int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (char*,int ,int) ;
 int FUNC_11 (struct super_block*,char*,struct uni_name_t*) ;
 scalar_t__ FUNC_12 (struct dentry_t*) ;
 int FUNC_13 (struct dentry_t*) ;
 int FUNC_14 (struct dentry_t*,struct timestamp_t*,int ) ;
 int FUNC_15 (struct dentry_t*,struct timestamp_t*,int ) ;
 int FUNC_16 (struct super_block*,struct chain_t*,int,int*) ;
 int FUNC_17 (struct dentry_t*) ;
 int FUNC_18 (int *) ;

__attribute__((used)) static int FUNC_19(struct inode *VAR_10, struct dir_entry_t *VAR_11)
{
 int VAR_12, VAR_13, VAR_14;
 int VAR_15 = VAR_4;
 s32 VAR_16, VAR_17 = 0;
 u32 VAR_18;
 sector_t VAR_19;
 struct chain_t VAR_20, VAR_21;
 struct uni_name_t VAR_22;
 struct timestamp_t VAR_23;
 struct dentry_t *VAR_24;
 struct super_block *VAR_25 = VAR_10->i_sb;
 struct fs_info_t *VAR_26 = &(FUNC_2(VAR_25)->fs_info);
 struct fs_func *VAR_27 = VAR_26->fs_func;
 struct file_id_t *VAR_28 = &(FUNC_1(VAR_10)->fid);


 if (!VAR_11)
  return VAR_1;


 if (VAR_28->type != VAR_7)
  return VAR_3;


 FUNC_6(&VAR_26->v_sem);

 if (VAR_28->entry == -1) {
  VAR_20.dir = VAR_26->root_dir;
  VAR_20.flags = 0x01;
 } else {
  VAR_20.dir = VAR_28->start_clu;
  VAR_20.size = (s32)(VAR_28->size >> VAR_26->cluster_size_bits);
  VAR_20.flags = VAR_28->flags;
 }

 VAR_13 = (s32)VAR_28->rwoffset;

 if (VAR_20.dir == FUNC_0(0)) {

  VAR_16 = VAR_26->dentries_in_root;

  if (VAR_13 == VAR_16) {
   VAR_21.dir = FUNC_0(~0);
  } else {
   VAR_21.dir = VAR_20.dir;
   VAR_21.size = VAR_20.size;
   VAR_21.flags = VAR_20.flags;
  }
 } else {
  VAR_16 = VAR_26->dentries_per_clu;
  VAR_17 = FUNC_9(VAR_16);

  VAR_14 = VAR_13 >> VAR_17;
  VAR_21.dir = VAR_20.dir;
  VAR_21.size = VAR_20.size;
  VAR_21.flags = VAR_20.flags;

  if (VAR_21.flags == 0x03) {
   VAR_21.dir += VAR_14;
   VAR_21.size -= VAR_14;
  } else {

   if ((VAR_14 > 0) && (VAR_28->hint_last_off > 0) &&
       (VAR_14 >= VAR_28->hint_last_off)) {
    VAR_14 -= VAR_28->hint_last_off;
    VAR_21.dir = VAR_28->hint_last_clu;
   }

   while (VAR_14 > 0) {

    if (FUNC_3(VAR_25, VAR_21.dir, &VAR_21.dir) == -1) {
     VAR_15 = VAR_2;
     goto out;
    }
    VAR_14--;
   }
  }
 }

 while (VAR_21.dir != FUNC_0(~0)) {
  if (VAR_26->dev_ejected)
   break;

  if (VAR_20.dir == FUNC_0(0))
   VAR_12 = VAR_13 % VAR_16;
  else
   VAR_12 = VAR_13 & (VAR_16 - 1);

  for ( ; VAR_12 < VAR_16; VAR_12++, VAR_13++) {
   VAR_24 = FUNC_7(VAR_25, &VAR_21, VAR_12, &VAR_19);
   if (!VAR_24) {
    VAR_15 = VAR_2;
    goto out;
   }
   VAR_18 = VAR_27->get_entry_type(VAR_24);

   if (VAR_18 == VAR_9)
    break;

   if ((VAR_18 != VAR_8) && (VAR_18 != VAR_7))
    continue;

   FUNC_4(VAR_25, VAR_19);
   VAR_11->Attr = VAR_27->get_entry_attr(VAR_24);

   VAR_27->get_entry_time(VAR_24, &VAR_23, VAR_5);
   VAR_11->CreateTimestamp.Year = VAR_23.year;
   VAR_11->CreateTimestamp.Month = VAR_23.mon;
   VAR_11->CreateTimestamp.Day = VAR_23.day;
   VAR_11->CreateTimestamp.Hour = VAR_23.hour;
   VAR_11->CreateTimestamp.Minute = VAR_23.min;
   VAR_11->CreateTimestamp.Second = VAR_23.sec;
   VAR_11->CreateTimestamp.MilliSecond = 0;

   VAR_27->get_entry_time(VAR_24, &VAR_23, VAR_6);
   VAR_11->ModifyTimestamp.Year = VAR_23.year;
   VAR_11->ModifyTimestamp.Month = VAR_23.mon;
   VAR_11->ModifyTimestamp.Day = VAR_23.day;
   VAR_11->ModifyTimestamp.Hour = VAR_23.hour;
   VAR_11->ModifyTimestamp.Minute = VAR_23.min;
   VAR_11->ModifyTimestamp.Second = VAR_23.sec;
   VAR_11->ModifyTimestamp.MilliSecond = 0;

   FUNC_10((char *)&VAR_11->AccessTimestamp, 0,
          sizeof(struct date_time_t));

   *(VAR_22.name) = 0x0;
   VAR_27->get_uni_name_from_ext_entry(VAR_25, &VAR_20, VAR_13,
            VAR_22.name);
   if (*VAR_22.name == 0x0 && VAR_26->vol_type != VAR_0)
    FUNC_8(VAR_25,
      (struct dos_dentry_t *)VAR_24,
      &VAR_22, 0x1);
   FUNC_11(VAR_25, VAR_11->Name, &VAR_22);
   FUNC_5(VAR_25, VAR_19);

   if (VAR_26->vol_type == VAR_0) {
    VAR_24 = FUNC_7(VAR_25, &VAR_21, VAR_12 + 1, ((void*)0));
    if (!VAR_24) {
     VAR_15 = VAR_2;
     goto out;
    }
   } else {
    FUNC_8(VAR_25,
      (struct dos_dentry_t *)VAR_24,
      &VAR_22, 0x0);
    FUNC_11(VAR_25, VAR_11->ShortName,
             &VAR_22);
   }

   VAR_11->Size = VAR_27->get_entry_size(VAR_24);


   if (VAR_20.dir == FUNC_0(0)) {
   } else {
    VAR_28->hint_last_off = VAR_13 >>
       VAR_17;
    VAR_28->hint_last_clu = VAR_21.dir;
   }

   VAR_28->rwoffset = (s64)(++VAR_13);

   if (VAR_26->dev_ejected)
    VAR_15 = VAR_2;
   goto out;
  }

  if (VAR_20.dir == FUNC_0(0))
   break;

  if (VAR_21.flags == 0x03) {
   if ((--VAR_21.size) > 0)
    VAR_21.dir++;
   else
    VAR_21.dir = FUNC_0(~0);
  } else {

   if (FUNC_3(VAR_25, VAR_21.dir, &VAR_21.dir) == -1) {
    VAR_15 = VAR_2;
    goto out;
   }
  }
 }

 *(VAR_11->Name) = '\0';

 VAR_28->rwoffset = (s64)(++VAR_13);

 if (VAR_26->dev_ejected)
  VAR_15 = VAR_2;

out:

 FUNC_18(&VAR_26->v_sem);

 return VAR_15;
}
