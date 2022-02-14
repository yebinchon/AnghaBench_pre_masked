
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef int guid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (char*,int *) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*,size_t,int ) ;
 int FUNC_3 (struct kobject*,struct device*,int *) ;

__attribute__((used)) static ssize_t FUNC_4(struct kobject *VAR_4, struct device *VAR_5,
       const char *VAR_6, size_t VAR_7)
{
 char *VAR_8;
 guid_t VAR_9;
 int VAR_10;

 if ((VAR_7 < VAR_3) || (VAR_7 > VAR_3 + 1))
  return -VAR_0;

 VAR_8 = FUNC_2(VAR_6, VAR_7, VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_10 = FUNC_0(VAR_8, &VAR_9);
 FUNC_1(VAR_8);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_3(VAR_4, VAR_5, &VAR_9);
 if (VAR_10)
  return VAR_10;

 return VAR_7;
}
