
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct platform_device {int dummy; } ;
struct omap_dss_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct platform_device* FUNC_0 (struct omap_dss_device*) ;
 int FUNC_1 (struct platform_device*,int,int *,int) ;
 int FUNC_2 (struct platform_device*,int,int *,int,int ) ;
 int FUNC_3 (struct omap_dss_device*,int) ;

__attribute__((used)) static int FUNC_4(struct omap_dss_device *VAR_2, int VAR_3,
  u8 *VAR_4, int VAR_5, u8 *VAR_6, int VAR_7)
{
 struct platform_device *VAR_8 = FUNC_0(VAR_2);
 int VAR_9;

 VAR_9 = FUNC_1(VAR_8, VAR_3, VAR_4, VAR_5);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_3(VAR_2, VAR_3);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_2(VAR_8, VAR_3, VAR_6, VAR_7,
  VAR_0);
 if (VAR_9 < 0)
  return VAR_9;

 if (VAR_9 != VAR_7) {
  VAR_9 = -VAR_1;
  return VAR_9;
 }

 return 0;
}
