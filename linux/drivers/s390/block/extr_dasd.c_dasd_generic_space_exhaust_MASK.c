
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_device {scalar_t__ state; } ;
struct dasd_ccw_req {scalar_t__ status; int retries; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct dasd_device*) ;
 int FUNC_1 (struct dasd_device*,int ) ;
 int FUNC_2 (struct dasd_device*,int *,int ) ;
 int FUNC_3 (struct dasd_device*) ;

void FUNC_4(struct dasd_device *VAR_6,
    struct dasd_ccw_req *VAR_7)
{
 FUNC_2(VAR_6, ((void*)0), VAR_3);

 if (VAR_6->state < VAR_4)
  return;

 if (VAR_7->status == VAR_1 ||
     VAR_7->status == VAR_0) {
  VAR_7->status = VAR_2;
  VAR_7->retries++;
 }
 FUNC_1(VAR_6, VAR_5);
 FUNC_0(VAR_6);
 FUNC_3(VAR_6);
}
