
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soc_camera_desc {int dummy; } ;
struct soc_camera_async_client {struct platform_device* pdev; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct platform_device*,struct soc_camera_desc*,int) ;
 struct platform_device* FUNC_4 (char*,int) ;
 int FUNC_5 (struct platform_device*) ;
 int FUNC_6 (int,int ) ;

__attribute__((used)) static int FUNC_7(struct soc_camera_desc *VAR_4,
          struct soc_camera_async_client *VAR_5)
{
 struct platform_device *VAR_6;
 int VAR_7, VAR_8;

 FUNC_1(&VAR_3);
 VAR_8 = FUNC_0(VAR_2, VAR_1);
 if (VAR_8 < VAR_1)
  FUNC_6(VAR_8, VAR_2);
 FUNC_2(&VAR_3);
 if (VAR_8 >= VAR_1)
  return -VAR_0;

 VAR_6 = FUNC_4("soc-camera-pdrv", VAR_8);
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_3(VAR_6, VAR_4, sizeof(*VAR_4));
 if (VAR_7 < 0) {
  FUNC_5(VAR_6);
  return VAR_7;
 }

 VAR_5->pdev = VAR_6;

 return 0;
}
