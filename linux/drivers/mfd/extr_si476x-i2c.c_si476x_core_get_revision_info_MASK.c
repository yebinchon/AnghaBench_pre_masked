
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * minor; int major; } ;
struct si476x_func_info {TYPE_1__ firmware; int func; } ;
struct si476x_core {int revision; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct si476x_core*,struct si476x_func_info*) ;
 int FUNC_1 (struct si476x_core*,int ,int ,int ,int ) ;
 int FUNC_2 (struct si476x_core*) ;
 int FUNC_3 (struct si476x_core*,int ) ;
 int FUNC_4 (struct si476x_core*) ;

__attribute__((used)) static int FUNC_5(struct si476x_core *VAR_2)
{
 int VAR_3;
 struct si476x_func_info VAR_4;

 FUNC_2(VAR_2);
 VAR_3 = FUNC_3(VAR_2, VAR_1);
 if (VAR_3 < 0)
  goto exit;

 VAR_3 = FUNC_0(VAR_2, &VAR_4);
 if (VAR_3 < 0)
  goto power_down;

 VAR_2->revision = FUNC_1(VAR_2, VAR_4.func,
             VAR_4.firmware.major,
             VAR_4.firmware.minor[0],
             VAR_4.firmware.minor[1]);
power_down:
 FUNC_3(VAR_2, VAR_0);
exit:
 FUNC_4(VAR_2);

 return VAR_3;
}
