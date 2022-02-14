
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa_camera_dev {scalar_t__ sensor; scalar_t__ base; void** save_cicr; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 void* FUNC_0 (scalar_t__) ;
 struct pxa_camera_dev* FUNC_1 (struct device*) ;
 int FUNC_2 (struct pxa_camera_dev*,int ) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_5)
{
 struct pxa_camera_dev *VAR_6 = FUNC_1(VAR_5);
 int VAR_7 = 0, VAR_8 = 0;

 VAR_6->save_cicr[VAR_7++] = FUNC_0(VAR_6->base + VAR_0);
 VAR_6->save_cicr[VAR_7++] = FUNC_0(VAR_6->base + VAR_1);
 VAR_6->save_cicr[VAR_7++] = FUNC_0(VAR_6->base + VAR_2);
 VAR_6->save_cicr[VAR_7++] = FUNC_0(VAR_6->base + VAR_3);
 VAR_6->save_cicr[VAR_7++] = FUNC_0(VAR_6->base + VAR_4);

 if (VAR_6->sensor)
  VAR_8 = FUNC_2(VAR_6, 0);

 return VAR_8;
}
