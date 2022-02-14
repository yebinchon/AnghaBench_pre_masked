
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct velocity_info_tbl {int dummy; } ;
struct TYPE_3__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct of_device_id {struct velocity_info_tbl* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 struct of_device_id* FUNC_1 (int ,TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*,int,struct velocity_info_tbl const*,int ) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_3)
{
 const struct of_device_id *VAR_4;
 const struct velocity_info_tbl *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_1(VAR_2, &VAR_3->dev);
 if (!VAR_4)
  return -VAR_1;
 VAR_5 = VAR_4->data;

 VAR_6 = FUNC_0(VAR_3->dev.of_node, 0);
 if (!VAR_6)
  return -VAR_1;

 return FUNC_2(&VAR_3->dev, VAR_6, VAR_5, VAR_0);
}
