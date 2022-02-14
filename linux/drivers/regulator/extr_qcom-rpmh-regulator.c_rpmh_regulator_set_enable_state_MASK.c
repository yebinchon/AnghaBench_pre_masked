
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcs_cmd {int data; scalar_t__ addr; } ;
struct rpmh_vreg {int enabled; int voltage_selector; scalar_t__ addr; } ;
struct regulator_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct regulator_dev*,int ,int) ;
 struct rpmh_vreg* FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct rpmh_vreg*,struct tcs_cmd*,int) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_3,
     bool VAR_4)
{
 struct rpmh_vreg *VAR_5 = FUNC_1(VAR_3);
 struct tcs_cmd VAR_6 = {
  .addr = VAR_5->addr + VAR_2,
  .data = VAR_4,
 };
 int VAR_7;

 if (VAR_5->enabled == -VAR_0 &&
     VAR_5->voltage_selector != -VAR_1) {
  VAR_7 = FUNC_0(VAR_3,
      VAR_5->voltage_selector, 1);
  if (VAR_7 < 0)
   return VAR_7;
 }

 VAR_7 = FUNC_2(VAR_5, &VAR_6, VAR_4);
 if (!VAR_7)
  VAR_5->enabled = VAR_4;

 return VAR_7;
}
