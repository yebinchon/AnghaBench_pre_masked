
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_3__ {int duplex; int speed; } ;
struct TYPE_4__ {TYPE_1__ mac; } ;
struct hclgevf_dev {TYPE_2__ hw; } ;



void FUNC_0(struct hclgevf_dev *VAR_0, u32 VAR_1,
     u8 VAR_2)
{
 VAR_0->hw.mac.speed = VAR_1;
 VAR_0->hw.mac.duplex = VAR_2;
}
