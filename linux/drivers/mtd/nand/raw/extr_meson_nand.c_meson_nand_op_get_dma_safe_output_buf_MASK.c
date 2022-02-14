
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ out; } ;
struct TYPE_6__ {int len; TYPE_1__ buf; } ;
struct TYPE_5__ {TYPE_3__ data; } ;
struct nand_op_instr {scalar_t__ type; TYPE_2__ ctx; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 void* FUNC_1 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static void *
FUNC_3(const struct nand_op_instr *VAR_2)
{
 if (FUNC_0(VAR_2->type != VAR_1))
  return ((void*)0);

 if (FUNC_2(VAR_2->ctx.data.buf.out))
  return (void *)VAR_2->ctx.data.buf.out;

 return FUNC_1(VAR_2->ctx.data.buf.out,
         VAR_2->ctx.data.len, VAR_0);
}
