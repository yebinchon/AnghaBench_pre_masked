
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int rxsubchans; } ;
struct pvr2_hdw {TYPE_1__ tuner_signal_info; } ;
struct pvr2_ctrl {struct pvr2_hdw* hdw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_0 (struct pvr2_hdw*) ;

__attribute__((used)) static int FUNC_1(struct pvr2_ctrl *VAR_8,int *VAR_9)
{
 int VAR_10 = 0;
 unsigned int VAR_11;
 struct pvr2_hdw *VAR_12 = VAR_8->hdw;
 FUNC_0(VAR_12);
 VAR_11 = VAR_12->tuner_signal_info.rxsubchans;
 if (VAR_11 & VAR_6) {
  VAR_10 |= (1 << VAR_2);
 }
 if (VAR_11 & VAR_7) {
  VAR_10 |= (1 << VAR_3);
 }
 if (VAR_11 & VAR_4) {
  VAR_10 |= (1 << VAR_0);
 }
 if (VAR_11 & VAR_5) {
  VAR_10 |= (1 << VAR_1);
 }
 *VAR_9 = VAR_10;
 return 0;
}
