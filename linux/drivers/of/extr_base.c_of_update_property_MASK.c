
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct property {int name; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device_node*,struct property*,struct property**) ;
 int FUNC_1 (struct device_node*,struct property*,struct property*) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int FUNC_4 (int ,struct device_node*,struct property*,struct property*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

int FUNC_7(struct device_node *VAR_4, struct property *VAR_5)
{
 struct property *VAR_6;
 unsigned long VAR_7;
 int VAR_8;

 if (!VAR_5->name)
  return -VAR_0;

 FUNC_2(&VAR_3);

 FUNC_5(&VAR_2, VAR_7);
 VAR_8 = FUNC_0(VAR_4, VAR_5, &VAR_6);
 FUNC_6(&VAR_2, VAR_7);

 if (!VAR_8)
  FUNC_1(VAR_4, VAR_5, VAR_6);

 FUNC_3(&VAR_3);

 if (!VAR_8)
  FUNC_4(VAR_1, VAR_4, VAR_5, VAR_6);

 return VAR_8;
}
