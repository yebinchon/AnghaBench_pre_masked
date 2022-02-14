
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_device {int cdev; } ;
struct dasd_ccw_req {scalar_t__ block; int status; struct dasd_device* startdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct dasd_device*,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (struct dasd_device*,int ) ;
 int FUNC_3 (struct dasd_device*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,unsigned long) ;
 int FUNC_6 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct dasd_ccw_req *VAR_4, int VAR_5)
{

 struct dasd_device *VAR_6 = VAR_4->startdev;
 unsigned long VAR_7;

 FUNC_0(VAR_2, VAR_6,
      "blocking request queue for %is", VAR_5/VAR_3);

 FUNC_5(FUNC_4(VAR_6->cdev), VAR_7);
 FUNC_2(VAR_6, VAR_1);
 FUNC_6(FUNC_4(VAR_6->cdev), VAR_7);
 VAR_4->status = VAR_0;
 if (VAR_4->block)
  FUNC_1(VAR_4->block, VAR_5);
 else
  FUNC_3(VAR_6, VAR_5);
}
