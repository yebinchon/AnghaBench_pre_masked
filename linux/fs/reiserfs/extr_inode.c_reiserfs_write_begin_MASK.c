
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct reiserfs_transaction_handle {int t_refcount; int t_trans_id; } ;
struct page {int dummy; } ;
struct inode {TYPE_1__* i_sb; } ;
struct file {int dummy; } ;
struct address_space {struct inode* host; } ;
typedef int pgoff_t ;
typedef int loff_t ;
struct TYPE_7__ {struct reiserfs_transaction_handle* journal_info; } ;
struct TYPE_6__ {int s_blocksize; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct page*,int,unsigned int,int ) ;
 TYPE_5__* VAR_3 ;
 int FUNC_2 (struct page*) ;
 struct page* FUNC_3 (struct address_space*,int,unsigned int) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct reiserfs_transaction_handle*) ;
 int VAR_4 ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (struct page*) ;

__attribute__((used)) static int FUNC_12(struct file *VAR_5,
    struct address_space *VAR_6,
    loff_t VAR_7, unsigned VAR_8, unsigned VAR_9,
    struct page **VAR_10, void **VAR_11)
{
 struct inode *VAR_12;
 struct page *VAR_13;
 pgoff_t VAR_14;
 int VAR_15;
 int VAR_16 = 0;

  VAR_12 = VAR_6->host;
 *VAR_11 = ((void*)0);
  if (VAR_9 & VAR_0 &&
      (VAR_7 & (VAR_12->i_sb->s_blocksize - 1)) == 0) {
   VAR_7 ++;
  *VAR_11 = (void *)(unsigned long)VAR_9;
 }

 VAR_14 = VAR_7 >> VAR_2;
 VAR_13 = FUNC_3(VAR_6, VAR_14, VAR_9);
 if (!VAR_13)
  return -VAR_1;
 *VAR_10 = VAR_13;

 FUNC_8(VAR_12->i_sb);
 FUNC_2(VAR_13);
 if (FUNC_6(VAR_12->i_sb)) {
  struct reiserfs_transaction_handle *VAR_17;
  VAR_17 = (struct reiserfs_transaction_handle *)VAR_3->
      journal_info;
  FUNC_0(!VAR_17->t_refcount);
  FUNC_0(!VAR_17->t_trans_id);
  VAR_16 = VAR_17->t_refcount;
  VAR_17->t_refcount++;
 }
 VAR_15 = FUNC_1(VAR_13, VAR_7, VAR_8, VAR_4);
 if (VAR_15 && FUNC_6(VAR_12->i_sb)) {
  struct reiserfs_transaction_handle *VAR_18 = VAR_3->journal_info;
  if (VAR_18->t_refcount > VAR_16) {
   if (VAR_16)
    VAR_18->t_refcount--;
   else {
    int VAR_19;
    FUNC_9(VAR_12->i_sb);
    VAR_19 = FUNC_5(VAR_18);
    FUNC_10(VAR_12->i_sb);
    if (VAR_19)
     VAR_15 = VAR_19;
   }
  }
 }
 if (VAR_15) {
  FUNC_11(VAR_13);
  FUNC_4(VAR_13);

  FUNC_7(VAR_12);
 }
 return VAR_15;
}
