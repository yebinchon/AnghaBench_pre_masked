
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* in; } ;
struct TYPE_5__ {int len; TYPE_1__ buf; } ;
struct TYPE_6__ {TYPE_2__ data; } ;
struct nand_op_instr {scalar_t__ type; TYPE_3__ ctx; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*,void*,int ) ;

__attribute__((used)) static void
FUNC_3(const struct nand_op_instr *VAR_1,
         void *VAR_2)
{
 if (FUNC_0(VAR_1->type != VAR_0) ||
     FUNC_0(!VAR_2))
  return;

 if (VAR_2 == VAR_1->ctx.data.buf.in)
  return;

 FUNC_2(VAR_1->ctx.data.buf.in, VAR_2, VAR_1->ctx.data.len);
 FUNC_1(VAR_2);
}
