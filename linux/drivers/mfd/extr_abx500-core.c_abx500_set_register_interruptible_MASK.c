
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct device {int parent; } ;
struct abx500_ops {int (* set_register ) (struct device*,int ,int ,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,struct abx500_ops**) ;
 int FUNC_1 (struct device*,int ,int ,int ) ;

int FUNC_2(struct device *VAR_1, u8 VAR_2, u8 VAR_3,
 u8 VAR_4)
{
 struct abx500_ops *VAR_5;

 FUNC_0(VAR_1->parent, &VAR_5);
 if (VAR_5 && VAR_5->set_register)
  return VAR_5->set_register(VAR_1, VAR_2, VAR_3, VAR_4);
 else
  return -VAR_0;
}
