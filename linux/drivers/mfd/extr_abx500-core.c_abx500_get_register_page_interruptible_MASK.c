
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct device {int parent; } ;
struct abx500_ops {int (* get_register_page ) (struct device*,int ,int ,int *,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,struct abx500_ops**) ;
 int FUNC_1 (struct device*,int ,int ,int *,int ) ;

int FUNC_2(struct device *VAR_1, u8 VAR_2,
 u8 VAR_3, u8 *VAR_4, u8 VAR_5)
{
 struct abx500_ops *VAR_6;

 FUNC_0(VAR_1->parent, &VAR_6);
 if (VAR_6 && VAR_6->get_register_page)
  return VAR_6->get_register_page(VAR_1, VAR_2,
   VAR_3, VAR_4, VAR_5);
 else
  return -VAR_0;
}
