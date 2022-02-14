
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_driver {int dummy; } ;
typedef size_t ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (char*,scalar_t__,char*,int,...) ;
 int FUNC_1 () ;
 int VAR_3 ;

__attribute__((used)) static ssize_t FUNC_2(struct device_driver *VAR_4, char *VAR_5)
{
 ssize_t VAR_6;

 if (!FUNC_1())
  return FUNC_0(VAR_5, VAR_0, "0-%u\n",
     VAR_3);

 VAR_6 = FUNC_0(VAR_5, VAR_0 - 1, "%*pbl",
     (int)VAR_1, VAR_2);
 VAR_5[VAR_6++] = '\n';
 VAR_5[VAR_6] = '\0';

 return VAR_6;
}
