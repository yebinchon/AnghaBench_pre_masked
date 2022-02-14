
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct reiserfs_transaction_handle {int dummy; } ;
struct inode {int i_state; scalar_t__ i_blocks; int i_sb; scalar_t__ i_nlink; int i_data; } ;
struct TYPE_2__ {scalar_t__ k_objectid; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;
 scalar_t__ FUNC_7 (struct reiserfs_transaction_handle*,int ,int) ;
 scalar_t__ FUNC_8 (struct reiserfs_transaction_handle*) ;
 int FUNC_9 (struct reiserfs_transaction_handle*,struct inode*) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct reiserfs_transaction_handle*,struct inode*) ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,int) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (struct inode*,int ) ;
 int FUNC_18 (int *) ;

void FUNC_19(struct inode *VAR_2)
{




 int VAR_3 =
     VAR_1 * 2 +
     2 * FUNC_1(VAR_2->i_sb);
 struct reiserfs_transaction_handle VAR_4;
 int VAR_5;

 if (!VAR_2->i_nlink && !FUNC_6(VAR_2))
  FUNC_5(VAR_2);

 FUNC_18(&VAR_2->i_data);
 if (VAR_2->i_nlink)
  goto no_delete;






 if (!(VAR_2->i_state & VAR_0) && FUNC_0(VAR_2)->k_objectid != 0) {

  FUNC_10(VAR_2);

  FUNC_13(VAR_2->i_sb);

  if (FUNC_7(&VAR_4, VAR_2->i_sb, VAR_3))
   goto out;
  FUNC_12(VAR_2);

  FUNC_11(&VAR_4, VAR_2);

  VAR_5 = FUNC_9(&VAR_4, VAR_2);






  if (!VAR_5) {
   int VAR_6 = FUNC_16(VAR_2->i_sb);
   FUNC_4(VAR_2);
   FUNC_14(VAR_2->i_sb, VAR_6);
  }

  if (FUNC_8(&VAR_4))
   goto out;





  if (VAR_5)
      goto out;






  FUNC_17(VAR_2, 0 );
out:
  FUNC_15(VAR_2->i_sb);
 } else {

  ;
 }


 FUNC_2(VAR_2);

 FUNC_3(VAR_2);
 VAR_2->i_blocks = 0;
 return;

no_delete:
 FUNC_2(VAR_2);
 FUNC_3(VAR_2);
}
