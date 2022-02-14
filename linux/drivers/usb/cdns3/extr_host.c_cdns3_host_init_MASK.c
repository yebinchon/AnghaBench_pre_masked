
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdns3_role_driver {char* name; int state; int stop; int start; } ;
struct cdns3 {struct cdns3_role_driver** roles; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct cdns3_role_driver* FUNC_0 (int ,int,int ) ;

int FUNC_1(struct cdns3 *VAR_6)
{
 struct cdns3_role_driver *VAR_7;

 VAR_7 = FUNC_0(VAR_6->dev, sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_7->start = VAR_4;
 VAR_7->stop = VAR_5;
 VAR_7->state = VAR_0;
 VAR_7->name = "host";

 VAR_6->roles[VAR_3] = VAR_7;

 return 0;
}
