
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int dummy; } ;
struct dasd_device {int dummy; } ;
struct dasd_ccw_req {int dummy; } ;
struct dasd_block {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct dasd_ccw_req* FUNC_0 (struct dasd_device*,struct dasd_block*,struct request*) ;
 struct dasd_ccw_req* FUNC_1 (struct dasd_device*,struct dasd_block*,struct request*) ;
 scalar_t__ FUNC_2 (struct request*) ;

__attribute__((used)) static struct dasd_ccw_req *FUNC_3(struct dasd_device *VAR_2,
           struct dasd_block *VAR_3,
           struct request *VAR_4)
{
 if (FUNC_2(VAR_4) == VAR_0 || FUNC_2(VAR_4) == VAR_1)
  return FUNC_0(VAR_2, VAR_3, VAR_4);
 else
  return FUNC_1(VAR_2, VAR_3, VAR_4);
}
