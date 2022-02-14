
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us_data {int send_ctrl_pipe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct us_data*,int ,int,int,int,int,int *,int,int) ;
 int FUNC_1 (struct us_data*,char*,...) ;

int FUNC_2(struct us_data *VAR_3)
{
 int VAR_4;

 FUNC_1(VAR_3, "Attempting to init eUSCSI bridge...\n");
 VAR_4 = FUNC_0(VAR_3, VAR_3->send_ctrl_pipe,
   0x0C, VAR_1 | VAR_2,
   0x01, 0x0, ((void*)0), 0x0, 5 * VAR_0);
 FUNC_1(VAR_3, "-- result is %d\n", VAR_4);

 return 0;
}
