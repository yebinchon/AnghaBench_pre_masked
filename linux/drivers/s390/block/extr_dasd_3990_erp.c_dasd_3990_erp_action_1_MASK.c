
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_ccw_req {scalar_t__ status; int retries; struct dasd_ccw_req* (* function ) (struct dasd_ccw_req*) ;int startdev; int lpm; int flags; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct dasd_ccw_req* FUNC_0 (struct dasd_ccw_req*) ;
 int FUNC_1 (struct dasd_ccw_req*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static struct dasd_ccw_req *FUNC_4(struct dasd_ccw_req *VAR_3)
{
 VAR_3->function = FUNC_4;
 FUNC_1(VAR_3);
 if (VAR_3->status == VAR_0 &&
     !FUNC_3(VAR_2, &VAR_3->flags)) {
  VAR_3->status = VAR_1;
  VAR_3->retries = 10;
  VAR_3->lpm = FUNC_2(VAR_3->startdev);
  VAR_3->function = FUNC_0;
 }
 return VAR_3;
}
