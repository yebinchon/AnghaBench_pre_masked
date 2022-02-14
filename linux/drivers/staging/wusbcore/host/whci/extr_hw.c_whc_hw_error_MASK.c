
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wusbhc {int dummy; } ;
struct whc {TYPE_1__* umc; struct wusbhc wusbhc; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,char const*) ;
 int FUNC_1 (struct wusbhc*) ;

void FUNC_2(struct whc *VAR_0, const char *VAR_1)
{
 struct wusbhc *VAR_2 = &VAR_0->wusbhc;

 FUNC_0(&VAR_0->umc->dev, "hardware error: %s\n", VAR_1);
 FUNC_1(VAR_2);
}
