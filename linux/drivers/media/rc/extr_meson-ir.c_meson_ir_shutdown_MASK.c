
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct meson_ir {int lock; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct meson_ir*,int ,int ,int) ;
 scalar_t__ FUNC_1 (struct device_node*,char*) ;
 struct meson_ir* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct platform_device *VAR_9)
{
 struct device *VAR_10 = &VAR_9->dev;
 struct device_node *VAR_11 = VAR_10->of_node;
 struct meson_ir *VAR_12 = FUNC_2(VAR_9);
 unsigned long VAR_13;

 FUNC_3(&VAR_12->lock, VAR_13);





 if (FUNC_1(VAR_11, "amlogic,meson6-ir"))
  FUNC_0(VAR_12, VAR_2, VAR_5,
      VAR_0 << VAR_6);
 else
  FUNC_0(VAR_12, VAR_3, VAR_7,
      VAR_0 << VAR_8);


 FUNC_0(VAR_12, VAR_1, VAR_4, 0x13);

 FUNC_4(&VAR_12->lock, VAR_13);
}
