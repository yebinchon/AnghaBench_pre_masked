
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wd719x {TYPE_1__* pdev; } ;
typedef enum wd719x_card_type { ____Placeholder_wd719x_card_type } wd719x_card_type ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct wd719x*,int ) ;
 int FUNC_2 (struct wd719x*,int ,int) ;

__attribute__((used)) static enum wd719x_card_type FUNC_3(struct wd719x *VAR_7)
{
 u8 VAR_8 = FUNC_1(VAR_7, VAR_1);

 VAR_8 |= VAR_0;
 FUNC_2(VAR_7, VAR_1, VAR_8);
 VAR_8 = FUNC_1(VAR_7, VAR_2) & VAR_0;
 switch (VAR_8) {
 case 0x08:
  return VAR_3;
 case 0x02:
  return VAR_4;
 case 0x00:
  return VAR_5;
 default:
  FUNC_0(&VAR_7->pdev->dev, "unknown card type 0x%x\n", VAR_8);
  return VAR_6;
 }
}
