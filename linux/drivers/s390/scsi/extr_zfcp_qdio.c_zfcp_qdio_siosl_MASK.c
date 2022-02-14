
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_adapter {int status; int ccw_device; } ;


 int VAR_0 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct zfcp_adapter *VAR_1)
{
 int VAR_2;

 if (FUNC_1(&VAR_1->status) & VAR_0)
  return;

 VAR_2 = FUNC_2(VAR_1->ccw_device);
 if (!VAR_2)
  FUNC_0(VAR_0,
    &VAR_1->status);
}
