
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hnae3_handle {int flags; } ;
struct hclge_vport {struct hclge_dev* back; } ;
struct TYPE_5__ {scalar_t__ speed; scalar_t__ phydev; } ;
struct TYPE_6__ {TYPE_2__ mac; } ;
struct hclge_dev {TYPE_3__ hw; TYPE_1__* pdev; } ;
struct TYPE_4__ {int revision; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct hclge_vport* FUNC_1 (struct hnae3_handle*) ;
 int FUNC_2 (struct hnae3_handle*,int) ;

__attribute__((used)) static int FUNC_3(struct hnae3_handle *VAR_11, int VAR_12)
{





 struct hclge_vport *VAR_13 = FUNC_1(VAR_11);
 struct hclge_dev *VAR_14 = VAR_13->back;
 int VAR_15 = 0;






 if (VAR_12 == VAR_1) {

  VAR_11->flags = (VAR_11->flags & (~(VAR_6 | VAR_7 | VAR_9 | VAR_8)));
  if (VAR_14->pdev->revision >= 0x21 ||
      VAR_14->hw.mac.speed == VAR_4 ||
      VAR_14->hw.mac.speed == VAR_3 ||
      VAR_14->hw.mac.speed == VAR_5) {
   VAR_15 += 1;
   VAR_11->flags |= VAR_6;
  }

  VAR_15 += 2;
  VAR_11->flags |= VAR_9;
  VAR_11->flags |= VAR_8;

  if (VAR_14->hw.mac.phydev) {
   VAR_15 += 1;
   VAR_11->flags |= VAR_7;
  }

 } else if (VAR_12 == VAR_0) {
  VAR_15 = FUNC_0(VAR_10) +
   FUNC_2(VAR_11, VAR_12);
 }

 return VAR_15;
}
