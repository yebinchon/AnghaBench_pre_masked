
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; } ;
struct device_attribute {TYPE_1__ attr; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int,char*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
      struct device_attribute *VAR_1, char *VAR_2)
{
 char *VAR_3 = VAR_2;
 int VAR_4;

 VAR_2 += FUNC_0(VAR_2,
         "hub port sta spd dev      sockfd local_busid\n");

 VAR_4 = FUNC_1(VAR_1->attr.name);
 if (VAR_4 < 0)
  VAR_2 += FUNC_2(VAR_4, VAR_2);
 else
  VAR_2 += FUNC_3(VAR_4, VAR_2);

 return VAR_2 - VAR_3;
}
