
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct reiserfs_transaction_handle {int dummy; } ;
struct page {TYPE_1__* mapping; } ;
struct inode {unsigned int i_size; int i_sb; } ;
struct file {int dummy; } ;
struct address_space {int dummy; } ;
typedef int loff_t ;
struct TYPE_6__ {int i_flags; } ;
struct TYPE_5__ {struct reiserfs_transaction_handle* journal_info; } ;
struct TYPE_4__ {struct inode* host; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct page*) ;
 TYPE_3__* FUNC_1 (struct inode*) ;
 TYPE_2__* VAR_2 ;
 int FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct inode*) ;
 int VAR_3 ;
 int FUNC_6 (struct reiserfs_transaction_handle*,int ,int) ;
 int FUNC_7 (struct reiserfs_transaction_handle*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct page*,unsigned int,unsigned int) ;
 int FUNC_10 (struct page*) ;
 int FUNC_11 (struct inode*,struct page*,unsigned int,unsigned int) ;
 int FUNC_12 (struct reiserfs_transaction_handle*) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (struct inode*) ;
 int FUNC_15 (struct inode*) ;
 int FUNC_16 (struct reiserfs_transaction_handle*,struct inode*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 scalar_t__ FUNC_20 (int) ;
 int FUNC_21 (struct page*) ;

__attribute__((used)) static int FUNC_22(struct file *VAR_4, struct address_space *VAR_5,
         loff_t VAR_6, unsigned VAR_7, unsigned VAR_8,
         struct page *VAR_9, void *VAR_10)
{
 struct inode *VAR_11 = VAR_9->mapping->host;
 int VAR_12 = 0;
 int VAR_13 = 0;
 struct reiserfs_transaction_handle *VAR_14;
 unsigned VAR_15;
 bool VAR_16 = 0;

 if ((unsigned long)VAR_10 & VAR_0)
  VAR_6 ++;

 FUNC_17(VAR_11->i_sb);
 if (FUNC_13(VAR_11->i_sb))
  VAR_14 = VAR_2->journal_info;
 else
  VAR_14 = ((void*)0);

 VAR_15 = VAR_6 & (VAR_1 - 1);
 if (FUNC_20(VAR_8 < VAR_7)) {
  if (!FUNC_0(VAR_9))
   VAR_8 = 0;

  FUNC_9(VAR_9, VAR_15 + VAR_8, VAR_15 + VAR_7);
 }
 FUNC_2(VAR_9);

 FUNC_11(VAR_11, VAR_9, VAR_15, VAR_15 + VAR_8);






 if (VAR_6 + VAR_8 > VAR_11->i_size) {
  struct reiserfs_transaction_handle VAR_17;
  FUNC_18(VAR_11->i_sb);
  VAR_16 = 1;





  if ((FUNC_3(VAR_11->i_sb)
       && VAR_11->i_size > FUNC_5(VAR_11) * 4)
      || (FUNC_4(VAR_11->i_sb)
   && VAR_11->i_size > FUNC_5(VAR_11)))
   FUNC_1(VAR_11)->i_flags &= ~VAR_3;

  VAR_12 = FUNC_6(&VAR_17, VAR_11->i_sb, 1);
  if (VAR_12)
   goto journal_error;

  FUNC_15(VAR_11);
  VAR_11->i_size = VAR_6 + VAR_8;





  FUNC_8(VAR_11);
  FUNC_16(&VAR_17, VAR_11);
  VAR_13 = 1;
  VAR_12 = FUNC_7(&VAR_17);
  if (VAR_12)
   goto journal_error;
 }
 if (VAR_14) {
  if (!VAR_16) {
   FUNC_18(VAR_11->i_sb);
   VAR_16 = 1;
  }
  if (!VAR_13)
   FUNC_8(VAR_11);
  VAR_12 = FUNC_12(VAR_14);
  if (VAR_12)
   goto out;
 }

out:
 if (VAR_16)
  FUNC_19(VAR_11->i_sb);
 FUNC_21(VAR_9);
 FUNC_10(VAR_9);

 if (VAR_6 + VAR_7 > VAR_11->i_size)
  FUNC_14(VAR_11);

 return VAR_12 == 0 ? VAR_8 : VAR_12;

journal_error:
 FUNC_19(VAR_11->i_sb);
 VAR_16 = 0;
 if (VAR_14) {
  if (!VAR_13)
   FUNC_16(VAR_14, VAR_11);
  VAR_12 = FUNC_12(VAR_14);
 }
 goto out;
}
