
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slim_eaddr {int dummy; } ;
struct slim_device {int dummy; } ;
struct slim_controller {int dev; } ;
struct device {int dummy; } ;


 struct device* FUNC_0 (int ,struct slim_eaddr*,int ) ;
 int VAR_0 ;
 struct slim_device* FUNC_1 (struct device*) ;

__attribute__((used)) static struct slim_device *FUNC_2(struct slim_controller *VAR_1,
         struct slim_eaddr *VAR_2)
{
 struct slim_device *VAR_3;
 struct device *VAR_4;

 VAR_4 = FUNC_0(VAR_1->dev, VAR_2, VAR_0);
 if (VAR_4) {
  VAR_3 = FUNC_1(VAR_4);
  return VAR_3;
 }

 return ((void*)0);
}
