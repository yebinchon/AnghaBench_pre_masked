
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us_data {char* iobuf; int send_ctrl_pipe; int recv_ctrl_pipe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct us_data*,int ,int,int,int,int,char*,int,int) ;
 int FUNC_2 (struct us_data*,char*,...) ;

__attribute__((used)) static int FUNC_3(struct us_data *VAR_2)
{
 int VAR_3;
 char *VAR_4 = VAR_2->iobuf;






 VAR_3 = FUNC_1(VAR_2, VAR_2->recv_ctrl_pipe,
   0x4c, 0xc0, 0x4346, 0x0, VAR_4, 0x20, 3*VAR_0);
 VAR_4[32] = '\0';
 FUNC_2(VAR_2, "String returned from FC init is: %s\n", VAR_4);
 VAR_3 = FUNC_1(VAR_2, VAR_2->send_ctrl_pipe,
   0x4d, 0x40, 0x24d8, 0x0, ((void*)0), 0x0, 3*VAR_0);
 FUNC_2(VAR_2, "result from activate reset is %d\n", VAR_3);


 FUNC_0(250);


 VAR_3 = FUNC_1(VAR_2, VAR_2->send_ctrl_pipe,
   0x4d, 0x40, 0x24f8, 0x0, ((void*)0), 0x0, 3*VAR_0);
 FUNC_2(VAR_2, "result from clear reset is %d\n", VAR_3);


 FUNC_0(3 * 1000);

 return VAR_1;
}
