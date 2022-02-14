
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wkup_m3_ipc {int dev; } ;


 int FUNC_0 (int ) ;
 struct wkup_m3_ipc* VAR_0 ;

struct wkup_m3_ipc *FUNC_1(void)
{
 if (VAR_0)
  FUNC_0(VAR_0->dev);
 else
  return ((void*)0);

 return VAR_0;
}
