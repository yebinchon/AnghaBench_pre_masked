
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int of_node; } ;
struct platform_device {struct device dev; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_2)
{
 struct device *VAR_3 = &VAR_2->dev;
 int VAR_4;

 VAR_1 = FUNC_5(VAR_3->of_node, "syscon");
 if (FUNC_0(VAR_1)) {
  FUNC_3("%pOFn: syscon lookup failed\n", VAR_3->of_node);
  return FUNC_1(VAR_1);
 }

 VAR_4 = FUNC_4(&VAR_0);
 if (VAR_4)
  FUNC_2(VAR_3, "cannot register restart handler (err=%d)\n", VAR_4);

 return VAR_4;
}
