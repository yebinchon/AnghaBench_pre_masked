
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct kiocb {scalar_t__ ki_pos; int ki_flags; int private; int ki_cookie; TYPE_3__* ki_filp; } ;
struct iov_iter {int dummy; } ;
struct iomap_ops {int dummy; } ;
struct iomap_dio_ops {int dummy; } ;
struct TYPE_5__ {int * cookie; int * last_queue; int waiter; struct iov_iter* iter; } ;
struct iomap_dio {scalar_t__ i_size; int flags; int wait_for_completion; TYPE_1__ submit; int ref; scalar_t__ error; struct iomap_dio_ops const* dops; scalar_t__ size; struct kiocb* iocb; } ;
struct inode {TYPE_2__* i_sb; int i_rwsem; } ;
struct blk_plug {int dummy; } ;
struct address_space {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ loff_t ;
struct TYPE_7__ {struct address_space* f_mapping; } ;
struct TYPE_6__ {int s_dio_done_wq; } ;


 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_0 (int ) ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (struct blk_plug*) ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 (struct blk_plug*) ;
 int VAR_22 ;
 int FUNC_8 (TYPE_3__*) ;
 struct inode* FUNC_9 (TYPE_3__*) ;
 scalar_t__ FUNC_10 (struct address_space*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_11 (struct address_space*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_12 (struct inode*) ;
 int FUNC_13 (struct inode*) ;
 scalar_t__ FUNC_14 (struct address_space*,scalar_t__,scalar_t__) ;
 int FUNC_15 () ;
 scalar_t__ FUNC_16 (struct inode*,scalar_t__,size_t,unsigned int,struct iomap_ops const*,struct iomap_dio*,int ) ;
 int VAR_23 ;
 scalar_t__ FUNC_17 (struct iomap_dio*) ;
 int FUNC_18 (struct iomap_dio*,scalar_t__) ;
 size_t FUNC_19 (struct iov_iter*) ;
 scalar_t__ FUNC_20 (struct iov_iter*) ;
 int FUNC_21 (struct kiocb*) ;
 scalar_t__ FUNC_22 (struct iov_iter*) ;
 int FUNC_23 (struct iomap_dio*) ;
 struct iomap_dio* FUNC_24 (int,int ) ;
 int FUNC_25 (int *) ;
 scalar_t__ FUNC_26 (TYPE_2__*) ;
 int FUNC_27 (int ) ;

ssize_t
FUNC_28(struct kiocb *VAR_24, struct iov_iter *VAR_25,
  const struct iomap_ops *VAR_26, const struct iomap_dio_ops *VAR_27)
{
 struct address_space *VAR_28 = VAR_24->ki_filp->f_mapping;
 struct inode *VAR_29 = FUNC_9(VAR_24->ki_filp);
 size_t VAR_30 = FUNC_19(VAR_25);
 loff_t VAR_31 = VAR_24->ki_pos, VAR_32 = VAR_31;
 loff_t VAR_33 = VAR_24->ki_pos + VAR_30 - 1, VAR_34 = 0;
 unsigned int VAR_35 = VAR_14;
 bool VAR_36 = FUNC_21(VAR_24);
 struct blk_plug VAR_37;
 struct iomap_dio *VAR_38;

 FUNC_25(&VAR_29->i_rwsem);

 if (!VAR_30)
  return 0;

 VAR_38 = FUNC_24(sizeof(*VAR_38), VAR_5);
 if (!VAR_38)
  return -VAR_3;

 VAR_38->iocb = VAR_24;
 FUNC_4(&VAR_38->ref, 1);
 VAR_38->size = 0;
 VAR_38->i_size = FUNC_12(VAR_29);
 VAR_38->dops = VAR_27;
 VAR_38->error = 0;
 VAR_38->flags = 0;

 VAR_38->submit.iter = VAR_25;
 VAR_38->submit.waiter = VAR_22;
 VAR_38->submit.cookie = VAR_0;
 VAR_38->submit.last_queue = ((void*)0);

 if (FUNC_20(VAR_25) == VAR_18) {
  if (VAR_31 >= VAR_38->i_size)
   goto out_free_dio;

  if (FUNC_22(VAR_25) && FUNC_20(VAR_25) == VAR_18)
   VAR_38->flags |= VAR_10;
 } else {
  VAR_35 |= VAR_16;
  VAR_38->flags |= VAR_12;


  if (VAR_24->ki_flags & VAR_6)
   VAR_38->flags |= VAR_11;







  if ((VAR_24->ki_flags & (VAR_6 | VAR_9)) == VAR_6)
   VAR_38->flags |= VAR_13;
 }

 if (VAR_24->ki_flags & VAR_8) {
  if (FUNC_10(VAR_28, VAR_32, VAR_33)) {
   VAR_34 = -VAR_1;
   goto out_free_dio;
  }
  VAR_35 |= VAR_15;
 }

 VAR_34 = FUNC_11(VAR_28, VAR_32, VAR_33);
 if (VAR_34)
  goto out_free_dio;







 VAR_34 = FUNC_14(VAR_28,
   VAR_32 >> VAR_17, VAR_33 >> VAR_17);
 if (VAR_34)
  FUNC_8(VAR_24->ki_filp);
 VAR_34 = 0;

 if (FUNC_20(VAR_25) == VAR_21 && !VAR_36 &&
     !VAR_29->i_sb->s_dio_done_wq) {
  VAR_34 = FUNC_26(VAR_29->i_sb);
  if (VAR_34 < 0)
   goto out_free_dio;
 }

 FUNC_13(VAR_29);

 FUNC_7(&VAR_37);
 do {
  VAR_34 = FUNC_16(VAR_29, VAR_31, VAR_30, VAR_35, VAR_26, VAR_38,
    VAR_23);
  if (VAR_34 <= 0) {

   if (VAR_34 == -VAR_4) {
    VAR_36 = 1;
    VAR_34 = 0;
   }
   break;
  }
  VAR_31 += VAR_34;

  if (FUNC_20(VAR_25) == VAR_18 && VAR_31 >= VAR_38->i_size)
   break;
 } while ((VAR_30 = FUNC_19(VAR_25)) > 0);
 FUNC_5(&VAR_37);

 if (VAR_34 < 0)
  FUNC_18(VAR_38, VAR_34);





 if (VAR_38->flags & VAR_13)
  VAR_38->flags &= ~VAR_11;

 FUNC_1(VAR_24->ki_cookie, VAR_38->submit.cookie);
 FUNC_1(VAR_24->private, VAR_38->submit.last_queue);
 VAR_38->wait_for_completion = VAR_36;
 if (!FUNC_3(&VAR_38->ref)) {
  if (!VAR_36)
   return -VAR_2;

  for (;;) {
   FUNC_27(VAR_20);
   if (!FUNC_0(VAR_38->submit.waiter))
    break;

   if (!(VAR_24->ki_flags & VAR_7) ||
       !VAR_38->submit.last_queue ||
       !FUNC_6(VAR_38->submit.last_queue,
      VAR_38->submit.cookie, 1))
    FUNC_15();
  }
  FUNC_2(VAR_19);
 }

 return FUNC_17(VAR_38);

out_free_dio:
 FUNC_23(VAR_38);
 return VAR_34;
}
