
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ci_role_driver {char* name; int irq; int stop; int start; } ;
struct ci_hdrc {struct ci_role_driver** roles; int dev; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct ci_role_driver* FUNC_0 (int ,int,int ) ;
 int FUNC_1 (struct ci_hdrc*,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct ci_hdrc*) ;

int FUNC_3(struct ci_hdrc *VAR_9)
{
 struct ci_role_driver *VAR_10;
 int VAR_11;

 if (!FUNC_1(VAR_9, VAR_0, VAR_2))
  return -VAR_4;

 VAR_10 = FUNC_0(VAR_9->dev, sizeof(*VAR_10), VAR_5);
 if (!VAR_10)
  return -VAR_3;

 VAR_10->start = VAR_6;
 VAR_10->stop = VAR_7;
 VAR_10->irq = VAR_8;
 VAR_10->name = "gadget";

 VAR_11 = FUNC_2(VAR_9);
 if (!VAR_11)
  VAR_9->roles[VAR_1] = VAR_10;

 return VAR_11;
}
