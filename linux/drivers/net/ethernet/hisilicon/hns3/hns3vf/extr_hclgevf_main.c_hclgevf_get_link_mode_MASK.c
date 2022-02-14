
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hnae3_handle {int dummy; } ;
struct TYPE_3__ {unsigned long supported; unsigned long advertising; } ;
struct TYPE_4__ {TYPE_1__ mac; } ;
struct hclgevf_dev {TYPE_2__ hw; } ;


 struct hclgevf_dev* FUNC_0 (struct hnae3_handle*) ;

__attribute__((used)) static void FUNC_1(struct hnae3_handle *VAR_0,
      unsigned long *VAR_1,
      unsigned long *VAR_2)
{
 struct hclgevf_dev *VAR_3 = FUNC_0(VAR_0);

 *VAR_1 = VAR_3->hw.mac.supported;
 *VAR_2 = VAR_3->hw.mac.advertising;
}
