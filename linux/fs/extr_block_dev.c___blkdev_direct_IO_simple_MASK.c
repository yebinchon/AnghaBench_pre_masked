
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kiocb {int ki_pos; int ki_flags; int ki_ioprio; int ki_hint; struct file* ki_filp; } ;
struct iov_iter {int dummy; } ;
struct file {int dummy; } ;
struct block_device {int dummy; } ;
struct bio_vec {int dummy; } ;
struct TYPE_2__ {int bi_sector; int bi_size; } ;
struct bio {int bi_status; int bi_private; int bi_opf; TYPE_1__ bi_iter; int bi_ioprio; int bi_end_io; int bi_write_hint; } ;
typedef int ssize_t ;
typedef int loff_t ;
typedef int blk_qc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct block_device* FUNC_0 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct file*) ;
 int FUNC_4 (struct block_device*) ;
 int FUNC_5 (struct block_device*) ;
 int FUNC_6 (struct bio*,struct bio_vec*,int) ;
 int FUNC_7 (struct bio*,struct iov_iter*) ;
 int FUNC_8 (struct bio*,int) ;
 int FUNC_9 (struct bio*,struct block_device*) ;
 int FUNC_10 (struct bio*,struct kiocb*) ;
 int FUNC_11 (struct bio*) ;
 int FUNC_12 (int ,int ,int) ;
 int FUNC_13 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_14 (struct kiocb*) ;
 int FUNC_15 () ;
 int FUNC_16 (struct iov_iter*) ;
 scalar_t__ FUNC_17 (struct iov_iter*) ;
 scalar_t__ FUNC_18 (struct iov_iter*) ;
 int FUNC_19 (struct bio_vec*) ;
 struct bio_vec* FUNC_20 (int,int,int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (struct bio*) ;
 int FUNC_23 (int ) ;
 scalar_t__ FUNC_24 (int ) ;

__attribute__((used)) static ssize_t
FUNC_25(struct kiocb *VAR_11, struct iov_iter *VAR_12,
  int VAR_13)
{
 struct file *VAR_14 = VAR_11->ki_filp;
 struct block_device *VAR_15 = FUNC_0(FUNC_3(VAR_14));
 struct bio_vec VAR_16[VAR_0], *VAR_17;
 loff_t VAR_18 = VAR_11->ki_pos;
 bool VAR_19 = 0;
 struct bio VAR_20;
 ssize_t VAR_21;
 blk_qc_t VAR_22;

 if ((VAR_18 | FUNC_16(VAR_12)) &
     (FUNC_5(VAR_15) - 1))
  return -VAR_1;

 if (VAR_13 <= VAR_0)
  VAR_17 = VAR_16;
 else {
  VAR_17 = FUNC_20(VAR_13, sizeof(struct bio_vec),
         VAR_3);
  if (!VAR_17)
   return -VAR_2;
 }

 FUNC_6(&VAR_20, VAR_17, VAR_13);
 FUNC_9(&VAR_20, VAR_15);
 VAR_20.bi_iter.bi_sector = VAR_18 >> 9;
 VAR_20.bi_write_hint = VAR_11->ki_hint;
 VAR_20.bi_private = VAR_10;
 VAR_20.bi_end_io = VAR_9;
 VAR_20.bi_ioprio = VAR_11->ki_ioprio;

 VAR_21 = FUNC_7(&VAR_20, VAR_12);
 if (FUNC_24(VAR_21))
  goto out;
 VAR_21 = VAR_20.bi_iter.bi_size;

 if (FUNC_17(VAR_12) == VAR_5) {
  VAR_20.bi_opf = VAR_6;
  if (FUNC_18(VAR_12))
   VAR_19 = 1;
 } else {
  VAR_20.bi_opf = FUNC_14(VAR_11);
  FUNC_23(VAR_21);
 }
 if (VAR_11->ki_flags & VAR_4)
  FUNC_10(&VAR_20, VAR_11);

 VAR_22 = FUNC_22(&VAR_20);
 for (;;) {
  FUNC_21(VAR_8);
  if (!FUNC_1(VAR_20.bi_private))
   break;
  if (!(VAR_11->ki_flags & VAR_4) ||
      !FUNC_12(FUNC_4(VAR_15), VAR_22, 1))
   FUNC_15();
 }
 FUNC_2(VAR_7);

 FUNC_8(&VAR_20, VAR_19);
 if (FUNC_24(VAR_20.bi_status))
  VAR_21 = FUNC_13(VAR_20.bi_status);

out:
 if (VAR_17 != VAR_16)
  FUNC_19(VAR_17);

 FUNC_11(&VAR_20);

 return VAR_21;
}
