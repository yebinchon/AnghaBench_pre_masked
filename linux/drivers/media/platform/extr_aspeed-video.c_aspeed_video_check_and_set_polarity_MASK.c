
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int polarities; } ;
struct aspeed_video {TYPE_1__ detected_timings; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct aspeed_video*,int ) ;
 int FUNC_1 (struct aspeed_video*,int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct aspeed_video *VAR_9)
{
 int VAR_10;
 int VAR_11 = 0;
 int VAR_12 = 0;
 u32 VAR_13;

 for (VAR_10 = 0; VAR_10 < VAR_0; ++VAR_10) {
  VAR_13 = FUNC_0(VAR_9, VAR_6);
  if (VAR_13 & VAR_8)
   VAR_12--;
  else
   VAR_12++;

  if (VAR_13 & VAR_7)
   VAR_11--;
  else
   VAR_11++;
 }

 if (VAR_11 < 0 || VAR_12 < 0) {
  u32 VAR_14 = 0;

  if (VAR_11 < 0) {
   VAR_14 = VAR_4;
   VAR_9->detected_timings.polarities &=
    ~VAR_1;
  } else {
   VAR_9->detected_timings.polarities |=
    VAR_1;
  }

  if (VAR_12 < 0) {
   VAR_14 = VAR_5;
   VAR_9->detected_timings.polarities &=
    ~VAR_2;
  } else {
   VAR_9->detected_timings.polarities |=
    VAR_2;
  }

  if (VAR_14)
   FUNC_1(VAR_9, VAR_3, 0, VAR_14);
 }
}
