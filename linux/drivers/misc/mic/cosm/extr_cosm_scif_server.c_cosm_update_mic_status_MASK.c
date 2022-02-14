
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cosm_device {scalar_t__ shutdown_status_int; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct cosm_device*,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct cosm_device *VAR_1)
{
 if (VAR_1->shutdown_status_int != VAR_0) {
  FUNC_0(VAR_1, VAR_1->shutdown_status_int);
  VAR_1->shutdown_status_int = VAR_0;
 }
}
