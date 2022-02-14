
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct hnae3_handle {int dummy; } ;
struct hclge_vport {struct hclge_dev* back; } ;
struct TYPE_3__ {int speed_ability; } ;
struct TYPE_4__ {TYPE_1__ mac; } ;
struct hclge_dev {TYPE_2__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct hclge_vport* FUNC_0 (struct hnae3_handle*) ;

__attribute__((used)) static int FUNC_1(struct hnae3_handle *VAR_9, u32 VAR_10)
{
 struct hclge_vport *VAR_11 = FUNC_0(VAR_9);
 struct hclge_dev *VAR_12 = VAR_11->back;
 u32 VAR_13 = VAR_12->hw.mac.speed_ability;
 u32 VAR_14 = 0;

 switch (VAR_10) {
 case 132:
  VAR_14 = VAR_4;
  break;
 case 134:
  VAR_14 = VAR_2;
  break;
 case 131:
  VAR_14 = VAR_5;
  break;
 case 133:
  VAR_14 = VAR_3;
  break;
 case 130:
  VAR_14 = VAR_6;
  break;
 case 129:
  VAR_14 = VAR_7;
  break;
 case 128:
  VAR_14 = VAR_8;
  break;
 case 135:
  VAR_14 = VAR_1;
  break;
 default:
  return -VAR_0;
 }

 if (VAR_14 & VAR_13)
  return 0;

 return -VAR_0;
}
