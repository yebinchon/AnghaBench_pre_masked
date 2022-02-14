
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int name; scalar_t__ regs; } ;
typedef TYPE_1__ adapter_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (TYPE_1__*,scalar_t__,int ,int,int ,int) ;
 int FUNC_2 (int ,scalar_t__) ;

int FUNC_3(adapter_t *VAR_6, u32 VAR_7, u32 VAR_8)
{
 int VAR_9;

 FUNC_2(VAR_7, VAR_6->regs + VAR_0);
 FUNC_2(VAR_8, VAR_6->regs + VAR_2);
 FUNC_2(VAR_4, VAR_6->regs + VAR_1);

 VAR_9 = FUNC_1(VAR_6, VAR_1, VAR_3, 1,
       VAR_5, 3);
 if (VAR_9)
  FUNC_0("%s: TPI write to 0x%x failed\n",
    VAR_6->name, VAR_7);
 return VAR_9;
}
