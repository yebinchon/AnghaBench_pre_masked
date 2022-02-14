
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct hnae3_handle {int dummy; } ;
struct hclge_vport {struct hclge_dev* back; } ;
struct TYPE_3__ {int mac_addr; } ;
struct TYPE_4__ {TYPE_1__ mac; } ;
struct hclge_dev {TYPE_2__ hw; } ;


 int FUNC_0 (int *,int ) ;
 struct hclge_vport* FUNC_1 (struct hnae3_handle*) ;

__attribute__((used)) static void FUNC_2(struct hnae3_handle *VAR_0, u8 *VAR_1)
{
 struct hclge_vport *VAR_2 = FUNC_1(VAR_0);
 struct hclge_dev *VAR_3 = VAR_2->back;

 FUNC_0(VAR_1, VAR_3->hw.mac.mac_addr);
}
