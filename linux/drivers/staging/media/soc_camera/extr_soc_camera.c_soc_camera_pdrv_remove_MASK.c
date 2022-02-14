
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soc_camera_device {int list; } ;
struct platform_device {int id; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 struct soc_camera_device* FUNC_2 (struct platform_device*) ;
 scalar_t__ FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_2)
{
 struct soc_camera_device *VAR_3 = FUNC_2(VAR_2);
 int VAR_4;

 if (!VAR_3)
  return -VAR_0;

 VAR_4 = VAR_2->id;
 if (VAR_4 < 0)
  VAR_4 = 0;







 if (FUNC_3(VAR_4, VAR_1)) {
  FUNC_0(VAR_4, VAR_1);
  FUNC_1(&VAR_3->list);
 }

 return 0;
}
