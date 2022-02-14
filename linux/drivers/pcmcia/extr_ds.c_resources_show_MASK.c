
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_device {int * resource; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int ) ;
 struct pcmcia_device* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
         struct device_attribute *VAR_2, char *VAR_3)
{
 struct pcmcia_device *VAR_4 = FUNC_1(VAR_1);
 char *VAR_5 = VAR_3;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
  VAR_5 += FUNC_0(VAR_5, "%pr\n", VAR_4->resource[VAR_6]);

 return VAR_5 - VAR_3;
}
