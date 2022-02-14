
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct hnae3_handle {int dummy; } ;
struct TYPE_3__ {int duplex; int speed; } ;
struct TYPE_4__ {TYPE_1__ mac; } ;
struct hclgevf_dev {TYPE_2__ hw; } ;


 int VAR_0 ;
 struct hclgevf_dev* FUNC_0 (struct hnae3_handle*) ;

__attribute__((used)) static void FUNC_1(struct hnae3_handle *VAR_1,
         u8 *VAR_2, u32 *VAR_3,
         u8 *VAR_4)
{
 struct hclgevf_dev *VAR_5 = FUNC_0(VAR_1);

 if (VAR_3)
  *VAR_3 = VAR_5->hw.mac.speed;
 if (VAR_4)
  *VAR_4 = VAR_5->hw.mac.duplex;
 if (VAR_2)
  *VAR_2 = VAR_0;
}
