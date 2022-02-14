
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_operations {int (* evict_inode ) (struct inode*) ;} ;
struct inode {int i_state; int i_lock; scalar_t__ i_cdev; int i_mode; scalar_t__ i_bdev; int i_data; int i_io_list; int i_lru; TYPE_1__* i_sb; } ;
struct TYPE_2__ {struct super_operations* s_op; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct inode*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int*,int ) ;

__attribute__((used)) static void FUNC_17(struct inode *VAR_3)
{
 const struct super_operations *VAR_4 = VAR_3->i_sb->s_op;

 FUNC_0(!(VAR_3->i_state & VAR_1));
 FUNC_0(!FUNC_10(&VAR_3->i_lru));

 if (!FUNC_10(&VAR_3->i_io_list))
  FUNC_7(VAR_3);

 FUNC_8(VAR_3);







 FUNC_9(VAR_3);

 if (VAR_4->evict_inode) {
  VAR_4->evict_inode(VAR_3);
 } else {
  FUNC_15(&VAR_3->i_data);
  FUNC_5(VAR_3);
 }
 if (FUNC_1(VAR_3->i_mode) && VAR_3->i_bdev)
  FUNC_3(VAR_3);
 if (FUNC_2(VAR_3->i_mode) && VAR_3->i_cdev)
  FUNC_4(VAR_3);

 FUNC_11(VAR_3);

 FUNC_12(&VAR_3->i_lock);
 FUNC_16(&VAR_3->i_state, VAR_2);
 FUNC_0(VAR_3->i_state != (VAR_1 | VAR_0));
 FUNC_13(&VAR_3->i_lock);

 FUNC_6(VAR_3);
}
