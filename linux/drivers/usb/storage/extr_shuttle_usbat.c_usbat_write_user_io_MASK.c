
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us_data {int send_ctrl_pipe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char,unsigned char) ;
 int FUNC_1 (struct us_data*,int ,int ,int,int ,int ,int *,int ) ;

__attribute__((used)) static int FUNC_2(struct us_data *VAR_2,
          unsigned char VAR_3,
          unsigned char VAR_4)
{
 return FUNC_1(VAR_2,
  VAR_2->send_ctrl_pipe,
  VAR_0,
  0x40,
  FUNC_0(VAR_3, VAR_4),
  0,
  ((void*)0),
  VAR_1);
}
