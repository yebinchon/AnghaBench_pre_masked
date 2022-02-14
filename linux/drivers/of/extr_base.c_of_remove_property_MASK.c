
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct property {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device_node*,struct property*) ;
 int FUNC_1 (struct device_node*,struct property*) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int FUNC_4 (int ,struct device_node*,struct property*,int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

int FUNC_7(struct device_node *VAR_4, struct property *VAR_5)
{
 unsigned long VAR_6;
 int VAR_7;

 if (!VAR_5)
  return -VAR_0;

 FUNC_2(&VAR_3);

 FUNC_5(&VAR_2, VAR_6);
 VAR_7 = FUNC_0(VAR_4, VAR_5);
 FUNC_6(&VAR_2, VAR_6);

 if (!VAR_7)
  FUNC_1(VAR_4, VAR_5);

 FUNC_3(&VAR_3);

 if (!VAR_7)
  FUNC_4(VAR_1, VAR_4, VAR_5, ((void*)0));

 return VAR_7;
}
