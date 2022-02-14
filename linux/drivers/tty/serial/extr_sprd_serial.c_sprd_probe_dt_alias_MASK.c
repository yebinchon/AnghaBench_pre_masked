
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;


 int FUNC_0 (int **) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (struct device_node*,char*) ;
 int ** VAR_1 ;

__attribute__((used)) static int FUNC_4(int VAR_2, struct device *VAR_3)
{
 struct device_node *VAR_4;
 int VAR_5 = VAR_2;

 if (!FUNC_1(VAR_0))
  return VAR_5;

 VAR_4 = VAR_3->of_node;
 if (!VAR_4)
  return VAR_5;

 VAR_5 = FUNC_3(VAR_4, "serial");
 if (VAR_5 < 0)
  VAR_5 = VAR_2;
 else if (VAR_5 >= FUNC_0(VAR_1) || VAR_1[VAR_5] != ((void*)0)) {
  FUNC_2(VAR_3, "requested serial port %d not available.\n", VAR_5);
  VAR_5 = VAR_2;
 }

 return VAR_5;
}
