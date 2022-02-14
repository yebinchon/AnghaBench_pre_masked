
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_6__ {int wait; int cnt; } ;
struct TYPE_7__ {TYPE_2__ vsync; } ;
struct TYPE_8__ {int wait; int cnt; } ;
struct TYPE_5__ {TYPE_4__ vsync; } ;
struct matrox_fb_info {TYPE_3__ crtc2; TYPE_1__ crtc1; } ;
typedef int irqreturn_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct matrox_fb_info*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_2, void *VAR_3)
{
 u_int32_t VAR_4;
 int VAR_5 = 0;
 struct matrox_fb_info *VAR_6 = VAR_3;

 VAR_4 = FUNC_2(VAR_1);

 if (VAR_4 & 0x20) {
  FUNC_3(VAR_0, 0x20);
  VAR_6->crtc1.vsync.cnt++;
  FUNC_1(VAR_6);
  FUNC_4(&VAR_6->crtc1.vsync.wait);
  VAR_5 = 1;
 }
 if (VAR_4 & 0x200) {
  FUNC_3(VAR_0, 0x200);
  VAR_6->crtc2.vsync.cnt++;
  FUNC_4(&VAR_6->crtc2.vsync.wait);
  VAR_5 = 1;
 }
 return FUNC_0(VAR_5);
}
