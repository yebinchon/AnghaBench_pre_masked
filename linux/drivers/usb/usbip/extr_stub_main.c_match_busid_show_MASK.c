
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_driver {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {char* name; int busid_lock; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,char*,...) ;

__attribute__((used)) static ssize_t FUNC_3(struct device_driver *VAR_3, char *VAR_4)
{
 int VAR_5;
 char *VAR_6 = VAR_4;

 FUNC_0(&VAR_2);
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  FUNC_0(&VAR_1[VAR_5].busid_lock);
  if (VAR_1[VAR_5].name[0])
   VAR_6 += FUNC_2(VAR_6, "%s ", VAR_1[VAR_5].name);
  FUNC_1(&VAR_1[VAR_5].busid_lock);
 }
 FUNC_1(&VAR_2);
 VAR_6 += FUNC_2(VAR_6, "\n");

 return VAR_6 - VAR_4;
}
