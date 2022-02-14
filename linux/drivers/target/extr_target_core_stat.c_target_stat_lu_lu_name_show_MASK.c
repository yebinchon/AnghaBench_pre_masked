
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* unit_serial; } ;
struct se_device {TYPE_1__ t10_wwn; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char*,char*) ;
 scalar_t__ FUNC_1 (char*) ;
 struct se_device* FUNC_2 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_3(struct config_item *VAR_1, char *VAR_2)
{
 struct se_device *VAR_3 = FUNC_2(VAR_1);


 return FUNC_0(VAR_2, VAR_0, "%s\n",
   (FUNC_1(VAR_3->t10_wwn.unit_serial)) ?
   VAR_3->t10_wwn.unit_serial : "None");
}
