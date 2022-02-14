
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct abx500_ops {int dummy; } ;
struct abx500_device_entry {int list; int ops; struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct abx500_device_entry* FUNC_0 (struct device*,int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,struct abx500_ops*,int) ;

int FUNC_3(struct device *VAR_3, struct abx500_ops *VAR_4)
{
 struct abx500_device_entry *VAR_5;

 VAR_5 = FUNC_0(VAR_3, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->dev = VAR_3;
 FUNC_2(&VAR_5->ops, VAR_4, sizeof(*VAR_4));

 FUNC_1(&VAR_5->list, &VAR_2);
 return 0;
}
