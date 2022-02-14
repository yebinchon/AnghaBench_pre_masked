
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us_data {int recv_ctrl_pipe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct us_data*,int ,int ,int,int ,int ,unsigned char*,int ) ;
 int FUNC_1 (struct us_data*,char*,unsigned char) ;

__attribute__((used)) static int FUNC_2(struct us_data *VAR_2, unsigned char *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2,
  VAR_2->recv_ctrl_pipe,
  VAR_0,
  0xC0,
  0,
  0,
  VAR_3,
  VAR_1);

 FUNC_1(VAR_2, "UIO register reads %02X\n", *VAR_3);

 return VAR_4;
}
