
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa_camera_dev {int* save_cicr; scalar_t__ active; scalar_t__ sensor; scalar_t__ base; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int,scalar_t__) ;
 struct pxa_camera_dev* FUNC_1 (struct device*) ;
 int FUNC_2 (struct pxa_camera_dev*) ;
 int FUNC_3 (struct pxa_camera_dev*,int) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_6)
{
 struct pxa_camera_dev *VAR_7 = FUNC_1(VAR_6);
 int VAR_8 = 0, VAR_9 = 0;

 FUNC_0(VAR_7->save_cicr[VAR_8++] & ~VAR_1, VAR_7->base + VAR_0);
 FUNC_0(VAR_7->save_cicr[VAR_8++], VAR_7->base + VAR_2);
 FUNC_0(VAR_7->save_cicr[VAR_8++], VAR_7->base + VAR_3);
 FUNC_0(VAR_7->save_cicr[VAR_8++], VAR_7->base + VAR_4);
 FUNC_0(VAR_7->save_cicr[VAR_8++], VAR_7->base + VAR_5);

 if (VAR_7->sensor) {
  VAR_9 = FUNC_3(VAR_7, 1);
 }


 if (!VAR_9 && VAR_7->active)
  FUNC_2(VAR_7);

 return VAR_9;
}
