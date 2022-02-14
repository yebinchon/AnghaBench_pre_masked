
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_device {scalar_t__ export_count; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char*,char*) ;
 struct se_device* FUNC_1 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_2(struct config_item *VAR_1, char *VAR_2)
{
 struct se_device *VAR_3 = FUNC_1(VAR_1);


 return FUNC_0(VAR_2, VAR_0, "%s\n",
  (VAR_3->export_count) ? "available" : "notavailable");
}
