
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_device {int cdev; } ;
struct dasd_ccw_req {scalar_t__ callback_data; struct dasd_device* startdev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static inline int FUNC_3(struct dasd_ccw_req *VAR_1)
{
 struct dasd_device *VAR_2;
 int VAR_3;

 VAR_2 = VAR_1->startdev;
 FUNC_1(FUNC_0(VAR_2->cdev));
 VAR_3 = (VAR_1->callback_data == VAR_0);
 FUNC_2(FUNC_0(VAR_2->cdev));
 return VAR_3;
}
