
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int cameraHeadID; int vpRevision; int vpVersion; } ;
struct TYPE_8__ {int deviceRevision; int product; int vendor; } ;
struct TYPE_7__ {int vcRevision; int vcVersion; int firmwareRevision; int firmwareVersion; } ;
struct TYPE_6__ {scalar_t__ qx3_detected; } ;
struct TYPE_10__ {TYPE_4__ vpVersion; TYPE_3__ pnpID; TYPE_2__ version; TYPE_1__ qx3; } ;
struct sd {TYPE_5__ params; } ;
struct gspca_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct gspca_dev*) ;
 int FUNC_1 (struct gspca_dev*,int ,char*,int ,int ,int ,...) ;
 int FUNC_2 (struct gspca_dev*) ;
 int FUNC_3 (struct gspca_dev*) ;

__attribute__((used)) static int FUNC_4(struct gspca_dev *VAR_1)
{
 struct sd *VAR_2 = (struct sd *) VAR_1;
 int VAR_3;




 VAR_3 = FUNC_2(VAR_1);
 if (VAR_3)
  return VAR_3;



 if (VAR_2->params.qx3.qx3_detected)
  FUNC_0(VAR_1);

 FUNC_3(VAR_1);

 FUNC_1(VAR_1, VAR_0, "CPIA Version:             %d.%02d (%d.%d)\n",
    VAR_2->params.version.firmwareVersion,
    VAR_2->params.version.firmwareRevision,
    VAR_2->params.version.vcVersion,
    VAR_2->params.version.vcRevision);
 FUNC_1(VAR_1, VAR_0, "CPIA PnP-ID:              %04x:%04x:%04x",
    VAR_2->params.pnpID.vendor, VAR_2->params.pnpID.product,
    VAR_2->params.pnpID.deviceRevision);
 FUNC_1(VAR_1, VAR_0, "VP-Version:               %d.%d %04x",
    VAR_2->params.vpVersion.vpVersion,
    VAR_2->params.vpVersion.vpRevision,
    VAR_2->params.vpVersion.cameraHeadID);

 return 0;
}
