
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {scalar_t__ regs; int name; } ;
typedef TYPE_1__ adapter_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*,scalar_t__,int ,int,int ,int) ;
 int FUNC_3 (int ,scalar_t__) ;

int FUNC_4(adapter_t *VAR_5, u32 VAR_6, u32 *VAR_7)
{
 int VAR_8;

 FUNC_3(VAR_6, VAR_5->regs + VAR_0);
 FUNC_3(0, VAR_5->regs + VAR_1);

 VAR_8 = FUNC_2(VAR_5, VAR_1, VAR_3, 1,
       VAR_4, 3);
 if (VAR_8)
  FUNC_0("%s: TPI read from 0x%x failed\n",
    VAR_5->name, VAR_6);
 else
  *VAR_7 = FUNC_1(VAR_5->regs + VAR_2);
 return VAR_8;
}
