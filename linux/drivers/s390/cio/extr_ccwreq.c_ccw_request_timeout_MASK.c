
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int lpum; int * chpid; } ;
struct TYPE_9__ {TYPE_3__ pmcw; int scsw; } ;
struct TYPE_7__ {int cssid; } ;
struct subchannel {TYPE_4__ schib; TYPE_2__ schid; } ;
struct ccw_request {int timeout; int drc; } ;
struct TYPE_10__ {int parent; } ;
struct ccw_device {TYPE_5__ dev; TYPE_1__* private; } ;
struct TYPE_6__ {struct ccw_request req; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ccw_device*) ;
 int FUNC_1 (struct ccw_device*,int) ;
 int FUNC_2 (struct subchannel*) ;
 scalar_t__ FUNC_3 (struct subchannel*) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (char*,int ,int,int ,int ,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct subchannel* FUNC_8 (int ) ;

void FUNC_9(struct ccw_device *VAR_3)
{
 struct subchannel *VAR_4 = FUNC_8(VAR_3->dev.parent);
 struct ccw_request *VAR_5 = &VAR_3->private->req;
 int VAR_6 = -VAR_0, VAR_7;

 if (FUNC_3(VAR_4))
  goto err;

 for (VAR_7 = 0; VAR_7 < 8; VAR_7++) {
  if ((0x80 >> VAR_7) & VAR_4->schib.pmcw.lpum)
   FUNC_5("%s: No interrupt was received within %lus (CS=%02x, DS=%02x, CHPID=%x.%02x)\n",
    FUNC_4(&VAR_3->dev), VAR_5->timeout / VAR_2,
    FUNC_6(&VAR_4->schib.scsw),
    FUNC_7(&VAR_4->schib.scsw),
    VAR_4->schid.cssid,
    VAR_4->schib.pmcw.chpid[VAR_7]);
 }

 if (!FUNC_0(VAR_3)) {

  VAR_5->drc = -VAR_1;
 }
 VAR_6 = FUNC_2(VAR_4);
 if (VAR_6)
  goto err;
 return;

err:
 FUNC_1(VAR_3, VAR_6);
}
