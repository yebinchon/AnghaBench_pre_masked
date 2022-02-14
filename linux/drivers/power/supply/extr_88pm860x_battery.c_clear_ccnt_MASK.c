
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm860x_battery_info {int dummy; } ;
struct ccnt {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ccnt*,int ,int) ;
 int FUNC_1 (struct pm860x_battery_info*,int ,int*) ;

__attribute__((used)) static int FUNC_2(struct pm860x_battery_info *VAR_6, struct ccnt *VAR_7)
{
 int VAR_8;

 FUNC_0(VAR_7, 0, sizeof(*VAR_7));

 FUNC_1(VAR_6, VAR_2, &VAR_8);
 FUNC_1(VAR_6, VAR_3, &VAR_8);
 FUNC_1(VAR_6, VAR_0, &VAR_8);
 FUNC_1(VAR_6, VAR_1, &VAR_8);
 FUNC_1(VAR_6, VAR_5, &VAR_8);
 FUNC_1(VAR_6, VAR_4, &VAR_8);
 return 0;
}
