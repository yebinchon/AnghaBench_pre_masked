
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvidia_par {scalar_t__ Architecture; int PRAMDAC; TYPE_1__* CurrentState; int PCIO; } ;
struct TYPE_2__ {int cursor1; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int ,int,int) ;

int FUNC_3(struct nvidia_par *VAR_1, int VAR_2)
{
 int VAR_3 = VAR_1->CurrentState->cursor1;

 VAR_1->CurrentState->cursor1 = (VAR_1->CurrentState->cursor1 & 0xFE) |
     (VAR_2 & 0x01);
 FUNC_2(VAR_1->PCIO, 0x3D4, 0x31);
 FUNC_2(VAR_1->PCIO, 0x3D5, VAR_1->CurrentState->cursor1);

 if (VAR_1->Architecture == VAR_0)
  FUNC_1(VAR_1->PRAMDAC, 0x0300, FUNC_0(VAR_1->PRAMDAC, 0x0300));

 return (VAR_3 & 0x01);
}
