
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_uring_sqe {scalar_t__ buf_index; scalar_t__ ioprio; scalar_t__ addr; } ;
struct io_ring_ctx {int flags; } ;
struct io_kiocb {int file; struct io_ring_ctx* ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct io_kiocb *VAR_3, const struct io_uring_sqe *VAR_4)
{
 struct io_ring_ctx *VAR_5 = VAR_3->ctx;

 if (!VAR_3->file)
  return -VAR_0;

 if (FUNC_0(VAR_5->flags & VAR_2))
  return -VAR_1;
 if (FUNC_0(VAR_4->addr || VAR_4->ioprio || VAR_4->buf_index))
  return -VAR_1;

 return 0;
}
