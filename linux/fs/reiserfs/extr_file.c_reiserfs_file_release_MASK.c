
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct reiserfs_transaction_handle {int dummy; } ;
struct inode {int i_sb; int i_ino; int i_mode; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int i_flags; scalar_t__ i_prealloc_count; int tailpack; int openers; } ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *,int,int) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct reiserfs_transaction_handle*,int ,int) ;
 int FUNC_7 (struct reiserfs_transaction_handle*) ;
 int FUNC_8 (struct reiserfs_transaction_handle*,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct reiserfs_transaction_handle*,struct inode*) ;
 int FUNC_12 (struct inode*,int ) ;
 int FUNC_13 (struct inode*) ;
 int FUNC_14 (int ,char*,char*,int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (struct inode*) ;

__attribute__((used)) static int FUNC_18(struct inode *VAR_1, struct file *VAR_2)
{

 struct reiserfs_transaction_handle VAR_3;
 int VAR_4;
 int VAR_5 = 0;

 FUNC_0(!FUNC_2(VAR_1->i_mode));

        if (FUNC_3(&FUNC_1(VAR_1)->openers, -1, 1))
  return 0;

 FUNC_9(&FUNC_1(VAR_1)->tailpack);

        if (!FUNC_4(&FUNC_1(VAR_1)->openers)) {
  FUNC_10(&FUNC_1(VAR_1)->tailpack);
  return 0;
 }


 if ((!(FUNC_1(VAR_1)->i_flags & VAR_0) ||
      !FUNC_17(VAR_1)) &&
     FUNC_1(VAR_1)->i_prealloc_count <= 0) {
  FUNC_10(&FUNC_1(VAR_1)->tailpack);
  return 0;
 }

 FUNC_15(VAR_1->i_sb);






 VAR_4 = FUNC_6(&VAR_3, VAR_1->i_sb, 1);
 if (VAR_4) {





  VAR_5 = VAR_4;
  VAR_4 = FUNC_8(&VAR_3, VAR_1->i_sb);

  if (VAR_4) {
   FUNC_5(VAR_1);
   FUNC_14(VAR_1->i_sb, "clm-9001",
      "pinning inode %lu because the "
      "preallocation can't be freed",
      VAR_1->i_ino);
   goto out;
  }
 }
 FUNC_13(VAR_1);




 VAR_4 = FUNC_7(&VAR_3);


 if (!VAR_4)
  VAR_4 = VAR_5;

 if (!VAR_4 &&
     (FUNC_1(VAR_1)->i_flags & VAR_0) &&
     FUNC_17(VAR_1)) {







  VAR_4 = FUNC_12(VAR_1, 0);
 }
out:
 FUNC_16(VAR_1->i_sb);
 FUNC_10(&FUNC_1(VAR_1)->tailpack);
 return VAR_4;
}
