
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef void* u32 ;
struct inode {TYPE_4__* i_sb; int i_mode; } ;
struct ext2_inode_info {int truncate_mutex; int i_block_alloc_info; } ;
typedef int sector_t ;
typedef scalar_t__ ext2_fsblk_t ;
struct TYPE_12__ {int s_bdev; } ;
struct TYPE_11__ {int key; int bh; int * p; } ;
typedef TYPE_1__ Indirect ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct ext2_inode_info* FUNC_1 (struct inode*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,void*,int) ;
 int FUNC_6 (struct inode*,int,int*,scalar_t__,int*,TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int,unsigned long,int) ;
 int FUNC_8 (struct inode*,int ,int*,int*) ;
 scalar_t__ FUNC_9 (struct inode*,int ,TYPE_1__*) ;
 TYPE_1__* FUNC_10 (struct inode*,int,int*,TYPE_1__*,int*) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (struct inode*,int ,TYPE_1__*,int,int) ;
 void* FUNC_13 (int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (TYPE_4__*,void*,int,int ) ;
 int FUNC_17 (TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_18(struct inode *VAR_3,
      sector_t VAR_4, unsigned long VAR_5,
      u32 *VAR_6, bool *VAR_7, bool *VAR_8,
      int VAR_9)
{
 int VAR_10;
 int VAR_11[4];
 Indirect VAR_12[4];
 Indirect *VAR_13;
 ext2_fsblk_t VAR_14;
 int VAR_15;
 int VAR_16 = 0;
 int VAR_17;
 struct ext2_inode_info *VAR_18 = FUNC_1(VAR_3);
 int VAR_19 = 0;
 ext2_fsblk_t VAR_20 = 0;

 FUNC_0(VAR_5 == 0);

 VAR_17 = FUNC_8(VAR_3,VAR_4,VAR_11,&VAR_16);

 if (VAR_17 == 0)
  return -VAR_1;

 VAR_13 = FUNC_10(VAR_3, VAR_17, VAR_11, VAR_12, &VAR_10);

 if (!VAR_13) {
  VAR_20 = FUNC_13(VAR_12[VAR_17 - 1].key);
  VAR_19++;

  while (VAR_19 < VAR_5 && VAR_19 <= VAR_16) {
   ext2_fsblk_t VAR_21;

   if (!FUNC_17(VAR_12, VAR_12 + VAR_17 - 1)) {






    VAR_10 = -VAR_0;
    VAR_19 = 0;
    VAR_13 = VAR_12 + VAR_17 - 1;
    break;
   }
   VAR_21 = FUNC_13(*(VAR_12[VAR_17-1].p + VAR_19));
   if (VAR_21 == VAR_20 + VAR_19)
    VAR_19++;
   else
    break;
  }
  if (VAR_10 != -VAR_0)
   goto got_it;
 }


 if (!VAR_9 || VAR_10 == -VAR_1)
  goto cleanup;

 FUNC_14(&VAR_18->truncate_mutex);
 if (VAR_10 == -VAR_0 || !FUNC_17(VAR_12, VAR_13)) {
  while (VAR_13 > VAR_12) {
   FUNC_4(VAR_13->bh);
   VAR_13--;
  }
  VAR_13 = FUNC_10(VAR_3, VAR_17, VAR_11, VAR_12, &VAR_10);
  if (!VAR_13) {
   VAR_19++;
   FUNC_15(&VAR_18->truncate_mutex);
   if (VAR_10)
    goto cleanup;
   goto got_it;
  }
 }





 if (FUNC_3(VAR_3->i_mode) && (!VAR_18->i_block_alloc_info))
  FUNC_11(VAR_3);

 VAR_14 = FUNC_9(VAR_3, VAR_4, VAR_13);


 VAR_15 = (VAR_12 + VAR_17) - VAR_13 - 1;




 VAR_19 = FUNC_7(VAR_13, VAR_15,
     VAR_5, VAR_16);



 VAR_10 = FUNC_6(VAR_3, VAR_15, &VAR_19, VAR_14,
    VAR_11 + (VAR_13 - VAR_12), VAR_13);

 if (VAR_10) {
  FUNC_15(&VAR_18->truncate_mutex);
  goto cleanup;
 }

 if (FUNC_2(VAR_3)) {




  FUNC_5(VAR_3->i_sb->s_bdev,
       FUNC_13(VAR_12[VAR_17-1].key),
       VAR_19);





  VAR_10 = FUNC_16(VAR_3->i_sb,
    FUNC_13(VAR_12[VAR_17-1].key), VAR_19,
    VAR_2);
  if (VAR_10) {
   FUNC_15(&VAR_18->truncate_mutex);
   goto cleanup;
  }
 }
 *VAR_7 = 1;

 FUNC_12(VAR_3, VAR_4, VAR_13, VAR_15, VAR_19);
 FUNC_15(&VAR_18->truncate_mutex);
got_it:
 if (VAR_19 > VAR_16)
  *VAR_8 = 1;
 VAR_10 = VAR_19;

 VAR_13 = VAR_12 + VAR_17 - 1;
cleanup:
 while (VAR_13 > VAR_12) {
  FUNC_4(VAR_13->bh);
  VAR_13--;
 }
 if (VAR_10 > 0)
  *VAR_6 = FUNC_13(VAR_12[VAR_17-1].key);
 return VAR_10;
}
