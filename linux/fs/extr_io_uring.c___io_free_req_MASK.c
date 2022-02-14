
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct io_kiocb {int flags; TYPE_1__* ctx; scalar_t__ file; } ;
struct TYPE_2__ {int refs; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,struct io_kiocb*) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(struct io_kiocb *VAR_2)
{
 if (VAR_2->file && !(VAR_2->flags & VAR_0))
  FUNC_0(VAR_2->file);
 FUNC_2(&VAR_2->ctx->refs);
 FUNC_1(VAR_1, VAR_2);
}
