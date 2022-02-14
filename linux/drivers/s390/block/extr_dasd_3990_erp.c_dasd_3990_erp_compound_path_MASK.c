
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_ccw_req {scalar_t__ status; void (* function ) (struct dasd_ccw_req*,char*) ;int startdev; int lpm; int flags; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 char VAR_3 ;
 int FUNC_0 (struct dasd_ccw_req*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void
FUNC_3(struct dasd_ccw_req * VAR_4, char *VAR_5)
{
 if (VAR_5[25] & VAR_3) {
  FUNC_0(VAR_4);

  if (VAR_4->status == VAR_0 &&
      !FUNC_2(VAR_2, &VAR_4->flags)) {


   VAR_4->lpm = FUNC_1(VAR_4->startdev);
   VAR_4->status = VAR_1;
  }
 }

 VAR_4->function = FUNC_3;

}
