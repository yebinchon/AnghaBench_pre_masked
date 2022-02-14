
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {scalar_t__ mute_mode; } ;
struct fmdev {TYPE_1__ rx; } ;


 int FUNC_0 (struct fmdev*) ;

int FUNC_1(struct fmdev *VAR_0, u8 VAR_1)
{
 u8 VAR_2;
 int VAR_3;

 if (VAR_0->rx.mute_mode == VAR_1)
  return 0;

 VAR_2 = VAR_0->rx.mute_mode;
 VAR_0->rx.mute_mode = VAR_1;

 VAR_3 = FUNC_0(VAR_0);
 if (VAR_3 < 0) {
  VAR_0->rx.mute_mode = VAR_2;
  return VAR_3;
 }

 return 0;
}
