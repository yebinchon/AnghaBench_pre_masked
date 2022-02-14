
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcs_cmd {int data; scalar_t__ addr; } ;
struct rpmh_vreg {unsigned int voltage_selector; scalar_t__ addr; } ;
struct regulator_dev {int dummy; } ;


 int FUNC_0 (int ,int) ;
 scalar_t__ VAR_0 ;
 struct rpmh_vreg* FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct regulator_dev*,unsigned int) ;
 int FUNC_3 (struct rpmh_vreg*,struct tcs_cmd*,int) ;

__attribute__((used)) static int FUNC_4(struct regulator_dev *VAR_1,
    unsigned int VAR_2, bool VAR_3)
{
 struct rpmh_vreg *VAR_4 = FUNC_1(VAR_1);
 struct tcs_cmd VAR_5 = {
  .addr = VAR_4->addr + VAR_0,
 };
 int VAR_6;


 VAR_5.data = FUNC_0(FUNC_2(VAR_1,
       VAR_2), 1000);

 VAR_6 = FUNC_3(VAR_4, &VAR_5, VAR_3);
 if (!VAR_6)
  VAR_4->voltage_selector = VAR_2;

 return VAR_6;
}
