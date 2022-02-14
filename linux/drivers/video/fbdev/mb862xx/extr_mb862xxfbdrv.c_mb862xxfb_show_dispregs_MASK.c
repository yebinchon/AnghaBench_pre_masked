
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mb862xxfb_par {int dummy; } ;
struct fb_info {struct mb862xxfb_par* par; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 struct fb_info* FUNC_0 (struct device*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (char*,char*,unsigned int,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_9,
           struct device_attribute *VAR_10, char *VAR_11)
{
 struct fb_info *VAR_12 = FUNC_0(VAR_9);
 struct mb862xxfb_par *VAR_13 = VAR_12->par;
 char *VAR_14 = VAR_11;
 unsigned int VAR_15;

 for (VAR_15 = VAR_2; VAR_15 <= VAR_4; VAR_15 += 4)
  VAR_14 += FUNC_2(VAR_14, "%08x = %08x\n",
          VAR_15, FUNC_1(VAR_6, VAR_15));

 for (VAR_15 = VAR_0; VAR_15 <= VAR_1; VAR_15 += 4)
  VAR_14 += FUNC_2(VAR_14, "%08x = %08x\n",
          VAR_15, FUNC_1(VAR_6, VAR_15));

 for (VAR_15 = VAR_3; VAR_15 <= VAR_5; VAR_15 += 4)
  VAR_14 += FUNC_2(VAR_14, "%08x = %08x\n",
          VAR_15, FUNC_1(VAR_6, VAR_15));

 for (VAR_15 = 0x400; VAR_15 <= 0x410; VAR_15 += 4)
  VAR_14 += FUNC_2(VAR_14, "geo %08x = %08x\n",
          VAR_15, FUNC_1(VAR_8, VAR_15));

 for (VAR_15 = 0x400; VAR_15 <= 0x410; VAR_15 += 4)
  VAR_14 += FUNC_2(VAR_14, "draw %08x = %08x\n",
          VAR_15, FUNC_1(VAR_7, VAR_15));

 for (VAR_15 = 0x440; VAR_15 <= 0x450; VAR_15 += 4)
  VAR_14 += FUNC_2(VAR_14, "draw %08x = %08x\n",
          VAR_15, FUNC_1(VAR_7, VAR_15));

 return VAR_14 - VAR_11;
}
