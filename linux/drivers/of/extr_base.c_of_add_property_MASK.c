
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct property {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device_node*,struct property*) ;
 int FUNC_1 (struct device_node*,struct property*) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int FUNC_4 (int ,struct device_node*,struct property*,int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

int FUNC_7(struct device_node *VAR_3, struct property *VAR_4)
{
 unsigned long VAR_5;
 int VAR_6;

 FUNC_2(&VAR_2);

 FUNC_5(&VAR_1, VAR_5);
 VAR_6 = FUNC_0(VAR_3, VAR_4);
 FUNC_6(&VAR_1, VAR_5);

 if (!VAR_6)
  FUNC_1(VAR_3, VAR_4);

 FUNC_3(&VAR_2);

 if (!VAR_6)
  FUNC_4(VAR_0, VAR_3, VAR_4, ((void*)0));

 return VAR_6;
}
