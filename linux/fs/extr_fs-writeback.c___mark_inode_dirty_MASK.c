
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {TYPE_1__* s_op; } ;
struct list_head {int dummy; } ;
struct inode {int i_state; int i_lock; void* dirtied_time_when; void* dirtied_when; int i_mode; struct super_block* i_sb; } ;
struct bdi_writeback {TYPE_2__* bdi; int list_lock; struct list_head b_dirty_time; struct list_head b_dirty; int state; } ;
struct TYPE_4__ {int name; } ;
struct TYPE_3__ {int (* dirty_inode ) (struct inode*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,char*,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int VAR_6 ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*,int *) ;
 int FUNC_5 (struct inode*,struct bdi_writeback*,struct list_head*) ;
 scalar_t__ FUNC_6 (struct inode*) ;
 void* VAR_7 ;
 struct bdi_writeback* FUNC_7 (struct inode*) ;
 int FUNC_8 () ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct inode*,int) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (struct inode*,int) ;
 int FUNC_14 (struct inode*) ;
 int FUNC_15 (struct inode*,int) ;
 int FUNC_16 (struct inode*,int) ;
 scalar_t__ FUNC_17 (int ) ;
 int FUNC_18 (struct bdi_writeback*) ;

void FUNC_19(struct inode *VAR_8, int VAR_9)
{
 struct super_block *VAR_10 = VAR_8->i_sb;
 int VAR_11;

 FUNC_16(VAR_8, VAR_9);





 if (VAR_9 & (VAR_1 | VAR_2)) {
  FUNC_15(VAR_8, VAR_9);

  if (VAR_10->s_op->dirty_inode)
   VAR_10->s_op->dirty_inode(VAR_8, VAR_9);

  FUNC_13(VAR_8, VAR_9);
 }
 if (VAR_9 & VAR_1)
  VAR_9 &= ~VAR_2;
 VAR_11 = VAR_9 & VAR_2;





 FUNC_8();

 if (((VAR_8->i_state & VAR_9) == VAR_9) ||
     (VAR_11 && (VAR_8->i_state & VAR_1)))
  return;

 if (FUNC_17(VAR_6))
  FUNC_3(VAR_8);

 FUNC_9(&VAR_8->i_lock);
 if (VAR_11 && (VAR_8->i_state & VAR_1))
  goto out_unlock_inode;
 if ((VAR_8->i_state & VAR_9) != VAR_9) {
  const int VAR_12 = VAR_8->i_state & VAR_0;

  FUNC_4(VAR_8, ((void*)0));

  if (VAR_9 & VAR_1)
   VAR_8->i_state &= ~VAR_2;
  VAR_8->i_state |= VAR_9;






  if (VAR_8->i_state & VAR_4)
   goto out_unlock_inode;





  if (!FUNC_0(VAR_8->i_mode)) {
   if (FUNC_6(VAR_8))
    goto out_unlock_inode;
  }
  if (VAR_8->i_state & VAR_3)
   goto out_unlock_inode;





  if (!VAR_12) {
   struct bdi_writeback *VAR_13;
   struct list_head *VAR_14;
   bool VAR_15 = 0;

   VAR_13 = FUNC_7(VAR_8);

   FUNC_1(FUNC_2(VAR_13->bdi) &&
        !FUNC_12(VAR_5, &VAR_13->state),
        "bdi-%s not registered\n", VAR_13->bdi->name);

   VAR_8->dirtied_when = VAR_7;
   if (VAR_11)
    VAR_8->dirtied_time_when = VAR_7;

   if (VAR_8->i_state & VAR_0)
    VAR_14 = &VAR_13->b_dirty;
   else
    VAR_14 = &VAR_13->b_dirty_time;

   VAR_15 = FUNC_5(VAR_8, VAR_13,
              VAR_14);

   FUNC_10(&VAR_13->list_lock);
   FUNC_14(VAR_8);







   if (FUNC_2(VAR_13->bdi) && VAR_15)
    FUNC_18(VAR_13);
   return;
  }
 }
out_unlock_inode:
 FUNC_10(&VAR_8->i_lock);
}
