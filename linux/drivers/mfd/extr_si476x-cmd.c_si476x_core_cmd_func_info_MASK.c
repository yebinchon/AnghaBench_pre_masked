
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int major; int* minor; } ;
struct si476x_func_info {int patch_id; int func; TYPE_1__ firmware; } ;
struct si476x_core {int dummy; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct si476x_core*,int ,int *,int ,int*,int ,int ) ;

int FUNC_2(struct si476x_core *VAR_3,
         struct si476x_func_info *VAR_4)
{
 int VAR_5;
 u8 VAR_6[VAR_1];

 VAR_5 = FUNC_1(VAR_3, VAR_0,
           ((void*)0), 0,
           VAR_6, FUNC_0(VAR_6),
           VAR_2);

 VAR_4->firmware.major = VAR_6[1];
 VAR_4->firmware.minor[0] = VAR_6[2];
 VAR_4->firmware.minor[1] = VAR_6[3];

 VAR_4->patch_id = ((u16) VAR_6[4] << 8) | VAR_6[5];
 VAR_4->func = VAR_6[6];

 return VAR_5;
}
