
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_low_level {int dummy; } ;
struct device {scalar_t__ platform_data; } ;


 int FUNC_0 (struct device*,struct pcmcia_low_level*) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_0)
{
 struct pcmcia_low_level *VAR_1 = (struct pcmcia_low_level *)VAR_0->platform_data;

 FUNC_0(VAR_0, VAR_1);
 return 0;
}
