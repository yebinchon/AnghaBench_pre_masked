
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct omapfb_info {int num_overlays; int* rotation; int region; } ;
struct fb_info {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct omapfb_info* FUNC_0 (struct fb_info*) ;
 int VAR_1 ;
 struct fb_info* FUNC_1 (struct device*) ;
 int FUNC_2 (struct fb_info*) ;
 int FUNC_3 (struct fb_info*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,char**,int ) ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (struct fb_info*) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_2,
  struct device_attribute *VAR_3, const char *VAR_4, size_t VAR_5)
{
 struct fb_info *VAR_6 = FUNC_1(VAR_2);
 struct omapfb_info *VAR_7 = FUNC_0(VAR_6);
 int VAR_8 = 0, VAR_9, VAR_10;
 int VAR_11;
 bool VAR_12 = 0;
 u8 VAR_13[VAR_1];

 VAR_11 = FUNC_7(VAR_4);
 if (VAR_4[VAR_11 - 1] == '\n')
  VAR_11 = VAR_11 - 1;

 FUNC_2(VAR_6);

 if (VAR_11 > 0) {
  char *VAR_14 = (char *)VAR_4;

  while (VAR_14 < VAR_4 + VAR_11) {
   int VAR_15;

   if (VAR_8 == VAR_7->num_overlays) {
    VAR_9 = -VAR_0;
    goto out;
   }

   VAR_15 = FUNC_6(VAR_14, &VAR_14, 0);
   if (VAR_15 < 0 || VAR_15 > 3) {
    VAR_9 = -VAR_0;
    goto out;
   }

   if (VAR_7->rotation[VAR_8] != VAR_15)
    VAR_12 = 1;

   VAR_13[VAR_8++] = VAR_15;

   VAR_14++;
  }
 }

 if (VAR_8 != VAR_7->num_overlays) {
  VAR_9 = -VAR_0;
  goto out;
 }

 if (VAR_12) {
  for (VAR_10 = 0; VAR_10 < VAR_8; ++VAR_10)
   VAR_7->rotation[VAR_10] = VAR_13[VAR_10];

  FUNC_4(VAR_7->region);

  VAR_9 = FUNC_3(VAR_6, 0);

  FUNC_5(VAR_7->region);

  if (VAR_9)
   goto out;


 }

 VAR_9 = VAR_5;
out:
 FUNC_8(VAR_6);

 return VAR_9;
}
