
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct typec_port {TYPE_1__* cap; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int revision; } ;


 int FUNC_0 (char*,char*,int,int) ;
 struct typec_port* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
           struct device_attribute *VAR_1,
           char *VAR_2)
{
 struct typec_port *VAR_3 = FUNC_1(VAR_0);
 u16 VAR_4 = VAR_3->cap->revision;

 return FUNC_0(VAR_2, "%d.%d\n", (VAR_4 >> 8) & 0xff, (VAR_4 >> 4) & 0xf);
}
