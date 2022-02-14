
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ci_hdrc {int role; int irq; TYPE_1__** roles; } ;
typedef size_t ssize_t ;
typedef enum ci_role { ____Placeholder_ci_role } ci_role ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (struct ci_hdrc*) ;
 int FUNC_1 (struct ci_hdrc*,int) ;
 int FUNC_2 (struct ci_hdrc*) ;
 struct ci_hdrc* FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct device*) ;
 int FUNC_8 (struct device*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char const*,int ,int ) ;

__attribute__((used)) static ssize_t FUNC_11(struct device *VAR_5,
  struct device_attribute *VAR_6, const char *VAR_7, size_t VAR_8)
{
 struct ci_hdrc *VAR_9 = FUNC_3(VAR_5);
 enum ci_role VAR_10;
 int VAR_11;

 if (!(VAR_9->roles[VAR_2] && VAR_9->roles[VAR_1])) {
  FUNC_4(VAR_5, "Current configuration is not dual-role, quit\n");
  return -VAR_4;
 }

 for (VAR_10 = VAR_2; VAR_10 < VAR_0; VAR_10++)
  if (!FUNC_10(VAR_7, VAR_9->roles[VAR_10]->name,
        FUNC_9(VAR_9->roles[VAR_10]->name)))
   break;

 if (VAR_10 == VAR_0 || VAR_10 == VAR_9->role)
  return -VAR_3;

 FUNC_7(VAR_5);
 FUNC_5(VAR_9->irq);
 FUNC_2(VAR_9);
 VAR_11 = FUNC_1(VAR_9, VAR_10);
 if (!VAR_11 && VAR_9->role == VAR_1)
  FUNC_0(VAR_9);
 FUNC_6(VAR_9->irq);
 FUNC_8(VAR_5);

 return (VAR_11 == 0) ? VAR_8 : VAR_11;
}
