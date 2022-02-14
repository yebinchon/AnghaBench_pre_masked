
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long rangelow; int capability; } ;
struct pvr2_hdw {TYPE_1__ tuner_signal_info; scalar_t__ tuner_signal_stale; } ;
struct pvr2_ctrl {struct pvr2_hdw* hdw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pvr2_hdw*) ;

__attribute__((used)) static int FUNC_1(struct pvr2_ctrl *VAR_2, int *VAR_3)
{
 unsigned long VAR_4;
 struct pvr2_hdw *VAR_5 = VAR_2->hdw;
 if (VAR_5->tuner_signal_stale) {
  FUNC_0(VAR_5);
 }
 VAR_4 = VAR_5->tuner_signal_info.rangelow;
 if (!VAR_4) {

  *VAR_3 = VAR_0;
  return 0;
 }
 if (VAR_5->tuner_signal_info.capability & VAR_1) {
  VAR_4 = (VAR_4 * 125) / 2;
 } else {
  VAR_4 = VAR_4 * 62500;
 }
 *VAR_3 = VAR_4;
 return 0;
}
