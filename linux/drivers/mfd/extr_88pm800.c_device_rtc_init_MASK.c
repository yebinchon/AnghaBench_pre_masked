
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct pm80x_rtc_pdata {int dummy; } ;
struct pm80x_platform_data {scalar_t__ rtc; } ;
struct pm80x_chip {int dev; } ;
struct TYPE_4__ {int pdata_size; scalar_t__ platform_data; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ,TYPE_1__*,int ,int *,int ,int *) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_3(struct pm80x_chip *VAR_1,
    struct pm80x_platform_data *VAR_2)
{
 int VAR_3;

 if (VAR_2) {
  VAR_0[0].platform_data = VAR_2->rtc;
  VAR_0[0].pdata_size =
    VAR_2->rtc ? sizeof(struct pm80x_rtc_pdata) : 0;
 }
 VAR_3 = FUNC_2(VAR_1->dev, 0, &VAR_0[0],
         FUNC_0(VAR_0), ((void*)0), 0, ((void*)0));
 if (VAR_3) {
  FUNC_1(VAR_1->dev, "Failed to add rtc subdev\n");
  return VAR_3;
 }

 return 0;
}
