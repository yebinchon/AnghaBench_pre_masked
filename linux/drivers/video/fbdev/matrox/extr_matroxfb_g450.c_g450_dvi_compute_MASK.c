
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct my_timming {scalar_t__ crtc; int mnp; int pixclock; } ;
struct matrox_fb_info {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct matrox_fb_info*,int ) ;
 int FUNC_1 (struct matrox_fb_info*,int ,int ) ;

__attribute__((used)) static int FUNC_2(void* VAR_3, struct my_timming* VAR_4) {
 struct matrox_fb_info *VAR_5 = VAR_3;

 if (VAR_4->mnp < 0) {
  VAR_4->mnp = FUNC_1(VAR_5, VAR_4->pixclock, (VAR_4->crtc == VAR_0) ? VAR_1 : VAR_2);
  VAR_4->pixclock = FUNC_0(VAR_5, VAR_4->mnp);
 }
 return 0;
}
