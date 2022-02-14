
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dasd_ccw_req {TYPE_1__* refers; } ;
struct TYPE_2__ {int irb; } ;


 char VAR_0 ;
 struct dasd_ccw_req* FUNC_0 (struct dasd_ccw_req*) ;
 struct dasd_ccw_req* FUNC_1 (struct dasd_ccw_req*,char*) ;
 struct dasd_ccw_req* FUNC_2 (struct dasd_ccw_req*,char*) ;
 struct dasd_ccw_req* FUNC_3 (struct dasd_ccw_req*) ;
 char* FUNC_4 (int *) ;

__attribute__((used)) static struct dasd_ccw_req *
FUNC_5(struct dasd_ccw_req *VAR_1)
{

 struct dasd_ccw_req *VAR_2 = ((void*)0);
 char *VAR_3;


 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2)
  return VAR_2;





 VAR_3 = FUNC_4(&VAR_1->refers->irb);
 if (!VAR_3)
  VAR_2 = FUNC_0(VAR_1);

 else if (VAR_3[27] & VAR_0) {


  VAR_2 = FUNC_1(VAR_1, VAR_3);

 } else {


  VAR_2 = FUNC_2(VAR_1, VAR_3);

 }

 return VAR_2;
}
