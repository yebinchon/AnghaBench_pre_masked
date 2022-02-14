
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct wm8775_state {int input; TYPE_3__* bal; TYPE_2__* vol; TYPE_1__* mute; } ;
struct v4l2_subdev {int dummy; } ;
struct TYPE_6__ {scalar_t__ val; } ;
struct TYPE_5__ {scalar_t__ val; } ;
struct TYPE_4__ {scalar_t__ val; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 struct wm8775_state* FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (struct v4l2_subdev*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct v4l2_subdev *VAR_3, int VAR_4)
{
 struct wm8775_state *VAR_5 = FUNC_1(VAR_3);
 u8 VAR_6, VAR_7;
 int VAR_8 = 0 != VAR_5->mute->val;
 u16 VAR_9 = (u16)VAR_5->vol->val;
 u16 VAR_10 = (u16)VAR_5->bal->val;


 VAR_6 = (FUNC_0(65536 - VAR_10, 32768) * VAR_9) >> 23;
 VAR_7 = (FUNC_0(VAR_10, (u16)32768) * VAR_9) >> 23;


 if (VAR_8 || VAR_4)
  FUNC_2(VAR_3, VAR_2, 0x0c0 | VAR_5->input);

 FUNC_2(VAR_3, VAR_0, VAR_6 | 0x100);
 FUNC_2(VAR_3, VAR_1, VAR_7 | 0x100);


 if (!VAR_8)
  FUNC_2(VAR_3, VAR_2, VAR_5->input);
}
