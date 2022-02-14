
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vgastate {int vgabase; } ;
struct TYPE_2__ {int HorizontalTotal; int HorizDisplayEnd; int StartHorizRetrace; int EndHorizRetrace; int Overflow; int StartVertRetrace; int EndVertRetrace; int ModeControl; int CrtCtrlIndex; int SeqCtrlIndex; int ClockingMode; int CrtMiscIO; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct vgastate *VAR_7)
{

 FUNC_1(&VAR_3);
 FUNC_3(VAR_7->vgabase, VAR_0, VAR_4.CrtMiscIO);

 FUNC_0(0x00, VAR_5);
 FUNC_0(VAR_4.HorizontalTotal, VAR_6);
 FUNC_0(0x01, VAR_5);
 FUNC_0(VAR_4.HorizDisplayEnd, VAR_6);
 FUNC_0(0x04, VAR_5);
 FUNC_0(VAR_4.StartHorizRetrace, VAR_6);
 FUNC_0(0x05, VAR_5);
 FUNC_0(VAR_4.EndHorizRetrace, VAR_6);
 FUNC_0(0x07, VAR_5);
 FUNC_0(VAR_4.Overflow, VAR_6);
 FUNC_0(0x10, VAR_5);
 FUNC_0(VAR_4.StartVertRetrace, VAR_6);
 FUNC_0(0x11, VAR_5);
 FUNC_0(VAR_4.EndVertRetrace, VAR_6);
 FUNC_0(0x17, VAR_5);
 FUNC_0(VAR_4.ModeControl, VAR_6);

 FUNC_4(VAR_7->vgabase, VAR_1, VAR_4.ClockingMode);


 FUNC_3(VAR_7->vgabase, VAR_2, VAR_4.SeqCtrlIndex);
 FUNC_0(VAR_4.CrtCtrlIndex, VAR_5);
 FUNC_2(&VAR_3);
}
