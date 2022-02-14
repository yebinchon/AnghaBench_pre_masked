
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct hidg_func_node {int node; struct hidg_func_descriptor* func; } ;
struct hidg_func_descriptor {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 struct hidg_func_descriptor* FUNC_1 (int *) ;
 int VAR_3 ;
 struct hidg_func_node* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_4)
{
 struct hidg_func_descriptor *VAR_5 = FUNC_1(&VAR_4->dev);
 struct hidg_func_node *VAR_6;

 if (!VAR_5) {
  FUNC_0(&VAR_4->dev, "Platform data missing\n");
  return -VAR_0;
 }

 VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return -VAR_1;

 VAR_6->func = VAR_5;
 FUNC_3(&VAR_6->node, &VAR_3);

 return 0;
}
