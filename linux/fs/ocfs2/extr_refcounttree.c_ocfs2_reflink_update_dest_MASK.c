
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_sb; int i_mtime; int i_ctime; int i_blocks; } ;
struct buffer_head {int dummy; } ;
typedef scalar_t__ loff_t ;
typedef int handle_t ;
struct TYPE_2__ {int ip_lock; } ;


 scalar_t__ FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct inode*) ;
 scalar_t__ FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*,scalar_t__) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (int *,struct inode*,struct buffer_head*) ;
 int * FUNC_11 (int ,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

int FUNC_14(struct inode *VAR_1,
         struct buffer_head *VAR_2,
         loff_t VAR_3)
{
 handle_t *VAR_4;
 int VAR_5;

 VAR_1->i_blocks = FUNC_9(VAR_1);

 if (VAR_3 <= FUNC_5(VAR_1))
  return 0;

 VAR_4 = FUNC_11(FUNC_2(VAR_1->i_sb),
       VAR_0);
 if (FUNC_0(VAR_4)) {
  VAR_5 = FUNC_3(VAR_4);
  FUNC_7(VAR_5);
  return VAR_5;
 }


 FUNC_12(&FUNC_1(VAR_1)->ip_lock);
 if (VAR_3 > FUNC_5(VAR_1))
  FUNC_6(VAR_1, VAR_3);
 FUNC_13(&FUNC_1(VAR_1)->ip_lock);
 VAR_1->i_ctime = VAR_1->i_mtime = FUNC_4(VAR_1);

 VAR_5 = FUNC_10(VAR_4, VAR_1, VAR_2);
 if (VAR_5) {
  FUNC_7(VAR_5);
  goto out_commit;
 }

out_commit:
 FUNC_8(FUNC_2(VAR_1->i_sb), VAR_4);
 return VAR_5;
}
