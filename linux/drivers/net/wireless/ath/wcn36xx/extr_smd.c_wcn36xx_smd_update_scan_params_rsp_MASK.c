
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcn36xx_hal_update_scan_params_resp {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1(void *VAR_2, size_t VAR_3)
{
 struct wcn36xx_hal_update_scan_params_resp *VAR_4;

 VAR_4 = (struct wcn36xx_hal_update_scan_params_resp *)VAR_2;


 VAR_4->status &= (~(VAR_0));

 if (VAR_1 != VAR_4->status) {
  FUNC_0("error response from update scan\n");
  return VAR_4->status;
 }

 return 0;
}
