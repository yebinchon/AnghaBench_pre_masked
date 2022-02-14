
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmi {int ep_id; } ;
typedef enum htc_endpoint_id { ____Placeholder_htc_endpoint_id } htc_endpoint_id ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;

void FUNC_1(struct wmi *VAR_2, enum htc_endpoint_id VAR_3)
{
 if (FUNC_0(VAR_3 == VAR_1 || VAR_3 >= VAR_0))
  return;

 VAR_2->ep_id = VAR_3;
}
