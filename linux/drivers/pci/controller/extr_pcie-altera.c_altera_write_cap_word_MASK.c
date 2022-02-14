
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int value ;
typedef int u8 ;
typedef int u16 ;
struct altera_pcie {TYPE_1__* pcie_data; } ;
struct TYPE_2__ {scalar_t__ cap_offset; } ;


 int FUNC_0 (struct altera_pcie*,int ,unsigned int,scalar_t__,int,int ) ;

__attribute__((used)) static int FUNC_1(struct altera_pcie *VAR_0, u8 VAR_1,
     unsigned int VAR_2, int VAR_3, u16 VAR_4)
{
 return FUNC_0(VAR_0, VAR_1, VAR_2,
          VAR_0->pcie_data->cap_offset + VAR_3,
          sizeof(VAR_4),
          VAR_4);
}
