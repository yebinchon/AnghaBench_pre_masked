
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int32_t ;
struct matrox_vsync {unsigned int cnt; int wait; } ;
struct TYPE_4__ {struct matrox_vsync vsync; } ;
struct TYPE_6__ {int accelerator; } ;
struct TYPE_5__ {struct matrox_vsync vsync; } ;
struct matrox_fb_info {TYPE_1__ crtc2; TYPE_3__ devflags; TYPE_2__ crtc1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct matrox_fb_info*,int) ;
 int FUNC_1 (int ,int,int) ;

int FUNC_2(struct matrox_fb_info *VAR_4, u_int32_t VAR_5)
{
 struct matrox_vsync *VAR_6;
 unsigned int VAR_7;
 int VAR_8;

 switch (VAR_5) {
  case 0:
   VAR_6 = &VAR_4->crtc1.vsync;
   break;
  case 1:
   if (VAR_4->devflags.accelerator != VAR_2) {
    return -VAR_0;
   }
   VAR_6 = &VAR_4->crtc2.vsync;
   break;
  default:
   return -VAR_0;
 }
 VAR_8 = FUNC_0(VAR_4, 0);
 if (VAR_8) {
  return VAR_8;
 }

 VAR_7 = VAR_6->cnt;
 VAR_8 = FUNC_1(VAR_6->wait, VAR_7 != VAR_6->cnt, VAR_3/10);
 if (VAR_8 < 0) {
  return VAR_8;
 }
 if (VAR_8 == 0) {
  FUNC_0(VAR_4, 1);
  return -VAR_1;
 }
 return 0;
}
