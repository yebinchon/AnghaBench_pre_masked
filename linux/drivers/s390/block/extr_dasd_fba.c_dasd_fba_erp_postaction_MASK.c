
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_ccw_req {scalar_t__ function; int startdev; } ;
typedef int * dasd_erp_fn_t ;


 int FUNC_0 (int ,int ,char*,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;

__attribute__((used)) static dasd_erp_fn_t
FUNC_1(struct dasd_ccw_req * VAR_3)
{
 if (VAR_3->function == VAR_1)
  return VAR_2;

 FUNC_0(VAR_0, VAR_3->startdev, "unknown ERP action %p",
      VAR_3->function);
 return ((void*)0);
}
