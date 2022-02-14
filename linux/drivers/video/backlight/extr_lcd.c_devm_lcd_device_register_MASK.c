
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lcd_ops {int dummy; } ;
struct lcd_device {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct lcd_device* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct lcd_device*) ;
 int VAR_2 ;
 int FUNC_2 (struct device*,struct lcd_device**) ;
 struct lcd_device** FUNC_3 (int ,int,int ) ;
 int FUNC_4 (struct lcd_device**) ;
 struct lcd_device* FUNC_5 (char const*,struct device*,void*,struct lcd_ops*) ;

struct lcd_device *FUNC_6(struct device *VAR_3,
  const char *VAR_4, struct device *VAR_5,
  void *VAR_6, struct lcd_ops *VAR_7)
{
 struct lcd_device **VAR_8, *VAR_9;

 VAR_8 = FUNC_3(VAR_2, sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return FUNC_0(-VAR_0);

 VAR_9 = FUNC_5(VAR_4, VAR_5, VAR_6, VAR_7);
 if (!FUNC_1(VAR_9)) {
  *VAR_8 = VAR_9;
  FUNC_2(VAR_3, VAR_8);
 } else {
  FUNC_4(VAR_8);
 }

 return VAR_9;
}
