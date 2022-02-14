
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_4__ {int status; } ;
struct wdat_wdt {TYPE_2__ wdd; TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct wdat_wdt*,int ,int ,scalar_t__*) ;

__attribute__((used)) static void FUNC_3(struct wdat_wdt *VAR_3)
{
 u32 VAR_4 = 0;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_3, VAR_0, 0,
      &VAR_4);
 if (VAR_5 && VAR_5 != -VAR_1)
  FUNC_0(&VAR_3->pdev->dev, "Failed to read running state\n");

 if (VAR_4)
  FUNC_1(VAR_2, &VAR_3->wdd.status);
}
