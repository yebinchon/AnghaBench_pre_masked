
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct writeback_control {int dummy; } ;
struct page {unsigned int index; TYPE_1__* mapping; } ;
struct inode {TYPE_3__* i_sb; } ;
struct ext4_io_submit {int io_end; } ;
struct buffer_head {int dummy; } ;
typedef unsigned int loff_t ;
struct TYPE_6__ {unsigned int s_blocksize; } ;
struct TYPE_5__ {int flags; } ;
struct TYPE_4__ {struct inode* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct page*,unsigned int) ;
 TYPE_2__* VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (struct ext4_io_submit*,struct page*,unsigned int,struct writeback_control*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct inode*,int ) ;
 int FUNC_7 (struct page*,int ,unsigned int) ;
 int FUNC_8 (struct ext4_io_submit*) ;
 int FUNC_9 (struct ext4_io_submit*,struct writeback_control*) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (struct inode*) ;
 int FUNC_12 (struct inode*) ;
 scalar_t__ FUNC_13 (int *,struct buffer_head*,int ,unsigned int,int *,int ) ;
 unsigned int FUNC_14 (struct inode*) ;
 struct buffer_head* FUNC_15 (struct page*) ;
 int FUNC_16 (struct writeback_control*,struct page*) ;
 int FUNC_17 (struct page*) ;
 scalar_t__ FUNC_18 (int ) ;
 int FUNC_19 (struct page*) ;

__attribute__((used)) static int FUNC_20(struct page *VAR_10,
     struct writeback_control *VAR_11)
{
 int VAR_12 = 0;
 loff_t VAR_13;
 unsigned int VAR_14;
 struct buffer_head *VAR_15 = ((void*)0);
 struct inode *VAR_16 = VAR_10->mapping->host;
 struct ext4_io_submit VAR_17;
 bool VAR_18 = 0;

 if (FUNC_18(FUNC_5(FUNC_0(VAR_16->i_sb)))) {
  FUNC_7(VAR_10, 0, VAR_5);
  FUNC_19(VAR_10);
  return -VAR_0;
 }

 FUNC_17(VAR_10);
 VAR_13 = FUNC_14(VAR_16);
 if (VAR_10->index == VAR_13 >> VAR_4 &&
     !FUNC_12(VAR_16))
  VAR_14 = VAR_13 & ~VAR_3;
 else
  VAR_14 = VAR_5;

 VAR_15 = FUNC_15(VAR_10);
 if (FUNC_13(((void*)0), VAR_15, 0, VAR_14, ((void*)0),
       VAR_9)) {
  FUNC_16(VAR_11, VAR_10);
  if ((VAR_8->flags & VAR_7) ||
      (VAR_16->i_sb->s_blocksize == VAR_5)) {





   FUNC_2((VAR_8->flags & (VAR_7|VAR_6))
       == VAR_7);
   FUNC_19(VAR_10);
   return 0;
  }
  VAR_18 = 1;
 }

 if (FUNC_1(VAR_10) && FUNC_11(VAR_16))




  return FUNC_3(VAR_10, VAR_14);

 FUNC_9(&VAR_17, VAR_11);
 VAR_17.io_end = FUNC_6(VAR_16, VAR_2);
 if (!VAR_17.io_end) {
  FUNC_16(VAR_11, VAR_10);
  FUNC_19(VAR_10);
  return -VAR_1;
 }
 VAR_12 = FUNC_4(&VAR_17, VAR_10, VAR_14, VAR_11, VAR_18);
 FUNC_8(&VAR_17);

 FUNC_10(VAR_17.io_end);
 return VAR_12;
}
