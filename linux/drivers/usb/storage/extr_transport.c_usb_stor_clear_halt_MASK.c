
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us_data {int pusb_dev; int send_ctrl_pipe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct us_data*,int ,int ,int ,int ,int,int *,int ,int) ;
 int FUNC_4 (struct us_data*,char*,int) ;

int FUNC_5(struct us_data *VAR_5, unsigned int VAR_6)
{
 int VAR_7;
 int VAR_8 = FUNC_0(VAR_6);

 if (FUNC_1 (VAR_6))
  VAR_8 |= VAR_1;

 VAR_7 = FUNC_3(VAR_5, VAR_5->send_ctrl_pipe,
  VAR_4, VAR_3,
  VAR_2, VAR_8,
  ((void*)0), 0, 3*VAR_0);

 if (VAR_7 >= 0)
  FUNC_2(VAR_5->pusb_dev, VAR_8);

 FUNC_4(VAR_5, "result = %d\n", VAR_7);
 return VAR_7;
}
