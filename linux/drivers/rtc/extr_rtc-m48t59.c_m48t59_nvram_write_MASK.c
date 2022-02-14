
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct m48t59_private {int lock; } ;
struct m48t59_plat_data {int dummy; } ;
typedef size_t ssize_t ;


 int FUNC_0 (int ,size_t) ;
 struct m48t59_plat_data* FUNC_1 (struct device*) ;
 struct m48t59_private* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(void *VAR_0, unsigned int VAR_1, void *VAR_2,
         size_t VAR_3)
{
 struct platform_device *VAR_4 = VAR_0;
 struct device *VAR_5 = &VAR_4->dev;
 struct m48t59_plat_data *VAR_6 = FUNC_1(&VAR_4->dev);
 struct m48t59_private *VAR_7 = FUNC_2(VAR_4);
 ssize_t VAR_8 = 0;
 unsigned long VAR_9;
 u8 *VAR_10 = VAR_2;

 FUNC_3(&VAR_7->lock, VAR_9);

 for (; VAR_8 < VAR_3; VAR_8++)
  FUNC_0(*VAR_10++, VAR_8);

 FUNC_4(&VAR_7->lock, VAR_9);

 return 0;
}
