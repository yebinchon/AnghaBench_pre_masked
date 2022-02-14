
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct hnae3_handle {int dummy; } ;
struct TYPE_3__ {int mac_addr; } ;
struct TYPE_4__ {TYPE_1__ mac; } ;
struct hclgevf_dev {TYPE_2__ hw; } ;


 int FUNC_0 (int *,int ) ;
 struct hclgevf_dev* FUNC_1 (struct hnae3_handle*) ;

__attribute__((used)) static void FUNC_2(struct hnae3_handle *VAR_0, u8 *VAR_1)
{
 struct hclgevf_dev *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(VAR_1, VAR_2->hw.mac.mac_addr);
}
