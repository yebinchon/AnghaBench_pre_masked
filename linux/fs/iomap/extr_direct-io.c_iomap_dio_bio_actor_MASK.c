
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct iov_iter {int dummy; } ;
struct TYPE_6__ {struct iov_iter* iter; } ;
struct iomap_dio {int flags; size_t size; TYPE_3__ submit; TYPE_1__* iocb; scalar_t__ error; } ;
struct iomap {scalar_t__ type; int flags; int bdev; } ;
struct inode {int dummy; } ;
struct TYPE_5__ {size_t bi_size; int bi_sector; } ;
struct bio {int bi_opf; TYPE_2__ bi_iter; int bi_end_io; struct iomap_dio* bi_private; int bi_ioprio; int bi_write_hint; } ;
typedef unsigned int loff_t ;
struct TYPE_4__ {int ki_ioprio; int ki_hint; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct bio* FUNC_2 (int ,int) ;
 int FUNC_3 (struct bio*,struct iov_iter*) ;
 int FUNC_4 (struct bio*) ;
 int FUNC_5 (struct bio*,int ) ;
 int FUNC_6 (struct bio*) ;
 scalar_t__ FUNC_7 (int ) ;
 unsigned int FUNC_8 (int ) ;
 unsigned int FUNC_9 (struct inode*) ;
 unsigned int FUNC_10 (struct inode*) ;
 int VAR_18 ;
 int FUNC_11 (struct iomap_dio*,struct iomap*,struct bio*) ;
 int FUNC_12 (struct iomap_dio*,struct iomap*,unsigned int,unsigned int) ;
 int FUNC_13 (struct iomap*,unsigned int) ;
 int FUNC_14 (struct iov_iter*,size_t) ;
 unsigned int FUNC_15 (struct iov_iter*) ;
 int FUNC_16 (struct iov_iter*,int ) ;
 int FUNC_17 (struct iov_iter*,size_t) ;
 int FUNC_18 (struct iov_iter*,unsigned int) ;
 int FUNC_19 (size_t) ;
 scalar_t__ FUNC_20 (int) ;

__attribute__((used)) static loff_t
FUNC_21(struct inode *VAR_19, loff_t VAR_20, loff_t VAR_21,
  struct iomap_dio *VAR_22, struct iomap *VAR_23)
{
 unsigned int VAR_24 = FUNC_8(FUNC_1(VAR_23->bdev));
 unsigned int VAR_25 = FUNC_9(VAR_19), VAR_26;
 unsigned int VAR_27 = FUNC_15(VAR_22->submit.iter);
 struct iov_iter VAR_28;
 struct bio *VAR_29;
 bool VAR_30 = 0;
 bool VAR_31 = 0;
 int VAR_32, VAR_33 = 0;
 size_t VAR_34 = 0;

 if ((VAR_20 | VAR_21 | VAR_27) & ((1 << VAR_24) - 1))
  return -VAR_1;

 if (VAR_23->type == VAR_12) {
  VAR_22->flags |= VAR_5;
  VAR_30 = 1;
 }

 if (VAR_23->flags & VAR_10)
  VAR_22->flags |= VAR_3;

 if (VAR_23->flags & VAR_9) {
  VAR_30 = 1;
 } else if (VAR_23->type == VAR_11) {







  if (!(VAR_23->flags & (VAR_10|VAR_8)) &&
      (VAR_22->flags & VAR_7) &&
      FUNC_7(FUNC_0(VAR_23->bdev)))
   VAR_31 = 1;
 }





 VAR_28 = *VAR_22->submit.iter;
 FUNC_18(&VAR_28, VAR_21);

 VAR_32 = FUNC_16(&VAR_28, VAR_0);
 if (VAR_32 <= 0)
  return VAR_32;

 if (VAR_30) {

  VAR_26 = VAR_20 & (VAR_25 - 1);
  if (VAR_26)
   FUNC_12(VAR_22, VAR_23, VAR_20 - VAR_26, VAR_26);
 }

 do {
  size_t VAR_35;
  if (VAR_22->error) {
   FUNC_17(VAR_22->submit.iter, VAR_34);
   return 0;
  }

  VAR_29 = FUNC_2(VAR_2, VAR_32);
  FUNC_5(VAR_29, VAR_23->bdev);
  VAR_29->bi_iter.bi_sector = FUNC_13(VAR_23, VAR_20);
  VAR_29->bi_write_hint = VAR_22->iocb->ki_hint;
  VAR_29->bi_ioprio = VAR_22->iocb->ki_ioprio;
  VAR_29->bi_private = VAR_22;
  VAR_29->bi_end_io = VAR_18;

  VAR_33 = FUNC_3(VAR_29, &VAR_28);
  if (FUNC_20(VAR_33)) {






   FUNC_4(VAR_29);
   goto zero_tail;
  }

  VAR_35 = VAR_29->bi_iter.bi_size;
  if (VAR_22->flags & VAR_6) {
   VAR_29->bi_opf = VAR_16 | VAR_17 | VAR_14;
   if (VAR_31)
    VAR_29->bi_opf |= VAR_13;
   else
    VAR_22->flags &= ~VAR_7;
   FUNC_19(VAR_35);
  } else {
   VAR_29->bi_opf = VAR_15;
   if (VAR_22->flags & VAR_4)
    FUNC_6(VAR_29);
  }

  FUNC_14(VAR_22->submit.iter, VAR_35);

  VAR_22->size += VAR_35;
  VAR_20 += VAR_35;
  VAR_34 += VAR_35;

  VAR_32 = FUNC_16(&VAR_28, VAR_0);
  FUNC_11(VAR_22, VAR_23, VAR_29);
 } while (VAR_32);







zero_tail:
 if (VAR_30 ||
     ((VAR_22->flags & VAR_6) && VAR_20 >= FUNC_10(VAR_19))) {

  VAR_26 = VAR_20 & (VAR_25 - 1);
  if (VAR_26)
   FUNC_12(VAR_22, VAR_23, VAR_20, VAR_25 - VAR_26);
 }
 return VAR_34 ? VAR_34 : VAR_33;
}
