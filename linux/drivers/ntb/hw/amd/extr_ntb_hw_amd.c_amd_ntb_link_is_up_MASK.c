
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct ntb_dev {TYPE_1__* pdev; } ;
struct amd_ntb_dev {int lnk_sta; } ;
typedef enum ntb_width { ____Placeholder_ntb_width } ntb_width ;
typedef enum ntb_speed { ____Placeholder_ntb_speed } ntb_speed ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct amd_ntb_dev*) ;
 int FUNC_3 (int *,char*) ;
 struct amd_ntb_dev* FUNC_4 (struct ntb_dev*) ;

__attribute__((used)) static u64 FUNC_5(struct ntb_dev *VAR_2,
         enum ntb_speed *VAR_3,
         enum ntb_width *VAR_4)
{
 struct amd_ntb_dev *VAR_5 = FUNC_4(VAR_2);
 int VAR_6 = 0;

 if (FUNC_2(VAR_5)) {
  if (VAR_3)
   *VAR_3 = FUNC_0(VAR_5->lnk_sta);
  if (VAR_4)
   *VAR_4 = FUNC_1(VAR_5->lnk_sta);

  FUNC_3(&VAR_2->pdev->dev, "link is up.\n");

  VAR_6 = 1;
 } else {
  if (VAR_3)
   *VAR_3 = VAR_0;
  if (VAR_4)
   *VAR_4 = VAR_1;

  FUNC_3(&VAR_2->pdev->dev, "link is down.\n");
 }

 return VAR_6;
}
