
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct io_ring_ctx {int flags; } ;
struct io_kiocb {struct io_ring_ctx* ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct io_ring_ctx*,int ,long) ;
 int FUNC_1 (struct io_kiocb*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct io_kiocb *VAR_2, u64 VAR_3)
{
 struct io_ring_ctx *VAR_4 = VAR_2->ctx;
 long VAR_5 = 0;

 if (FUNC_2(VAR_4->flags & VAR_1))
  return -VAR_0;

 FUNC_0(VAR_4, VAR_3, VAR_5);
 FUNC_1(VAR_2);
 return 0;
}
