
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct rocker_port {struct rocker* rocker; } ;
struct rocker {TYPE_1__* pdev; TYPE_2__* wops; } ;
struct TYPE_4__ {scalar_t__ mode; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct rocker_port*,scalar_t__*) ;
 int FUNC_2 (struct rocker*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct rocker_port *VAR_1)
{
 struct rocker *VAR_2 = VAR_1->rocker;
 u8 VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_1, &VAR_3);
 if (VAR_4) {
  FUNC_0(&VAR_2->pdev->dev, "failed to get port mode\n");
  return VAR_4;
 }
 if (VAR_2->wops) {
  if (VAR_2->wops->mode != VAR_3) {
   FUNC_0(&VAR_2->pdev->dev, "hardware has ports in different worlds, which is not supported\n");
   return -VAR_0;
  }
  return 0;
 }
 return FUNC_2(VAR_2, VAR_3);
}
