
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdns3_role_driver {char* name; int state; int resume; int suspend; int stop; int start; } ;
struct cdns3 {struct cdns3_role_driver** roles; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct cdns3_role_driver* FUNC_0 (int ,int,int ) ;

int FUNC_1(struct cdns3 *VAR_8)
{
 struct cdns3_role_driver *VAR_9;

 VAR_9 = FUNC_0(VAR_8->dev, sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_9->start = VAR_4;
 VAR_9->stop = VAR_5;
 VAR_9->suspend = VAR_7;
 VAR_9->resume = VAR_6;
 VAR_9->state = VAR_0;
 VAR_9->name = "gadget";
 VAR_8->roles[VAR_3] = VAR_9;

 return 0;
}
