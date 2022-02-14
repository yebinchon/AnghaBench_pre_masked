
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us_data {int recv_ctrl_pipe; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct us_data*) ;
 int FUNC_1 (struct us_data*,int ,unsigned char,int,int ,int,unsigned char*,int) ;
 int FUNC_2 (struct us_data*,char*,unsigned char,unsigned char) ;

__attribute__((used)) static int FUNC_3(struct us_data *VAR_3, unsigned char *VAR_4)
{
 int VAR_5;
 unsigned char VAR_6;

 if (FUNC_0(VAR_3) == VAR_2)
  VAR_6 = VAR_1;
 else
  VAR_6 = VAR_0;

 VAR_5 = FUNC_1(VAR_3, VAR_3->recv_ctrl_pipe,
  VAR_6, 0xc0, 0, 1, VAR_4, 2);

 FUNC_2(VAR_3, "Media status %02X %02X\n", VAR_4[0], VAR_4[1]);

 return VAR_5;
}
