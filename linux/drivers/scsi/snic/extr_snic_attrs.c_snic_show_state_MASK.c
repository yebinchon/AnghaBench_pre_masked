
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snic {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct device*) ;
 struct snic* FUNC_1 (int ) ;
 size_t FUNC_2 (struct snic*) ;
 char** VAR_1 ;
 int FUNC_3 (char*,int ,char*,char*) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_2,
  struct device_attribute *VAR_3,
  char *VAR_4)
{
 struct snic *VAR_5 = FUNC_1(FUNC_0(VAR_2));

 return FUNC_3(VAR_4, VAR_0, "%s\n",
   VAR_1[FUNC_2(VAR_5)]);
}
