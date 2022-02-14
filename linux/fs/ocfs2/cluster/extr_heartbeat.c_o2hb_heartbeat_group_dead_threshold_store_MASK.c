
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_item {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (unsigned int) ;
 unsigned long FUNC_1 (char*,char**,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct config_item *VAR_1,
  const char *VAR_2, size_t VAR_3)
{
 unsigned long VAR_4;
 char *VAR_5 = (char *)VAR_2;

 VAR_4 = FUNC_1(VAR_5, &VAR_5, 10);
 if (!VAR_5 || (*VAR_5 && (*VAR_5 != '\n')))
                return -VAR_0;


 FUNC_0((unsigned int) VAR_4);

 return VAR_3;
}
