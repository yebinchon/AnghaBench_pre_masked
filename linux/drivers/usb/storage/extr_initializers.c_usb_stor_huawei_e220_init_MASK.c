
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us_data {int send_ctrl_pipe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct us_data*,int ,int ,int,int,int,int *,int,int) ;
 int FUNC_1 (struct us_data*,char*,int) ;

int FUNC_2(struct us_data *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_4, VAR_4->send_ctrl_pipe,
          VAR_2,
          VAR_3 | VAR_1,
          0x01, 0x0, ((void*)0), 0x0, 1 * VAR_0);
 FUNC_1(VAR_4, "Huawei mode set result is %d\n", VAR_5);
 return 0;
}
