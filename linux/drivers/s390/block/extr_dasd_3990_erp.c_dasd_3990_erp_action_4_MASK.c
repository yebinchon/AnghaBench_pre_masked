
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_device {int dummy; } ;
struct dasd_ccw_req {scalar_t__ function; char* retries; int status; struct dasd_device* startdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct dasd_device*,char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct dasd_ccw_req*,int) ;

__attribute__((used)) static struct dasd_ccw_req *
FUNC_2(struct dasd_ccw_req * VAR_3, char *VAR_4)
{

 struct dasd_device *VAR_5 = VAR_3->startdev;




 if (VAR_3->function != FUNC_2) {

  FUNC_0(VAR_1, VAR_5, "%s",
       "dasd_3990_erp_action_4: first time retry");

  VAR_3->retries = 256;
  VAR_3->function = FUNC_2;

 } else {
  if (VAR_4 && (VAR_4[25] == 0x1D)) {

   FUNC_0(VAR_1, VAR_5,
        "waiting for state change pending "
        "interrupt, %d retries left",
        VAR_3->retries);

   FUNC_1(VAR_3, 30*VAR_2);

  } else if (VAR_4 && (VAR_4[25] == 0x1E)) {
   FUNC_0(VAR_1, VAR_5,
        "busy - redriving request later, "
        "%d retries left",
        VAR_3->retries);
                        FUNC_1(VAR_3, VAR_2);
  } else {

   FUNC_0(VAR_1, VAR_5,
         "redriving request immediately, "
         "%d retries left",
         VAR_3->retries);
   VAR_3->status = VAR_0;
  }
 }

 return VAR_3;

}
