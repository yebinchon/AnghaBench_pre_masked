
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct isp1362_hcd {int data_reg; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static u32 FUNC_2(struct isp1362_hcd *VAR_1)
{
 u32 VAR_2;





 VAR_0;
 VAR_2 = (u32)FUNC_1(VAR_1->data_reg);
 VAR_0;
 VAR_2 |= (u32)FUNC_1(VAR_1->data_reg) << 16;

 return VAR_2;
}
