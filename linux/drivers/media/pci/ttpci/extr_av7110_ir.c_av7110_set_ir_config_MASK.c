
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ir_config; } ;
struct av7110 {TYPE_1__ ir; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct av7110*,int ,int ,int,int ) ;
 int FUNC_1 (int,char*,int ) ;

int FUNC_2(struct av7110 *VAR_2)
{
 FUNC_1(4, "ir config = %08x\n", VAR_2->ir.ir_config);

 return FUNC_0(VAR_2, VAR_0, VAR_1, 1,
        VAR_2->ir.ir_config);
}
