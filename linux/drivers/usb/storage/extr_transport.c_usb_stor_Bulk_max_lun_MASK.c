
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct us_data {int* iobuf; TYPE_1__* pusb_intf; int ifnum; int recv_ctrl_pipe; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct us_data*,int ,int ,int,int ,int ,int*,int,int) ;
 int FUNC_2 (struct us_data*,char*,int,int) ;

int FUNC_3(struct us_data *VAR_5)
{
 int VAR_6;


 VAR_5->iobuf[0] = 0;
 VAR_6 = FUNC_1(VAR_5, VAR_5->recv_ctrl_pipe,
     VAR_4,
     VAR_1 | VAR_3 |
     VAR_2,
     0, VAR_5->ifnum, VAR_5->iobuf, 1, 10*VAR_0);

 FUNC_2(VAR_5, "GetMaxLUN command result is %d, data is %d\n",
       VAR_6, VAR_5->iobuf[0]);






 if (VAR_6 > 0) {
  if (VAR_5->iobuf[0] < 16) {
   return VAR_5->iobuf[0];
  } else {
   FUNC_0(&VAR_5->pusb_intf->dev,
     "Max LUN %d is not valid, using 0 instead",
     VAR_5->iobuf[0]);
  }
 }
 return 0;
}
