
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct io_uring_sqe {int user_data; int fsync_flags; int len; int off; } ;
struct TYPE_2__ {int ki_filp; } ;
struct io_kiocb {int flags; int ctx; TYPE_1__ rw; } ;
typedef scalar_t__ loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 void* FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct io_kiocb*,struct io_uring_sqe const*) ;
 int FUNC_3 (struct io_kiocb*) ;
 scalar_t__ FUNC_4 (unsigned int) ;
 int FUNC_5 (int ,scalar_t__,scalar_t__,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct io_kiocb *VAR_6, const struct io_uring_sqe *VAR_7,
      bool VAR_8)
{
 loff_t VAR_9 = FUNC_0(VAR_7->off);
 loff_t VAR_10 = FUNC_0(VAR_7->len);
 loff_t VAR_11 = VAR_9 + VAR_10;
 unsigned VAR_12;
 int VAR_13;

 VAR_12 = FUNC_0(VAR_7->fsync_flags);
 if (FUNC_4(VAR_12 & ~VAR_2))
  return -VAR_1;

 VAR_13 = FUNC_2(VAR_6, VAR_7);
 if (VAR_13)
  return VAR_13;


 if (VAR_8)
  return -VAR_0;

 VAR_13 = FUNC_5(VAR_6->rw.ki_filp, VAR_9,
    VAR_11 > 0 ? VAR_11 : VAR_3,
    VAR_12 & VAR_2);

 if (VAR_13 < 0 && (VAR_6->flags & VAR_5))
  VAR_6->flags |= VAR_4;
 FUNC_1(VAR_6->ctx, VAR_7->user_data, VAR_13);
 FUNC_3(VAR_6);
 return 0;
}
