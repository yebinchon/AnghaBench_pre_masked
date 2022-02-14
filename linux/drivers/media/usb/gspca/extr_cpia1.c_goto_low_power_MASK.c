
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
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct gspca_dev*,int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct gspca_dev*,int ,char*) ;
 int FUNC_2 (struct gspca_dev*,char*,scalar_t__) ;
 int FUNC_3 (struct gspca_dev*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_4(struct gspca_dev *VAR_6)
{
 struct sd *VAR_7 = (struct sd *) VAR_6;
 int VAR_8;

 VAR_8 = FUNC_0(VAR_6, VAR_1, 0, 0, 0, 0);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_0(VAR_6, VAR_0, 0, 0, 0, 0);
 if (VAR_8)
  return VAR_8;

 if (VAR_7->params.status.systemState != VAR_4) {
  if (VAR_7->params.status.systemState != VAR_5) {
   FUNC_2(VAR_6, "unexpected state after lo power cmd: %02x\n",
      VAR_7->params.status.systemState);
   FUNC_3(VAR_6, &VAR_7->params);
  }
  return -VAR_3;
 }

 FUNC_1(VAR_6, VAR_2, "camera now in LOW power state\n");
 return 0;
}
