
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {scalar_t__ next_to_use; } ;
struct TYPE_4__ {TYPE_1__ crq; } ;
struct hclgevf_hw {TYPE_2__ cmq; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct hclgevf_hw*,int ) ;

__attribute__((used)) static bool FUNC_1(struct hclgevf_hw *VAR_1)
{
 u32 VAR_2 = FUNC_0(VAR_1, VAR_0);

 return VAR_2 == VAR_1->cmq.crq.next_to_use;
}
