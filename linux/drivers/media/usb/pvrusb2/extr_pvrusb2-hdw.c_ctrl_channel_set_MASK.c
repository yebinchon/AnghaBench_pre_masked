
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_hdw {unsigned int* freqTable; int freqSlotRadio; int freqSlotTelevision; scalar_t__ freqSelector; } ;
struct pvr2_ctrl {struct pvr2_hdw* hdw; } ;


 int VAR_0 ;
 int FUNC_0 (struct pvr2_hdw*,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct pvr2_ctrl *VAR_1,int VAR_2,int VAR_3)
{
 unsigned VAR_4 = 0;
 struct pvr2_hdw *VAR_5 = VAR_1->hdw;
 if ((VAR_3 < 0) || (VAR_3 > VAR_0)) return 0;
 if (VAR_3 > 0) {
  VAR_4 = VAR_5->freqTable[VAR_3-1];
  if (!VAR_4) return 0;
  FUNC_0(VAR_5,VAR_4);
 }
 if (VAR_5->freqSelector) {
  VAR_5->freqSlotRadio = VAR_3;
 } else {
  VAR_5->freqSlotTelevision = VAR_3;
 }
 return 0;
}
