
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct ns_thermal {int tz; int pvtmon; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct device*) ;
 struct ns_thermal* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (struct device*,int ,struct ns_thermal*,int *) ;
 int FUNC_6 (int ) ;
 int VAR_3 ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct platform_device*,struct ns_thermal*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_4)
{
 struct device *VAR_5 = &VAR_4->dev;
 struct ns_thermal *VAR_6;

 VAR_6 = FUNC_4(VAR_5, sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return -VAR_1;

 VAR_6->pvtmon = FUNC_7(FUNC_3(VAR_5), 0);
 if (FUNC_2(!VAR_6->pvtmon))
  return -VAR_0;

 VAR_6->tz = FUNC_5(VAR_5, 0,
             VAR_6,
             &VAR_3);
 if (FUNC_0(VAR_6->tz)) {
  FUNC_6(VAR_6->pvtmon);
  return FUNC_1(VAR_6->tz);
 }

 FUNC_8(VAR_4, VAR_6);

 return 0;
}
