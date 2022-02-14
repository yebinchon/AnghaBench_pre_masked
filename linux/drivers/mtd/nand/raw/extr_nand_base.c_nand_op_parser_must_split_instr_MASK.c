
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {unsigned int maxlen; } ;
struct TYPE_8__ {unsigned int maxcycles; } ;
struct TYPE_12__ {TYPE_5__ data; TYPE_2__ addr; } ;
struct nand_op_parser_pattern_elem {int type; TYPE_6__ ctx; } ;
struct TYPE_9__ {int len; } ;
struct TYPE_7__ {int naddrs; } ;
struct TYPE_10__ {TYPE_3__ data; TYPE_1__ addr; } ;
struct nand_op_instr {TYPE_4__ ctx; } ;






__attribute__((used)) static bool
FUNC_0(const struct nand_op_parser_pattern_elem *VAR_0,
    const struct nand_op_instr *VAR_1,
    unsigned int *VAR_2)
{
 switch (VAR_0->type) {
 case 130:
  if (!VAR_0->ctx.addr.maxcycles)
   break;

  if (VAR_1->ctx.addr.naddrs - *VAR_2 >
      VAR_0->ctx.addr.maxcycles) {
   *VAR_2 += VAR_0->ctx.addr.maxcycles;
   return 1;
  }
  break;

 case 129:
 case 128:
  if (!VAR_0->ctx.data.maxlen)
   break;

  if (VAR_1->ctx.data.len - *VAR_2 >
      VAR_0->ctx.data.maxlen) {
   *VAR_2 += VAR_0->ctx.data.maxlen;
   return 1;
  }
  break;

 default:
  break;
 }

 return 0;
}
