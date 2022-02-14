
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {int bootstatus; } ;
struct wdat_wdt {TYPE_2__* pdev; TYPE_1__ wdd; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct wdat_wdt*,int ,int ,scalar_t__*) ;

__attribute__((used)) static void FUNC_2(struct wdat_wdt *VAR_4)
{
 u32 VAR_5 = 0;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_4, VAR_0, 0, &VAR_5);
 if (VAR_6 && VAR_6 != -VAR_2) {
  FUNC_0(&VAR_4->pdev->dev, "Failed to read boot status\n");
  return;
 }

 if (VAR_5)
  VAR_4->wdd.bootstatus = VAR_3;


 VAR_6 = FUNC_1(VAR_4, VAR_1, 0, ((void*)0));
 if (VAR_6 && VAR_6 != -VAR_2)
  FUNC_0(&VAR_4->pdev->dev, "Failed to clear boot status\n");
}
