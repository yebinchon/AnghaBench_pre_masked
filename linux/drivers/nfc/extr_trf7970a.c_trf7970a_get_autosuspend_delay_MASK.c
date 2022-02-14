
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device_node*,char*,int*) ;

__attribute__((used)) static int FUNC_1(struct device_node *VAR_1)
{
 int VAR_2, VAR_3;

 VAR_3 = FUNC_0(VAR_1, "autosuspend-delay", &VAR_2);
 if (VAR_3)
  VAR_2 = VAR_0;

 return VAR_2;
}
