
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ systemState; } ;
struct TYPE_4__ {TYPE_1__ status; } ;
struct sd {TYPE_2__ params; } ;
struct gspca_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct gspca_dev*,int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct gspca_dev*,int ,char*) ;
 int FUNC_2 (struct gspca_dev*,char*,scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct gspca_dev*,TYPE_2__*) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct gspca_dev *VAR_7)
{
 struct sd *VAR_8 = (struct sd *) VAR_7;
 int VAR_9;

 VAR_9 = FUNC_0(VAR_7, VAR_1, 0, 0, 0, 0);
 if (VAR_9)
  return VAR_9;

 FUNC_3(40);

 if (FUNC_5(VAR_6))
  return -VAR_3;

 VAR_9 = FUNC_0(VAR_7, VAR_0, 0, 0, 0, 0);
 if (VAR_9)
  return VAR_9;

 if (VAR_8->params.status.systemState != VAR_5) {
  FUNC_2(VAR_7, "unexpected state after hi power cmd: %02x\n",
     VAR_8->params.status.systemState);
  FUNC_4(VAR_7, &VAR_8->params);
  return -VAR_4;
 }

 FUNC_1(VAR_7, VAR_2, "camera now in HIGH power state\n");
 return 0;
}
