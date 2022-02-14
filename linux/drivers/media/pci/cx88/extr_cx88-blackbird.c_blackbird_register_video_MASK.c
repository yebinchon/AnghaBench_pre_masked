
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int device_caps; int * queue; int * ctrl_handler; } ;
struct TYPE_8__ {int hdl; } ;
struct cx8802_dev {TYPE_3__ mpeg_dev; TYPE_6__* core; int vb2_mpegq; TYPE_1__ cxhdl; int pci; } ;
struct TYPE_9__ {scalar_t__ tuner_type; } ;
struct TYPE_11__ {TYPE_2__ board; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_6__*,int ,TYPE_3__*,int *,char*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,int ,int) ;
 int FUNC_4 (TYPE_3__*,struct cx8802_dev*) ;

__attribute__((used)) static int FUNC_5(struct cx8802_dev *VAR_7)
{
 int VAR_8;

 FUNC_0(VAR_7->core, VAR_7->pci, &VAR_7->mpeg_dev,
         &VAR_6, "mpeg");
 VAR_7->mpeg_dev.ctrl_handler = &VAR_7->cxhdl.hdl;
 FUNC_4(&VAR_7->mpeg_dev, VAR_7);
 VAR_7->mpeg_dev.queue = &VAR_7->vb2_mpegq;
 VAR_7->mpeg_dev.device_caps = VAR_1 | VAR_2 |
        VAR_4;
 if (VAR_7->core->board.tuner_type != VAR_0)
  VAR_7->mpeg_dev.device_caps |= VAR_3;
 VAR_8 = FUNC_3(&VAR_7->mpeg_dev, VAR_5, -1);
 if (VAR_8 < 0) {
  FUNC_1("can't register mpeg device\n");
  return VAR_8;
 }
 FUNC_1("registered device %s [mpeg]\n",
  FUNC_2(&VAR_7->mpeg_dev));
 return 0;
}
