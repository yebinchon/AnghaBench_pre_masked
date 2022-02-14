
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_ccw_req {struct dasd_ccw_req* refers; } ;


 int FUNC_0 (struct dasd_ccw_req*,struct dasd_ccw_req*) ;

__attribute__((used)) static struct dasd_ccw_req *
FUNC_1(struct dasd_ccw_req *VAR_0)
{

 struct dasd_ccw_req *VAR_1 = VAR_0,
 *VAR_2 = ((void*)0);
 int VAR_3 = 0;

 if (VAR_0->refers == ((void*)0)) {
  return ((void*)0);
 }


 do {
  VAR_3 = FUNC_0(VAR_1, VAR_0->refers);
  VAR_2 = VAR_0;
  VAR_0 = VAR_0->refers;

 } while ((VAR_0->refers != ((void*)0)) && (!VAR_3));

 if (!VAR_3) {
  return ((void*)0);
 }

 return VAR_2;

}
