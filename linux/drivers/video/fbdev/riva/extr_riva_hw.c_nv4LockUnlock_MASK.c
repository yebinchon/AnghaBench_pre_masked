
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int PCIO; } ;
typedef TYPE_1__ RIVA_HW_INST ;


 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_2
(
    RIVA_HW_INST *VAR_0,
    int VAR_1
)
{
    FUNC_0(VAR_0->PCIO, 0x3D4, 0x1F);
    FUNC_0(VAR_0->PCIO, 0x3D5, VAR_1 ? 0x99 : 0x57);
    FUNC_1(VAR_0, VAR_1);
}
