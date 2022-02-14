
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct vnt_private {int current_aid; scalar_t__ op_mode; int bEnablePSMode; int bPWBitOn; scalar_t__ PortOffset; } ;
struct TYPE_2__ {int wCurrATIMWindow; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (scalar_t__,int ,int ) ;
 int FUNC_2 (scalar_t__,int ,int ) ;
 int FUNC_3 (scalar_t__,int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (scalar_t__,int) ;
 TYPE_1__* VAR_12 ;
 int FUNC_5 (char*) ;

void FUNC_6(struct vnt_private *VAR_13,
     unsigned short VAR_14)
{
 u16 VAR_15 = VAR_13->current_aid | FUNC_0(14) | FUNC_0(15);


 FUNC_4(VAR_13->PortOffset + VAR_4, VAR_0);
 if (VAR_13->op_mode != VAR_6) {

  FUNC_4(VAR_13->PortOffset + VAR_1, VAR_15);
 } else {




 }

 FUNC_2(VAR_13->PortOffset, VAR_2, VAR_7);

 FUNC_2(VAR_13->PortOffset, VAR_5, VAR_11);

 if (VAR_14 >= 2) {

  FUNC_1(VAR_13->PortOffset, VAR_3, VAR_8);

  FUNC_2(VAR_13->PortOffset, VAR_3, VAR_9);
 } else {

  FUNC_2(VAR_13->PortOffset, VAR_3, VAR_8);
 }


 FUNC_2(VAR_13->PortOffset, VAR_3, VAR_10);
 VAR_13->bEnablePSMode = 1;

 VAR_13->bPWBitOn = 1;
 FUNC_5("PS:Power Saving Mode Enable...\n");
}
