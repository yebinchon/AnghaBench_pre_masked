
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kiocb {scalar_t__ ki_pos; int * private; struct file* ki_filp; } ;
struct iov_iter {int dummy; } ;
struct inode {scalar_t__ i_size; scalar_t__ i_nlink; TYPE_2__* i_sb; } ;
struct file {TYPE_1__* f_mapping; } ;
struct ext4_inode_info {scalar_t__ i_disksize; } ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ loff_t ;
typedef int handle_t ;
typedef int get_block_t ;
struct TYPE_4__ {int s_bdev; } ;
struct TYPE_3__ {struct inode* host; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ext4_inode_info* FUNC_1 (struct inode*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct kiocb*,struct inode*,int ,struct iov_iter*,int *,int ,int *,int) ;
 int FUNC_5 (struct inode*,int ) ;
 int FUNC_6 (int *,struct inode*,scalar_t__,scalar_t__) ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int VAR_9 ;
 int * FUNC_7 (struct inode*,int ,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,struct inode*) ;
 scalar_t__ FUNC_10 (int *,struct inode*) ;
 int FUNC_11 (int *,struct inode*) ;
 int FUNC_12 (struct inode*,int ) ;
 scalar_t__ FUNC_13 (struct inode*,int ) ;
 int FUNC_14 (struct inode*) ;
 int FUNC_15 (struct inode*,scalar_t__) ;
 int FUNC_16 (struct inode*) ;
 int FUNC_17 (struct inode*,scalar_t__) ;
 int FUNC_18 (struct inode*) ;
 int FUNC_19 (struct inode*) ;
 int FUNC_20 (struct inode*) ;
 int FUNC_21 (struct inode*) ;
 size_t FUNC_22 (struct iov_iter*) ;
 scalar_t__ FUNC_23 (struct kiocb*) ;
 scalar_t__ FUNC_24 (scalar_t__,int ) ;

__attribute__((used)) static ssize_t FUNC_25(struct kiocb *VAR_10, struct iov_iter *VAR_11)
{
 struct file *VAR_12 = VAR_10->ki_filp;
 struct inode *VAR_13 = VAR_12->f_mapping->host;
 struct ext4_inode_info *VAR_14 = FUNC_1(VAR_13);
 ssize_t VAR_15;
 loff_t VAR_16 = VAR_10->ki_pos;
 size_t VAR_17 = FUNC_22(VAR_11);
 int VAR_18 = 0;
 get_block_t *VAR_19 = ((void*)0);
 int VAR_20 = 0;
 loff_t VAR_21 = VAR_16 + VAR_17;
 int VAR_22 = 0;
 handle_t *VAR_23;

 if (VAR_21 > VAR_13->i_size || VAR_21 > VAR_14->i_disksize) {

  VAR_23 = FUNC_7(VAR_13, VAR_2, 2);
  if (FUNC_2(VAR_23)) {
   VAR_15 = FUNC_3(VAR_23);
   goto out;
  }
  VAR_15 = FUNC_10(VAR_23, VAR_13);
  if (VAR_15) {
   FUNC_8(VAR_23);
   goto out;
  }
  VAR_22 = 1;
  FUNC_15(VAR_13, VAR_13->i_size);
  FUNC_8(VAR_23);
 }

 FUNC_0(VAR_10->private == ((void*)0));






 FUNC_18(VAR_13);


 VAR_18 = *((int *)VAR_10->private);

 if (VAR_18)
  FUNC_21(VAR_13);
 VAR_10->private = ((void*)0);
 if (VAR_18)
  VAR_19 = VAR_6;
 else if (!FUNC_12(VAR_13, VAR_3) ||
     FUNC_24(VAR_16, FUNC_16(VAR_13)) >= VAR_13->i_size) {
  VAR_19 = VAR_5;
  VAR_20 = VAR_0 | VAR_1;
 } else if (FUNC_23(VAR_10)) {
  VAR_19 = VAR_8;
  VAR_20 = VAR_0;
 } else {
  VAR_19 = VAR_7;
  VAR_20 = VAR_0;
 }
 VAR_15 = FUNC_4(VAR_10, VAR_13, VAR_13->i_sb->s_bdev, VAR_11,
       VAR_19, VAR_9, ((void*)0),
       VAR_20);

 if (VAR_15 > 0 && !VAR_18 && FUNC_13(VAR_13,
      VAR_4)) {
  int VAR_24;




  VAR_24 = FUNC_6(((void*)0), VAR_13,
           VAR_16, VAR_15);
  if (VAR_24 < 0)
   VAR_15 = VAR_24;
  FUNC_5(VAR_13, VAR_4);
 }

 FUNC_19(VAR_13);

 if (VAR_18)
  FUNC_20(VAR_13);

 if (VAR_15 < 0 && VAR_21 > VAR_13->i_size)
  FUNC_14(VAR_13);


 if (VAR_22) {
  int VAR_25;


  VAR_23 = FUNC_7(VAR_13, VAR_2, 2);
  if (FUNC_2(VAR_23)) {
   if (!VAR_15)
    VAR_15 = FUNC_3(VAR_23);
   if (VAR_13->i_nlink)
    FUNC_11(((void*)0), VAR_13);

   goto out;
  }
  if (VAR_13->i_nlink)
   FUNC_11(VAR_23, VAR_13);
  if (VAR_15 > 0) {
   loff_t VAR_26 = VAR_16 + VAR_15;
   if (VAR_26 > VAR_13->i_size || VAR_26 > VAR_14->i_disksize) {
    FUNC_15(VAR_13, VAR_26);
    if (VAR_26 > VAR_13->i_size)
     FUNC_17(VAR_13, VAR_26);







    FUNC_9(VAR_23, VAR_13);
   }
  }
  VAR_25 = FUNC_8(VAR_23);
  if (VAR_15 == 0)
   VAR_15 = VAR_25;
 }
out:
 return VAR_15;
}
