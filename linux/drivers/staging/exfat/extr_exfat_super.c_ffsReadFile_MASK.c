
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct super_block {int dummy; } ;
struct inode {struct super_block* i_sb; } ;
struct fs_info_t {int cluster_size_bits; int cluster_size; int v_sem; scalar_t__ dev_ejected; } ;
struct file_id_t {scalar_t__ type; int rwoffset; int size; int flags; scalar_t__ hint_last_off; int hint_last_clu; int start_clu; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct bd_info_t {scalar_t__ sector_size_bits; scalar_t__ sector_size_mask; scalar_t__ sector_size; } ;
typedef scalar_t__ sector_t ;
typedef scalar_t__ s32 ;
struct TYPE_2__ {struct bd_info_t bd_info; struct fs_info_t fs_info; } ;


 TYPE_1__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct super_block*,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,char*,scalar_t__) ;
 scalar_t__ FUNC_6 (struct super_block*,scalar_t__,struct buffer_head**,int) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_7, struct file_id_t *VAR_8, void *VAR_9,
         u64 VAR_10, u64 *VAR_11)
{
 s32 VAR_12, VAR_13, VAR_14;
 u32 VAR_15;
 int VAR_16 = 0;
 sector_t VAR_17;
 u64 VAR_18, VAR_19;
 struct buffer_head *VAR_20 = ((void*)0);
 struct super_block *VAR_21 = VAR_7->i_sb;
 struct fs_info_t *VAR_22 = &(FUNC_0(VAR_21)->fs_info);
 struct bd_info_t *VAR_23 = &(FUNC_0(VAR_21)->bd_info);


 if (!VAR_8)
  return VAR_2;


 if (!VAR_9)
  return VAR_1;


 FUNC_4(&VAR_22->v_sem);


 if (VAR_8->type != VAR_6) {
  VAR_16 = VAR_4;
  goto out;
 }

 if (VAR_8->rwoffset > VAR_8->size)
  VAR_8->rwoffset = VAR_8->size;

 if (VAR_10 > (VAR_8->size - VAR_8->rwoffset))
  VAR_10 = VAR_8->size - VAR_8->rwoffset;

 if (VAR_10 == 0) {
  if (VAR_11)
   *VAR_11 = 0;
  VAR_16 = VAR_0;
  goto out;
 }

 VAR_19 = 0;

 while (VAR_10 > 0) {
  VAR_14 = (s32)(VAR_8->rwoffset >> VAR_22->cluster_size_bits);
  VAR_15 = VAR_8->start_clu;

  if (VAR_8->flags == 0x03) {
   VAR_15 += VAR_14;
  } else {

   if ((VAR_14 > 0) && (VAR_8->hint_last_off > 0) &&
       (VAR_14 >= VAR_8->hint_last_off)) {
    VAR_14 -= VAR_8->hint_last_off;
    VAR_15 = VAR_8->hint_last_clu;
   }

   while (VAR_14 > 0) {

    if (FUNC_1(VAR_21, VAR_15, &VAR_15) == -1)
     return VAR_3;

    VAR_14--;
   }
  }


  VAR_8->hint_last_off = (s32)(VAR_8->rwoffset >>
        VAR_22->cluster_size_bits);
  VAR_8->hint_last_clu = VAR_15;


  VAR_12 = (s32)(VAR_8->rwoffset & (VAR_22->cluster_size - 1));


  VAR_13 = VAR_12 >> VAR_23->sector_size_bits;


  VAR_12 &= VAR_23->sector_size_mask;

  VAR_17 = FUNC_2(VAR_15) + VAR_13;

  VAR_18 = (u64)(VAR_23->sector_size - VAR_12);
  if (VAR_18 > VAR_10)
   VAR_18 = VAR_10;

  if ((VAR_12 == 0) && (VAR_18 == VAR_23->sector_size)) {
   if (FUNC_6(VAR_21, VAR_17, &VAR_20, 1) !=
       VAR_5)
    goto err_out;
   FUNC_5((char *)VAR_9 + VAR_19,
          (char *)VAR_20->b_data, (s32)VAR_18);
  } else {
   if (FUNC_6(VAR_21, VAR_17, &VAR_20, 1) !=
       VAR_5)
    goto err_out;
   FUNC_5((char *)VAR_9 + VAR_19,
          (char *)VAR_20->b_data + VAR_12,
          (s32)VAR_18);
  }
  VAR_10 -= VAR_18;
  VAR_19 += VAR_18;
  VAR_8->rwoffset += VAR_18;
 }
 FUNC_3(VAR_20);


err_out:

 if (VAR_11)
  *VAR_11 = VAR_19;

 if (VAR_22->dev_ejected)
  VAR_16 = VAR_3;

out:

 FUNC_7(&VAR_22->v_sem);

 return VAR_16;
}
