
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int dummy; } ;
struct dasd_ccw_req {int memdev; int status; } ;


 int VAR_0 ;
 int FUNC_0 (struct dasd_ccw_req*,int ) ;

__attribute__((used)) static int
FUNC_1(struct dasd_ccw_req *VAR_1, struct request *VAR_2)
{
 int VAR_3;

 VAR_3 = VAR_1->status == VAR_0;
 FUNC_0(VAR_1, VAR_1->memdev);
 return VAR_3;
}
