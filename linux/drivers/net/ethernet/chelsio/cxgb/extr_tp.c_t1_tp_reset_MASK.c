
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tp_params {int dummy; } ;
struct petp {TYPE_1__* adapter; } ;
struct TYPE_3__ {scalar_t__ regs; } ;
typedef TYPE_1__ adapter_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,struct tp_params*,unsigned int) ;
 int FUNC_1 (int ,scalar_t__) ;

int FUNC_2(struct petp *VAR_2, struct tp_params *VAR_3, unsigned int VAR_4)
{
 adapter_t *VAR_5 = VAR_2->adapter;

 FUNC_0(VAR_5, VAR_3, VAR_4);
 FUNC_1(VAR_1, VAR_5->regs + VAR_0);
 return 0;
}
