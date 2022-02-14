
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_ccw_req {char status; int memdev; struct dasd_ccw_req* refers; } ;


 int FUNC_0 (struct dasd_ccw_req*,int ) ;

__attribute__((used)) static struct dasd_ccw_req *
FUNC_1(struct dasd_ccw_req * VAR_0, char VAR_1)
{
 struct dasd_ccw_req *VAR_2 = VAR_0->refers;

 FUNC_0(VAR_0, VAR_0->memdev);
 VAR_2->status = VAR_1;
 return VAR_2;

}
