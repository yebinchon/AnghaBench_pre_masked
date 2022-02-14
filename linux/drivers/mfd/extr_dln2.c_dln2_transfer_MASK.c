
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct dln2_platform_data {int handle; } ;
struct dln2_dev {int dummy; } ;


 int FUNC_0 (struct dln2_dev*,int ,int ,void const*,unsigned int,void*,unsigned int*) ;
 struct dln2_dev* FUNC_1 (int ) ;
 struct dln2_platform_data* FUNC_2 (TYPE_1__*) ;

int FUNC_3(struct platform_device *VAR_0, u16 VAR_1,
    const void *VAR_2, unsigned VAR_3,
    void *VAR_4, unsigned *VAR_5)
{
 struct dln2_platform_data *VAR_6;
 struct dln2_dev *VAR_7;
 u16 VAR_8;

 VAR_7 = FUNC_1(VAR_0->dev.parent);
 VAR_6 = FUNC_2(&VAR_0->dev);
 VAR_8 = VAR_6->handle;

 return FUNC_0(VAR_7, VAR_8, VAR_1, VAR_2, VAR_3, VAR_4,
         VAR_5);
}
