
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct io_uring_sqe {int user_data; int sync_range_flags; int len; int off; } ;
struct TYPE_2__ {int ki_filp; } ;
struct io_kiocb {int flags; int ctx; TYPE_1__ rw; } ;
typedef void* loff_t ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct io_kiocb*,struct io_uring_sqe const*) ;
 int FUNC_3 (struct io_kiocb*) ;
 int FUNC_4 (int ,void*,void*,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct io_kiocb *VAR_3,
         const struct io_uring_sqe *VAR_4,
         bool VAR_5)
{
 loff_t VAR_6;
 loff_t VAR_7;
 unsigned VAR_8;
 int VAR_9;

 VAR_9 = FUNC_2(VAR_3, VAR_4);
 if (VAR_9)
  return VAR_9;


 if (VAR_5)
  return -VAR_0;

 VAR_6 = FUNC_0(VAR_4->off);
 VAR_7 = FUNC_0(VAR_4->len);
 VAR_8 = FUNC_0(VAR_4->sync_range_flags);

 VAR_9 = FUNC_4(VAR_3->rw.ki_filp, VAR_6, VAR_7, VAR_8);

 if (VAR_9 < 0 && (VAR_3->flags & VAR_2))
  VAR_3->flags |= VAR_1;
 FUNC_1(VAR_3->ctx, VAR_4->user_data, VAR_9);
 FUNC_3(VAR_3);
 return 0;
}
