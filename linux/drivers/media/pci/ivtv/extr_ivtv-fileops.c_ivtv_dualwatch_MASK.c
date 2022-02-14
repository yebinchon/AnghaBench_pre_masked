
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vt ;
typedef scalar_t__ u32 ;
struct v4l2_tuner {scalar_t__ audmode; int rxsubchans; } ;
struct TYPE_2__ {int audio_mode; } ;
struct ivtv {scalar_t__ dualwatch_stereo_mode; TYPE_1__ cxhdl; } ;


 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ivtv*,int ,int ,struct v4l2_tuner*) ;
 int FUNC_2 (struct v4l2_tuner*,int ,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct ivtv *VAR_4)
{
 struct v4l2_tuner VAR_5;
 u32 VAR_6;
 const u32 VAR_7 = 0x02;

 VAR_6 = FUNC_3(VAR_4->cxhdl.audio_mode);
 FUNC_2(&VAR_5, 0, sizeof(VAR_5));
 FUNC_1(VAR_4, VAR_3, VAR_2, &VAR_5);
 if (VAR_5.audmode == VAR_0 && (VAR_5.rxsubchans & VAR_1))
  VAR_6 = VAR_7;

 if (VAR_6 == VAR_4->dualwatch_stereo_mode)
  return;

 FUNC_0("dualwatch: change stereo flag from 0x%x to 0x%x.\n",
      VAR_4->dualwatch_stereo_mode, VAR_6);
 if (FUNC_4(VAR_4->cxhdl.audio_mode, VAR_6))
  FUNC_0("dualwatch: changing stereo flag failed\n");
}
