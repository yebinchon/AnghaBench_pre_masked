
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ max_data_size; scalar_t__ max_cmd_size; int cmd_buf; } ;
struct ath6kl {TYPE_1__ bmi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,int ) ;

int FUNC_2(struct ath6kl *VAR_3)
{
 if (FUNC_0(VAR_3->bmi.max_data_size == 0))
  return -VAR_0;


 VAR_3->bmi.max_cmd_size = VAR_3->bmi.max_data_size + (sizeof(u32) * 3);

 VAR_3->bmi.cmd_buf = FUNC_1(VAR_3->bmi.max_cmd_size, VAR_2);
 if (!VAR_3->bmi.cmd_buf)
  return -VAR_1;

 return 0;
}
