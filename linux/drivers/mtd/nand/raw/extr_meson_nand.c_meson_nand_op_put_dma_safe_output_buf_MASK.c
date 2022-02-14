
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void const* out; } ;
struct TYPE_5__ {TYPE_1__ buf; } ;
struct TYPE_6__ {TYPE_2__ data; } ;
struct nand_op_instr {scalar_t__ type; TYPE_3__ ctx; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (void const*) ;

__attribute__((used)) static void
FUNC_2(const struct nand_op_instr *VAR_1,
          const void *VAR_2)
{
 if (FUNC_0(VAR_1->type != VAR_0) ||
     FUNC_0(!VAR_2))
  return;

 if (VAR_2 != VAR_1->ctx.data.buf.out)
  FUNC_1(VAR_2);
}
