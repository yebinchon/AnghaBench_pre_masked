
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int U008 ;
struct TYPE_3__ {int PCIO; } ;
typedef TYPE_1__ RIVA_HW_INST ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static void FUNC_2
(
    RIVA_HW_INST *VAR_0,
    int VAR_1
)
{
    U008 VAR_2;
    FUNC_1(VAR_0->PCIO, 0x3D4, 0x11);
    VAR_2 = FUNC_0(VAR_0->PCIO, 0x3D5);
    if(VAR_1) VAR_2 |= 0x80;
    else VAR_2 &= ~0x80;
    FUNC_1(VAR_0->PCIO, 0x3D5, VAR_2);
}
