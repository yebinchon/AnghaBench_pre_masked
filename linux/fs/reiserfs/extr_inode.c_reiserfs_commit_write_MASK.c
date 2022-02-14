
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct reiserfs_transaction_handle {int dummy; } ;
struct page {scalar_t__ index; TYPE_1__* mapping; } ;
struct inode {scalar_t__ i_size; int i_sb; } ;
struct file {int dummy; } ;
typedef scalar_t__ loff_t ;
struct TYPE_6__ {int i_flags; } ;
struct TYPE_5__ {struct reiserfs_transaction_handle* journal_info; } ;
struct TYPE_4__ {struct inode* host; } ;


 scalar_t__ VAR_0 ;
 TYPE_3__* FUNC_0 (struct inode*) ;
 TYPE_2__* VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct inode*) ;
 int VAR_2 ;
 int FUNC_4 (struct reiserfs_transaction_handle*,int ,int) ;
 int FUNC_5 (struct reiserfs_transaction_handle*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*,struct page*,unsigned int,unsigned int) ;
 int FUNC_8 (struct reiserfs_transaction_handle*) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct reiserfs_transaction_handle*,struct inode*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int) ;
 int FUNC_14 (int ) ;

int FUNC_15(struct file *VAR_3, struct page *VAR_4,
     unsigned VAR_5, unsigned VAR_6)
{
 struct inode *VAR_7 = VAR_4->mapping->host;
 loff_t VAR_8 = ((loff_t) VAR_4->index << VAR_0) + VAR_6;
 int VAR_9 = 0;
 int VAR_10 = 0;
 struct reiserfs_transaction_handle *VAR_11 = ((void*)0);
 int VAR_12;

 VAR_12 = FUNC_14(VAR_7->i_sb);
 FUNC_12(VAR_7->i_sb);
 FUNC_13(VAR_7->i_sb, VAR_12);

 if (FUNC_9(VAR_7->i_sb)) {
  VAR_11 = VAR_1->journal_info;
 }
 FUNC_7(VAR_7, VAR_4, VAR_5, VAR_6);






 if (VAR_8 > VAR_7->i_size) {
  struct reiserfs_transaction_handle VAR_13;





  if ((FUNC_1(VAR_7->i_sb)
       && VAR_7->i_size > FUNC_3(VAR_7) * 4)
      || (FUNC_2(VAR_7->i_sb)
   && VAR_7->i_size > FUNC_3(VAR_7)))
   FUNC_0(VAR_7)->i_flags &= ~VAR_2;

  VAR_9 = FUNC_4(&VAR_13, VAR_7->i_sb, 1);
  if (VAR_9)
   goto journal_error;

  FUNC_10(VAR_7);
  VAR_7->i_size = VAR_8;





  FUNC_6(VAR_7);
  FUNC_11(&VAR_13, VAR_7);
  VAR_10 = 1;
  VAR_9 = FUNC_5(&VAR_13);
  if (VAR_9)
   goto journal_error;
 }
 if (VAR_11) {
  if (!VAR_10)
   FUNC_6(VAR_7);
  VAR_9 = FUNC_8(VAR_11);
  if (VAR_9)
   goto out;
 }

out:
 return VAR_9;

journal_error:
 if (VAR_11) {
  if (!VAR_10)
   FUNC_11(VAR_11, VAR_7);
  VAR_9 = FUNC_8(VAR_11);
 }

 return VAR_9;
}
