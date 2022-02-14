
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gspca_dev {int dummy; } ;
struct TYPE_2__ {int errorCode; int vpStatus; int debugFlags; int cmdError; int fatalError; int streamState; int grabState; int systemState; } ;
struct cam_params {TYPE_1__ status; } ;


 int VAR_0 ;
 int FUNC_0 (struct gspca_dev*,int ,char*,int ,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_1, struct cam_params *VAR_2)
{
 FUNC_0(VAR_1, VAR_0, "status: %02x %02x %02x %02x %02x %02x %02x %02x\n",
    VAR_2->status.systemState, VAR_2->status.grabState,
    VAR_2->status.streamState, VAR_2->status.fatalError,
    VAR_2->status.cmdError, VAR_2->status.debugFlags,
    VAR_2->status.vpStatus, VAR_2->status.errorCode);
}
