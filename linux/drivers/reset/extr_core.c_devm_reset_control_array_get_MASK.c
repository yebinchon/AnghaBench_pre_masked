
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reset_control {int dummy; } ;
struct device {int of_node; } ;


 int VAR_0 ;
 struct reset_control* FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct reset_control*) ;
 int VAR_2 ;
 int FUNC_2 (struct device*,struct reset_control**) ;
 struct reset_control** FUNC_3 (int ,int,int ) ;
 int FUNC_4 (struct reset_control**) ;
 struct reset_control* FUNC_5 (int ,int,int,int) ;

struct reset_control *
FUNC_6(struct device *VAR_3, bool VAR_4, bool VAR_5)
{
 struct reset_control **VAR_6;
 struct reset_control *VAR_7;

 VAR_6 = FUNC_3(VAR_2, sizeof(*VAR_6),
         VAR_1);
 if (!VAR_6)
  return FUNC_0(-VAR_0);

 VAR_7 = FUNC_5(VAR_3->of_node, VAR_4, VAR_5, 1);
 if (FUNC_1(VAR_7)) {
  FUNC_4(VAR_6);
  return VAR_7;
 }

 *VAR_6 = VAR_7;
 FUNC_2(VAR_3, VAR_6);

 return VAR_7;
}
