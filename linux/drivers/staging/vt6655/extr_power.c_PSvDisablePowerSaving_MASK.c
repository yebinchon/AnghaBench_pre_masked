
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnt_private {int bEnablePSMode; int bPWBitOn; int PortOffset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vnt_private*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void
FUNC_3(
 struct vnt_private *VAR_6
)
{

 FUNC_0(VAR_6);

 FUNC_1(VAR_6->PortOffset, VAR_0, VAR_3);

 FUNC_1(VAR_6->PortOffset, VAR_2, VAR_5);

 FUNC_2(VAR_6->PortOffset, VAR_1, VAR_4);

 VAR_6->bEnablePSMode = 0;

 VAR_6->bPWBitOn = 0;
}
