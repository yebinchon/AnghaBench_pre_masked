
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct dasd_device {TYPE_5__* cdev; } ;
struct TYPE_7__ {int lpum; } ;
struct TYPE_8__ {TYPE_1__ sublog; } ;
struct TYPE_9__ {TYPE_2__ esw0; } ;
struct TYPE_10__ {TYPE_3__ esw; } ;
struct dasd_ccw_req {int lpm; int retries; int status; TYPE_4__ irb; struct dasd_device* startdev; } ;
typedef int __u8 ;
struct TYPE_11__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct dasd_device*,char*,int,int,int) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (struct dasd_device*) ;
 int FUNC_3 (int *,char*,int,int) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (int ,unsigned long) ;
 int FUNC_6 (int ,unsigned long) ;

__attribute__((used)) static void
FUNC_7(struct dasd_ccw_req * VAR_3)
{
 struct dasd_device *VAR_4 = VAR_3->startdev;
 __u8 VAR_5;
 unsigned long VAR_6;


 FUNC_5(FUNC_4(VAR_4->cdev), VAR_6);
 VAR_5 = FUNC_1(VAR_4->cdev);
 FUNC_6(FUNC_4(VAR_4->cdev), VAR_6);
 if (VAR_3->lpm == 0)
  VAR_3->lpm = FUNC_2(VAR_4) &
   ~(VAR_3->irb.esw.esw0.sublog.lpum);
 else
  VAR_3->lpm &= ~(VAR_3->irb.esw.esw0.sublog.lpum);

 if ((VAR_3->lpm & VAR_5) != 0x00) {

  FUNC_0(VAR_2, VAR_4,
       "try alternate lpm=%x (lpum=%x / opm=%x)",
       VAR_3->lpm, VAR_3->irb.esw.esw0.sublog.lpum, VAR_5);


  VAR_3->status = VAR_1;
  VAR_3->retries = 10;
 } else {
  FUNC_3(&VAR_4->cdev->dev,
   "The DASD cannot be reached on any path (lpum=%x"
   "/opm=%x)\n", VAR_3->irb.esw.esw0.sublog.lpum, VAR_5);


  VAR_3->status = VAR_0;
 }
}
