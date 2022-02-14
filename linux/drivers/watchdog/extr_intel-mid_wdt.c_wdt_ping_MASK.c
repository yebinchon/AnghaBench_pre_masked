
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int) ;
 struct device* FUNC_1 (struct watchdog_device*) ;
 int FUNC_2 (int ,int *,int ) ;

__attribute__((used)) static int FUNC_3(struct watchdog_device *VAR_1)
{
 struct device *VAR_2 = FUNC_1(VAR_1);
 int VAR_3;

 VAR_3 = FUNC_2(VAR_0, ((void*)0), 0);
 if (VAR_3)
  FUNC_0(VAR_2, "Error executing keepalive: %d\n", VAR_3);

 return VAR_3;
}
