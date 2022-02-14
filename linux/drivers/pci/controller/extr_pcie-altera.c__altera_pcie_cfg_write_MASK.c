
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct altera_pcie {scalar_t__ root_bus_nr; TYPE_2__* pcie_data; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* rp_write_cfg ) (struct altera_pcie*,scalar_t__,int,int,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct altera_pcie*,scalar_t__,int,int,int) ;
 int FUNC_1 (struct altera_pcie*,scalar_t__,unsigned int,int,scalar_t__,int) ;

__attribute__((used)) static int FUNC_2(struct altera_pcie *VAR_1, u8 VAR_2,
      unsigned int VAR_3, int VAR_4, int VAR_5,
      u32 VAR_6)
{
 u32 VAR_7;
 u32 VAR_8 = 8 * (VAR_4 & 3);
 u8 VAR_9;

 if (VAR_2 == VAR_1->root_bus_nr && VAR_1->pcie_data->ops->rp_write_cfg)
  return VAR_1->pcie_data->ops->rp_write_cfg(VAR_1, VAR_2,
           VAR_4, VAR_5, VAR_6);

 switch (VAR_5) {
 case 1:
  VAR_7 = (VAR_6 & 0xff) << VAR_8;
  VAR_9 = 1 << (VAR_4 & 3);
  break;
 case 2:
  VAR_7 = (VAR_6 & 0xffff) << VAR_8;
  VAR_9 = 3 << (VAR_4 & 3);
  break;
 default:
  VAR_7 = VAR_6;
  VAR_9 = 0xf;
  break;
 }

 return FUNC_1(VAR_1, VAR_2, VAR_3, (VAR_4 & ~VAR_0),
       VAR_9, VAR_7);
}
