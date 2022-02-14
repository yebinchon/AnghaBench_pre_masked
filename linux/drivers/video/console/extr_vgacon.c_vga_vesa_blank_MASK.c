
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vgastate {int vgabase; } ;
struct TYPE_2__ {int SeqCtrlIndex; int CrtCtrlIndex; int CrtMiscIO; int Overflow; int ClockingMode; void* ModeControl; void* EndVertRetrace; void* StartVertRetrace; void* EndHorizRetrace; void* StartHorizRetrace; void* HorizDisplayEnd; void* HorizontalTotal; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_6 ;
 void* FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 TYPE_1__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int ,int ,int) ;

__attribute__((used)) static void FUNC_8(struct vgastate *VAR_11, int VAR_12)
{

 if (!VAR_8) {
  FUNC_2(&VAR_6);
  VAR_7.SeqCtrlIndex = FUNC_4(VAR_11->vgabase, VAR_5);
  VAR_7.CrtCtrlIndex = FUNC_0(VAR_9);
  VAR_7.CrtMiscIO = FUNC_4(VAR_11->vgabase, VAR_2);
  FUNC_3(&VAR_6);

  FUNC_1(0x00, VAR_9);
  VAR_7.HorizontalTotal = FUNC_0(VAR_10);
  FUNC_1(0x01, VAR_9);
  VAR_7.HorizDisplayEnd = FUNC_0(VAR_10);
  FUNC_1(0x04, VAR_9);
  VAR_7.StartHorizRetrace = FUNC_0(VAR_10);
  FUNC_1(0x05, VAR_9);
  VAR_7.EndHorizRetrace = FUNC_0(VAR_10);
  FUNC_1(0x07, VAR_9);
  VAR_7.Overflow = FUNC_0(VAR_10);
  FUNC_1(0x10, VAR_9);
  VAR_7.StartVertRetrace = FUNC_0(VAR_10);
  FUNC_1(0x11, VAR_9);
  VAR_7.EndVertRetrace = FUNC_0(VAR_10);
  FUNC_1(0x17, VAR_9);
  VAR_7.ModeControl = FUNC_0(VAR_10);
  VAR_7.ClockingMode = FUNC_5(VAR_11->vgabase, VAR_4);
 }



 FUNC_2(&VAR_6);
 FUNC_7(VAR_11->vgabase, VAR_4, VAR_7.ClockingMode | 0x20);


 if ((VAR_7.CrtMiscIO & 0x80) == 0x80)
  FUNC_6(VAR_11->vgabase, VAR_3, VAR_7.CrtMiscIO & 0xEF);






 if (VAR_12 & VAR_1) {
  FUNC_1(0x10, VAR_9);
  FUNC_1(0xff, VAR_10);
  FUNC_1(0x11, VAR_9);
  FUNC_1(0x40, VAR_10);
  FUNC_1(0x07, VAR_9);
  FUNC_1(VAR_7.Overflow | 0x84, VAR_10);
 }

 if (VAR_12 & VAR_0) {





  FUNC_1(0x04, VAR_9);
  FUNC_1(0xff, VAR_10);
  FUNC_1(0x05, VAR_9);
  FUNC_1(0x00, VAR_10);
 }


 FUNC_6(VAR_11->vgabase, VAR_5, VAR_7.SeqCtrlIndex);
 FUNC_1(VAR_7.CrtCtrlIndex, VAR_9);
 FUNC_3(&VAR_6);
}
