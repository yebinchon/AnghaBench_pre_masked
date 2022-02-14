
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_videomode {int dummy; } ;
struct fb_info {int modelist; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 struct fb_info* FUNC_3 (struct device*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct fb_info*) ;
 int FUNC_6 (struct fb_videomode const*,int,int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (struct fb_info*) ;
 int VAR_1 ;
 int FUNC_9 (struct fb_info*) ;

__attribute__((used)) static ssize_t FUNC_10(struct device *VAR_2,
      struct device_attribute *VAR_3,
      const char *VAR_4, size_t VAR_5)
{
 struct fb_info *VAR_6 = FUNC_3(VAR_2);
 FUNC_0(VAR_1);
 int VAR_7 = VAR_5 / sizeof(struct fb_videomode);

 if (VAR_7 * sizeof(struct fb_videomode) != VAR_5)
  return -VAR_0;

 FUNC_1();
 FUNC_8(VAR_6);

 FUNC_7(&VAR_6->modelist, &VAR_1);
 FUNC_6((const struct fb_videomode *)VAR_4, VAR_7,
     &VAR_6->modelist);
 if (FUNC_5(VAR_6)) {
  FUNC_4(&VAR_6->modelist);
  FUNC_7(&VAR_1, &VAR_6->modelist);
 } else
  FUNC_4(&VAR_1);

 FUNC_9(VAR_6);
 FUNC_2();

 return 0;
}
