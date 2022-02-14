
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct da9052_battery {scalar_t__ status; int da9052; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct da9052_battery *VAR_4,
           int *VAR_5)
{
 int VAR_6;

 if (VAR_4->status == VAR_3)
  return -VAR_2;

 VAR_6 = FUNC_0(VAR_4->da9052, VAR_1);
 if (VAR_6 < 0)
  return VAR_6;

 *VAR_5 = FUNC_1(VAR_6 & VAR_0);

 return 0;
}
