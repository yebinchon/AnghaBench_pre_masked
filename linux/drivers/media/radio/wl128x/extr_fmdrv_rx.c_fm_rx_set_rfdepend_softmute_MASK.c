
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {scalar_t__ rf_depend_mute; } ;
struct fmdev {scalar_t__ curr_fmmode; TYPE_1__ rx; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct fmdev*) ;
 int FUNC_1 (char*) ;

int FUNC_2(struct fmdev *VAR_5, u8 VAR_6)
{
 u8 VAR_7;
 int VAR_8;

 if (VAR_5->curr_fmmode != VAR_2)
  return -VAR_1;

 if (VAR_6 != VAR_4 &&
     VAR_6 != VAR_3) {
  FUNC_1("Invalid RF dependent soft mute\n");
  return -VAR_0;
 }
 if (VAR_5->rx.rf_depend_mute == VAR_6)
  return 0;

 VAR_7 = VAR_5->rx.rf_depend_mute;
 VAR_5->rx.rf_depend_mute = VAR_6;

 VAR_8 = FUNC_0(VAR_5);
 if (VAR_8 < 0) {
  VAR_5->rx.rf_depend_mute = VAR_7;
  return VAR_8;
 }

 return 0;
}
