
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_ring_ctx {int dummy; } ;
struct io_kiocb {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct io_ring_ctx*,struct io_kiocb*) ;

__attribute__((used)) static inline bool FUNC_1(struct io_ring_ctx *VAR_2,
         struct io_kiocb *VAR_3)
{
 if ((VAR_3->flags & (VAR_0|VAR_1)) != VAR_0)
  return 0;

 return FUNC_0(VAR_2, VAR_3);
}
