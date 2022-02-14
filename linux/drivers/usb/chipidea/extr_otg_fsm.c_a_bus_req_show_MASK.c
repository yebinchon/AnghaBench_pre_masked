
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int a_bus_req; } ;
struct ci_hdrc {TYPE_1__ fsm; } ;
typedef unsigned int ssize_t ;


 unsigned int VAR_0 ;
 struct ci_hdrc* FUNC_0 (struct device*) ;
 unsigned int FUNC_1 (char*,unsigned int,char*,int ) ;

__attribute__((used)) static ssize_t
FUNC_2(struct device *VAR_1, struct device_attribute *VAR_2, char *VAR_3)
{
 char *VAR_4;
 unsigned VAR_5, VAR_6;
 struct ci_hdrc *VAR_7 = FUNC_0(VAR_1);

 VAR_4 = VAR_3;
 VAR_5 = VAR_0;
 VAR_6 = FUNC_1(VAR_4, VAR_5, "%d\n", VAR_7->fsm.a_bus_req);
 VAR_5 -= VAR_6;
 VAR_4 += VAR_6;

 return VAR_0 - VAR_5;
}
