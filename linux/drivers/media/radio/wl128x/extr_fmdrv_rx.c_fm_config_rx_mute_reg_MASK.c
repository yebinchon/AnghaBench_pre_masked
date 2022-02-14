
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int mute_mode; scalar_t__ rf_depend_mute; } ;
struct fmdev {TYPE_1__ rx; } ;
typedef int payload ;





 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct fmdev*,int ,int ,int *,int,int *,int *) ;

__attribute__((used)) static int FUNC_1(struct fmdev *VAR_7)
{
 u16 VAR_8, VAR_9;
 int VAR_10;

 VAR_9 = 0;
 switch (VAR_7->rx.mute_mode) {
 case 128:
  VAR_9 = VAR_0;
  break;

 case 129:
  VAR_9 = VAR_4;
  break;

 case 130:
  VAR_9 = VAR_3;
  break;
 }
 if (VAR_7->rx.rf_depend_mute == VAR_1)
  VAR_9 |= VAR_2;
 else
  VAR_9 &= ~VAR_2;

 VAR_8 = VAR_9;
 VAR_10 = FUNC_0(VAR_7, VAR_5, VAR_6, &VAR_8,
   sizeof(VAR_8), ((void*)0), ((void*)0));
 if (VAR_10 < 0)
  return VAR_10;

 return 0;
}
