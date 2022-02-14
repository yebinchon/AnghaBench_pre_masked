
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct fb_videomode {scalar_t__ xres; scalar_t__ yres; } ;
struct TYPE_4__ {TYPE_1__* shared; } ;
struct TYPE_3__ {int i2c_31; int i2c_26; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (char const*,char**,int) ;
 struct fb_videomode* FUNC_2 (int ) ;
 TYPE_2__* VAR_3 ;

__attribute__((used)) static int FUNC_3(const char *VAR_4, u32 VAR_5, u32 *VAR_6, u32 *VAR_7)
{
 const struct fb_videomode *VAR_8 = ((void*)0);
 char *VAR_9;

 if (!VAR_4) {
  if (VAR_5 == VAR_1)
   VAR_8 = FUNC_2(
    VAR_3->shared->i2c_26);
  else if (VAR_5 == VAR_2)
   VAR_8 = FUNC_2(
    VAR_3->shared->i2c_31);

  if (VAR_8) {
   *VAR_6 = VAR_8->xres;
   *VAR_7 = VAR_8->yres;
  } else if (FUNC_0()) {
   *VAR_6 = 1200;
   *VAR_7 = 900;
  } else {
   *VAR_6 = 640;
   *VAR_7 = 480;
  }
  return 0;
 }

 *VAR_6 = FUNC_1(VAR_4, &VAR_9, 10);
 if (VAR_9[0] != 'x')
  return -VAR_0;

 *VAR_7 = FUNC_1(&VAR_9[1], &VAR_9, 10);
 if (VAR_9[0])
  return -VAR_0;

 return 0;
}
