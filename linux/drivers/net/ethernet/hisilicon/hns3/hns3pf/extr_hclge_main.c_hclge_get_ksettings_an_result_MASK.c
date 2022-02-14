
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct hnae3_handle {int dummy; } ;
struct hclge_vport {struct hclge_dev* back; } ;
struct TYPE_3__ {int autoneg; int duplex; int speed; } ;
struct TYPE_4__ {TYPE_1__ mac; } ;
struct hclge_dev {TYPE_2__ hw; } ;


 struct hclge_vport* FUNC_0 (struct hnae3_handle*) ;

__attribute__((used)) static void FUNC_1(struct hnae3_handle *VAR_0,
       u8 *VAR_1, u32 *VAR_2, u8 *VAR_3)
{
 struct hclge_vport *VAR_4 = FUNC_0(VAR_0);
 struct hclge_dev *VAR_5 = VAR_4->back;

 if (VAR_2)
  *VAR_2 = VAR_5->hw.mac.speed;
 if (VAR_3)
  *VAR_3 = VAR_5->hw.mac.duplex;
 if (VAR_1)
  *VAR_1 = VAR_5->hw.mac.autoneg;
}
