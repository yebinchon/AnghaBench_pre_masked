
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us_data {int send_ctrl_pipe; } ;


 int VAR_0 ;
 int FUNC_0 (struct us_data*,int ,int ,int,int ,int ,unsigned char*,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct us_data *VAR_1,
         unsigned char *VAR_2,
         unsigned int VAR_3)
{
 return FUNC_0(VAR_1, VAR_1->send_ctrl_pipe,
          VAR_0, 0x40, 0, 0,
          VAR_2, VAR_3);
}
